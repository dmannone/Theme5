#ifndef INTERFACE_H
#define INTERFACE_H


#include <stdio.h>   /* sprintf */
#include <stdlib.h>
#include "callbacks.h"
#include <gtk-2.0/gtk/gtk.h>
//importer la variable globale du fichier main
extern GtkBuilder *builder;


void contruction_interface(int argc, char *argv[]);

#endif /* INTERFACE_H */
