#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int position = 0; 
	
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
		
		int retour;
		
		/*printf("la fonction demarre et elle connait :");
		printf("%d",chapitre1.gold);
		printf("%d",position);*/

		printf("Choisissez dans quel chapitre aller : \n");
		
		if(position = 1){
			printf("-tapez 1 pour aller dans le chapitre 1 \n tapez 2 pour aller dans le chapitre 2 \n tapez 3 pour aller dans le chapitre 3 \n"); 
		}
		else if(position = 2){
					printf("-tapez 0 pour aller dans le chapitre 0 \n tapez 2 pour aller dans le chapitre 2 \n tapez 3 pour aller dans le chapitre 3 \n"); 
		}
		else if(position = 3){
					printf("-tapez 0 pour aller dans le chapitre 0 \n tapez 1 pour aller dans le chapitre 1 \n tapez 3 pour aller dans le chapitre 3 \n"); 
		}
		else if(position = 4){
					printf("-tapez 0 pour aller dans le chapitre 0 \n tapez 1 pour aller dans le chapitre 1 \n tapez 2 pour aller dans le chapitre 2 \n"); 
		}
		
		scanf("%d",retour); 
		
		return retour ;
	}

int main() {
	
	int move ; 
	
	printf("bienvenue dans le jeu dont vous etes le heros \n");

	move = deplacement() ;
	
	if(move = 1){
			printf("bienvenue dans le jeu dont vous etes le heros \n"); 
			move = deplacement() ;
		}
		else if(move = 2){
					printf("%n \n",chapitre1.description); 
					move = deplacement() ;
		}
		else if(move = 3){
					printf("%n \n",chapitre3.description); 
					move = deplacement() ;
		}
		else if(move = 4){
					printf("%n \n",chapitre3.description); 
					move = deplacement() ;
		}
	
	
	

	
	
}

