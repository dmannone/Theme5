#ifndef CALLBACKS_H
#define CALLBACKS_H

#include <stdio.h>   /* sprintf */
#include <stdlib.h>  /* atoi */
#include <string.h>  /* strlen, strcmp */
#include <ctype.h>   /* isdigit */
#include <gtk-2.0/gtk/gtk.h>


//importer la variable globale du fichier main
extern GtkBuilder *builder;

//importer la variable globale du fichier main
extern touches_input[256];

//importer la variable globale du fichier main
extern touches_input_index;


G_MODULE_EXPORT void on_main_window_destroy    ();
G_MODULE_EXPORT void on_button_button1_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button2_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button3_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button4_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button5_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button6_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button7_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button8_clicked (GtkObject *object, gpointer user_data);
G_MODULE_EXPORT void on_button_button9_clicked (GtkObject *object, gpointer user_data);

#endif /* CALLBACKS_H */
