#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	struct Objet {

		int prix ;
		char nom[20] ;
	
	};
	
	typedef struct Objet Objet ;
	
	Objet tunique = {5, "tunique"};
	Objet dague = {8, "dague"};
	Objet epee = {10, "epee"};
	Objet bouclier = {15, "bouclier"};
	Objet bottes = {5, "bottes"};
	
	
	
	/*
	printf ("inventaire : \n");
	
	printf ("-%s", tunique.nom );
	printf (" / %d pieces \n",tunique.prix);
	printf ("-%s", dague.nom );
	printf (" / %d pieces \n",dague.prix);
	
	printf ("-%s", epee.nom );
	printf (" / %d pieces \n",epee.prix);
	printf ("-%s", bouclier.nom );
	printf (" / %d pieces \n",bouclier.prix);
	printf ("-%s", bottes.nom );
	printf (" / %d pieces \n",bottes.prix);
	*/
	
}



