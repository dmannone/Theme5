#ifndef CALLBACKS_H
#define CALLBACKS_H

#include <stdio.h>   /* sprintf */
#include <stdlib.h>  /* atoi */
#include <string.h>  /* strlen, strcmp */
#include <ctype.h>   /* isdigit */
#include <gtk-2.0/gtk/gtk.h>
#include "arbre.h"


//importer la variable globale du fichier main
extern GtkBuilder *builder;

extern GtkTextView *vue1;
extern GtkTextView *vue2;
extern GtkTextView *vue3;
extern GtkTextBuffer *buffer1;
extern GtkTextBuffer *buffer2;
extern GtkTextBuffer *buffer3;

//importer la variable globale du fichier main
extern char touches_input[256];
extern char mots_exacts_input[5000];
//importer la variable globale du fichier main
extern int touches_input_index;


G_MODULE_EXPORT void on_main_window_destroy ();
G_MODULE_EXPORT void on_button_button1_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button2_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button3_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button4_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button5_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button6_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button7_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button8_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button9_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void ajouter_une_lettre_dans_touches_input(char c);

#endif /* CALLBACKS_H */
