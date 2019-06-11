#ifndef ARBRE_H
#define ARBRE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "noeud.h"
#include "mot.h"
#include "touche.h"

#define TAILLE_MAX 200

//importer la variable globale du fichier main
extern noeud * arbre;

void ajouter_mot_dans_larbre(noeud * n, char chaine[], int *touches);
void construction_de_larbre();
void afficher_mots_dans_larbre(noeud *n, char chaine[], int *touches);
mot * rechercher_mots_dans_larbre(noeud *n, int * touches);

#endif
