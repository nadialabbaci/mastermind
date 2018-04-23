#include "source/mastermind.h"

#include <iostream>

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

using namespace std;

/* retourne une valeur comprise entre 0 et max inclus . */
static unsigned int get_random ( unsigned int max)
{
    return rand () %( max + 1);
}

int main ( void ){

    MasterMind *codeSecret = NULL , *partie = NULL ;
    eColors essai[4] = {BLANC,BLANC,BLANC,BLANC};
    sResult essaiResult;
    codeSecret = new MasterMind();
    unsigned short trouve;

    //    partie = new MasterMind(essai);

    while(trouve != 0){
        for (int i=0; i<SECRET_SIZE; i++){
            int num;
            cout << "Please enter your code: ";
            cin >> num;
            essai[i] = (eColors)num;
        }

        trouve = codeSecret->getResult(&essaiResult, essai);
    }

    return 0;
}