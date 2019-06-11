#ifndef NOEUD_H
#define NOEUD_H

#include <stdio.h>
#include <stdlib.h>
#include "mot.h"

struct noeud {
	 int touche;
	 struct mot *mot;
	 struct noeud *suivant;
	 struct noeud *fils;
};
typedef struct noeud noeud;


noeud * nouveau_noeud(int touche);
noeud * ajouter_noeud_suivant(noeud * n, int touche);
noeud * ajouter_noeud_fils(noeud * n, int touche);
mot   * ajouter_mot(noeud * n, char chaine[]);

#endif
