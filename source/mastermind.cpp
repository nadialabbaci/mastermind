#include "mastermind.h"

#include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/* retourne une valeur comprise entre 0 et max inclus . */
static unsigned int get_random ( unsigned int max)
{
    return rand () %( max + 1);
}

MasterMind::MasterMind() {
    memset ( secret , 0 , sizeof ( secret ) ) ;
    genSecret();
}

MasterMind::MasterMind(const eColors *secretCode) {
    memcpy ( secret , secretCode , sizeof ( secret ) - 1 ) ;
}

MasterMind::~MasterMind() {
    memset ( secret , 0 , sizeof ( secret ) ) ;
}

int MasterMind::getResult(sResult *result, const eColors *code) {

    result->pOk = 0;
    result->pKo = 0;

    int nbColor = 0;

    for (int i=0; i<SECRET_SIZE; i++ ){

        if(code[i] == secret[i]){

            std::cout << "ok" << std::endl;
            result->pOk += 1;
        }else{
            for (int j=0; j<SECRET_SIZE; j++ ) {
                if(code[i] == secret[j] &&          // couleur trouvée a un autre index
                    code[i] != secret[i] &&         // ne pas prendre en compte meme couleur et meme pos
                   (secret[j] != secret[i])){       // Ne pas repasser dans la boucle en cours

                    result->pKo += 1;
                    break;
                }
            }
        }

        std::cout << "-----" << std::endl;
        std::cout << std::to_string(code[i]) + " | " + std::to_string(secret[i]) << std::endl;
        std::cout << "-----" << std::endl;

    }

    std::cout << "==" << std::endl;
    std::cout << std::to_string(result->pKo) << " couleurs trouvées mais a la mauvaise position." << std::endl;
    std::cout << std::to_string(result->pOk) << " couleurs trouvées et la bonne position." << std::endl;

    if(result->pOk == 4){
        return 0;
    }else{
        return -1;
    }

}

void MasterMind::genSecret() {
    unsigned int r = 0;
    srand ( time (0));

    for(int i = 0; i< SECRET_SIZE ;i++) {
        r = get_random(NB_COULEURS-1) ;
        //        secret[i] = _ecolors_(r) ;
        secret[i] = (eColors) r ;
//        std::cout << secret[i] << std::endl;
    }

    //    std::cout << _ecolors_(secret[0]) << std::endl;
    //    std::cout << secret[1] << std::endl;
    //    std::cout << secret[2] << std::endl;
    //    std::cout << secret[3] << std::endl;

}

