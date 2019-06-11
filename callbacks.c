#include "callbacks.h"

void on_main_window_destroy() {
	  printf("Fermeture de la fenetre.\n");
	  gtk_main_quit();
}

void mise_a_jour_des_buffers(int boolean_reset) {
	gtk_text_buffer_set_text (buffer1, touches_input, -1);

	/*
	 * Mots exacts
	 */
	GtkTextIter iter_debut;
	GtkTextIter iter_fin;

	gtk_text_buffer_get_iter_at_line(buffer2, &iter_debut, 0);
    gtk_text_buffer_get_iter_at_line(buffer2, &iter_fin, 5000);
    gtk_text_buffer_delete(buffer2, &iter_debut, &iter_fin);
    int touches_input_int[5000] = { 0 };

	if(boolean_reset != 0){
		int count = 0;
		while (((touches_input[count] - '0') >= 2) && ((touches_input[count] - '0') <= 9)) {
			touches_input_int[count] = touches_input[count] - '0';
			count++;
		}

		for(int i =0; i < 10; i++) {
			printf("touches_input_int[%d]\n", touches_input_int[i]);
		}
		printf("\n");
		mot * m = rechercher_mots_dans_larbre(arbre, touches_input_int);
		strcat(mots_exacts_input, m->mot);
		strcat(mots_exacts_input, "\n");
		while(m->suivant) {
			m = m->suivant;
			strcat(mots_exacts_input, m->mot);
			strcat(mots_exacts_input, "\n");
		}
	}
	gtk_text_buffer_set_text (buffer2, mots_exacts_input, -1);
}

void ajouter_une_lettre_dans_touches_input(char c) {
	if(touches_input_index < 256 - 1){
		touches_input[touches_input_index] = c;
		touches_input_index++;
		touches_input[touches_input_index + 1] = '\0';
	}
}

void on_button_button1_clicked (GtkObject *object, gpointer user_data) {
	for(int i = 0; i < 256; i++)
		touches_input[i] = '\0';
	for(int i = 0; i < 5000; i++)
		mots_exacts_input[i] = '\0';
	touches_input_index = 0;
	mise_a_jour_des_buffers(0);
}

void on_button_button2_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('2');
	mise_a_jour_des_buffers(1);
}

void on_button_button3_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('3');
	mise_a_jour_des_buffers(1);
}

void on_button_button4_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('4');
	mise_a_jour_des_buffers(1);
}

void on_button_button5_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('5');
	mise_a_jour_des_buffers(1);
}

void on_button_button6_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('6');
	mise_a_jour_des_buffers(1);
}

void on_button_button7_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('7');
	mise_a_jour_des_buffers(1);
}

void on_button_button8_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('8');
	mise_a_jour_des_buffers(1);
}

void on_button_button9_clicked (GtkObject *object, gpointer user_data) {
	ajouter_une_lettre_dans_touches_input('9');
	mise_a_jour_des_buffers(1);
}
