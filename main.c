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

GtkTextView *vue1;
GtkTextView *vue2;
GtkTextView *vue3;
GtkTextBuffer *buffer1;
GtkTextBuffer *buffer2;
GtkTextBuffer *buffer3;

char touches_input[256];
char mots_exacts_input[5000];
int touches_input_index = 0;

int main (int argc, char *argv[]) {

	arbre = nouveau_noeud(2);
	construction_de_larbre();
	contruction_interface(argc, argv);

    return EXIT_SUCCESS;
}
