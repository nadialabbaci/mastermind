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

    codeSecret = new MasterMind();
    partie = new MasterMind(co);

    partie->getResult(0, co);

    return 0;
}