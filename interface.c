#include "interface.h"

void contruction_interface(int argc, char *argv[]){
	  GtkWidget *main_window;

	  /* Initialisation de GTK */
	  gtk_init (&argc, &argv);

	  /* Creation des widgets de l'interface a partir du fichier XML de Glade, grace au builder GTK */
	  builder = gtk_builder_new ();
	  if (gtk_builder_add_from_file (builder, "interface.glade", NULL) == 0) {
	    fprintf (stderr, "Erreur: ouverture du fichier GLADE\n") ;
	    exit(EXIT_FAILURE);
	  }

	  /* Recuperation du widget de la fenetre principale */
	  main_window = GTK_WIDGET (gtk_builder_get_object (builder, "MainWindow"));
	  gtk_window_set_title (GTK_WINDOW (main_window), "Theme5 - 9 Key");

	  /* ajout de l'event à la callback deleve-event on_main_window_destroy pour fermer l'application */
	  g_signal_connect (GTK_WINDOW (main_window), "destroy", G_CALLBACK(on_main_window_destroy), NULL);

	  // Ajout des signaux clicked pour les boutons
	  GtkWidget *bouton1 = GTK_WIDGET (gtk_builder_get_object (builder, "button1"));
	  g_signal_connect (G_OBJECT (bouton1), "clicked", G_CALLBACK(on_button_button1_clicked), NULL);
	  GtkWidget *bouton2 = GTK_WIDGET (gtk_builder_get_object (builder, "button2"));
	  g_signal_connect (G_OBJECT (bouton2), "clicked", G_CALLBACK(on_button_button2_clicked), NULL);
	  GtkWidget *bouton3 = GTK_WIDGET (gtk_builder_get_object (builder, "button3"));
	  g_signal_connect (G_OBJECT (bouton3), "clicked", G_CALLBACK(on_button_button3_clicked), NULL);
	  GtkWidget *bouton4 = GTK_WIDGET (gtk_builder_get_object (builder, "button4"));
	  g_signal_connect (G_OBJECT (bouton4), "clicked", G_CALLBACK(on_button_button4_clicked), NULL);
	  GtkWidget *bouton5 = GTK_WIDGET (gtk_builder_get_object (builder, "button5"));
	  g_signal_connect (G_OBJECT (bouton5), "clicked", G_CALLBACK(on_button_button5_clicked), NULL);
	  GtkWidget *bouton6 = GTK_WIDGET (gtk_builder_get_object (builder, "button6"));
	  g_signal_connect (G_OBJECT (bouton6), "clicked", G_CALLBACK(on_button_button6_clicked), NULL);
	  GtkWidget *bouton7 = GTK_WIDGET (gtk_builder_get_object (builder, "button7"));
	  g_signal_connect (G_OBJECT (bouton7), "clicked", G_CALLBACK(on_button_button7_clicked), NULL);
	  GtkWidget *bouton8 = GTK_WIDGET (gtk_builder_get_object (builder, "button8"));
	  g_signal_connect (G_OBJECT (bouton8), "clicked", G_CALLBACK(on_button_button8_clicked), NULL);
	  GtkWidget *bouton9 = GTK_WIDGET (gtk_builder_get_object (builder, "button9"));
	  g_signal_connect (G_OBJECT (bouton9), "clicked", G_CALLBACK(on_button_button9_clicked), NULL);

	  //Initialiser les buffers des textviews
	  vue1 = GTK_TEXT_VIEW (gtk_builder_get_object (builder, "textview1"));
	  buffer1 = gtk_text_view_get_buffer (vue1);
	  vue2 = GTK_TEXT_VIEW (gtk_builder_get_object (builder, "textview2"));
	  buffer2 = gtk_text_view_get_buffer (vue2);
	  vue3 = GTK_TEXT_VIEW (gtk_builder_get_object (builder, "textview3"));
	  buffer3 = gtk_text_view_get_buffer (vue3);

	  /* Changement de la fenetre principale a l'etat visible */
	   gtk_widget_show_all (main_window);

	   /* Lancement de l'execution de la boucle GTK */
	   gtk_main ();
	   g_object_unref (G_OBJECT (builder));
}
