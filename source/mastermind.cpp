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
}

void MasterMind::genSecret() {
    unsigned int r = 0;
    srand ( time (0));

    for(int i = 0; i< SECRET_SIZE ;i++) {
        r = get_random(NB_COULEURS-2) ;
        secret[i] = _ecolors_(r) ;
        std::cout << _ecolors_(r) << std::endl;
    }

    std::cout << _ecolors_(secret[0]) << std::endl;
    std::cout << secret[1] << std::endl;
    std::cout << secret[2] << std::endl;
    std::cout << secret[3] << std::endl;

}

