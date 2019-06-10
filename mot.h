#ifndef MOT_H
#define MOT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mot {
	char mot[256];
	struct mot *suivant;
};
typedef struct mot mot;

mot * nouveau_mot(char chaine[]);
mot * ajouter_mot_suivant(mot * m, char chaine[]);
void afficher_liste_mot(mot * m);


#endif
