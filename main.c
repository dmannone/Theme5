/*
 ============================================================================
 Name        : Key9nAry.c
 Author      :
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk-2.0/gtk/gtk.h>

#include "mot.h"
#include "noeud.h"
#include "touche.h"
#include "util.h"
#include "arbre.h"
#include "interface.h"

noeud * arbre;
GtkBuilder *builder;
int touches_input[256];
int touches_input_index = 0;

int main (int argc, char *argv[]) {

	arbre = nouveau_noeud(2);
	construction_de_larbre();
	contruction_interface(argc, argv);

    return EXIT_SUCCESS;
}
