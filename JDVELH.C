#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int position = 1; 
	
	struct Chapitre {

		int gold ;
		int pv ;
		char description[150];
		//int id[10] ;
		int numero;
		
	
	};
	
	typedef struct Chapitre Chapitre ;
	
	Chapitre chapitre1 = {10, 3,"ceci est la description du premier chapitre",1};
	Chapitre chapitre2 = {15, 5,"ceci est la description du second chapitre",2};
	Chapitre chapitre3 = {20, 7,"ceci est la description du troisieme chapitre",3};

int deplacement() {
		
		/*printf("la fonction demarre et elle connait :");
		printf("%d",chapitre1.gold);
		printf("%d",position);*/

		printf("Choisissez dans quel chapitre aller : \n");
		
		
		return 0 ;
	}

int main() {
	
	int move ;

	move = deplacement() ; 
	
	
}
