#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	
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

	
	/*int deplacement() {
		
		printf ("Entrez 1 pour aller a premiere destination \n entrez 2 pour aller a deuxieme destination"); 
	scanf("%d",&choix);
	
	if(choix==1){
		printf ("vous etes arrive a la premiere destination");
	}
	else if(choix==2) {
		printf ("vous etes arrive a la deuxieme destination");
		
		return 0 ; 
	}*/
	
	//printf ("salut %d",chapitre1.numero);

	int deplacement(){
		
		
		
		return 0 ;
	}
	
	
	
}



