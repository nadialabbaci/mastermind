#ifndef MASTERMIND_LIBRARY_H
#define MASTERMIND_LIBRARY_H

# define SECRET_SIZE 4
# define NB_COULEURS 7

typedef enum _ecolors_
{
	BLANC = 0,
	VERT = 1 ,
	ROUGE = 2,
	BLEU = 3 ,
	NOIR = 4 ,
	OR = 5,
	VIOLET = 6,
} eColors ;

typedef struct _sresult_
{
	/* nombre de pions de la bonne couleur et bien places . */
	unsigned short pOk ;
	/* nombre de pions de la bonne couleur mais mal places . */
	unsigned short pKo ;
} sResult ;

class MasterMind
{
public :
	/** Initialise le code secret via le generateur */
	MasterMind ( void );
	/** Initialise le code secret via celui en parameter */
	MasterMind ( const eColors * secretCode );
	/** Met a zero le code secret */
	~ MasterMind ( void );
	/**
	* Donne le resultat d'analyse du code du joueur et du secret .
	*
	* @param [out] result Resultat de l'analyse .
	* @param [in] code Code du joueur .
	*
	* @return 0 - combinaisons identiques .
	* -1 - combinaisons differentes .
	*/
	int getResult ( sResult * result , const eColors code [ SECRET_SIZE ] ) ;

private :
	/**
	* Genere le code secret a partir des couleurs proposees par le type
	* eColors . Une meme couleur peut apparaitre plusieurs fois dans le code
	* secret .
	*/
	void genSecret ( void ) ;

private :
	eColors secret [ SECRET_SIZE ];
};

# endif
