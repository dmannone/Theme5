#include "util.h"

void afficher_tableau(int *pointeur, int taille)
{
    for(int i = 0; i < taille; ++i )
    	printf("%d", pointeur[i]);
}
