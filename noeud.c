#include "noeud.h"

noeud * nouveau_noeud(int touche)
{
    noeud * nouveau_noeud = malloc(sizeof(noeud));

    if (nouveau_noeud) {
    	nouveau_noeud->touche = touche;
    	nouveau_noeud->suivant = NULL;
    	nouveau_noeud->fils = NULL;
    	nouveau_noeud->mot = NULL;
    }

    return nouveau_noeud;
}

noeud * ajouter_noeud_suivant(noeud * n, int touche)
{
    if(n == NULL) return NULL;

    if(n->touche == touche) return n;

    while (n->suivant) {
    	if(n->touche == touche) return n;
    	n = n->suivant;
    }

    return (n->suivant = nouveau_noeud(touche));
}

noeud * ajouter_noeud_fils(noeud * n, int touche) {
	if (n == NULL)
		return NULL;

	if (n->fils)
	     return ajouter_noeud_suivant(n->fils, touche);

	return (n->fils = nouveau_noeud(touche));
}

mot * ajouter_mot(noeud * n, char chaine[]) {
	if (n == NULL)
		return NULL;

	if(n->mot)
		return ajouter_mot_suivant(n->mot, chaine);
	return (n->mot = nouveau_mot(chaine));
}
