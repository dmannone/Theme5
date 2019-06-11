#include "mot.h"

mot * nouveau_mot(char chaine[])
{
    mot *nouveau_mot = malloc(sizeof(mot));

    if (nouveau_mot) {
    	strncpy(nouveau_mot->mot, chaine, strlen(chaine));
    	nouveau_mot->mot[strlen(chaine)] = '\0';
    	nouveau_mot->suivant = NULL;
    }

    return nouveau_mot;
}

mot * ajouter_mot_suivant(mot * m, char chaine[])
{
    if (m == NULL) return NULL;

    while (m->suivant)
    	m = m->suivant;
    return (m->suivant = nouveau_mot(chaine));
}

void afficher_liste_mot(mot * m)
{
	if(m == NULL) return;
	printf("%s ", m->mot);
	while(m->suivant) {
		m = m->suivant;
		printf("%s ", m->mot);
	}
	printf("\n");
}
