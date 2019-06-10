#ifndef TOUCHE_H
#define TOUCHE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_INPUT_TOUCHE = 200;

int touche_en_fonction_de_la_lettre(char c);
int *recuperer_les_touches_en_fonction_du_mot(char chaine[]);

#endif
