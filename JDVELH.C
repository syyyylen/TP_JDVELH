#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int position = 0; 
	
	struct Chapitre {

		int gold ;
		int pv ;
		char description[150];
		int numero;
		int id[2] ;
	
	};
	
	typedef struct Chapitre Chapitre ;
	
	Chapitre chapitre1 = {10, 3,"ceci est la description du premier chapitre",1,{2,3}};
	Chapitre chapitre2 = {15, 5,"ceci est la description du second chapitre",2,{3,1}};
	Chapitre chapitre3 = {20, 7,"ceci est la description du troisieme chapitre",3,{1,2}};

int deplacement() {
		
		int retour;
		
		/*printf("la fonction demarre et elle connait :");
		printf("%d",chapitre1.gold);
		printf("%d",position);*/

		
		printf("Choisissez dans quel chapitre aller : \n");
		
		
		return retour ;
	}

int main() {
	
	int move ; 
	
	printf("bienvenue dans le jeu dont vous etes le heros \n");

	move = deplacement() ;

}

