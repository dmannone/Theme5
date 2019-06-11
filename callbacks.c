#include "callbacks.h"

void on_main_window_destroy() {
	  printf("Fermeture de la fenetre.\n");
	  gtk_main_quit();
}

void on_button_button1_clicked (GtkObject *object, gpointer user_data) {
	for(int i=0;i < 256; i++)
		touches_input[256] = 0;
	touches_input_index = 0;
}

void on_button_button2_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 2;
		touches_input_index++;
	}
}

void on_button_button3_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 3;
		touches_input_index++;
	}
}

void on_button_button4_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 4;
		touches_input_index++;
	}
}

void on_button_button5_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 5;
		touches_input_index++;
	}
}

void on_button_button6_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 6;
		touches_input_index++;
	}
}

void on_button_button7_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 7;
		touches_input_index++;
	}
}

void on_button_button8_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 8;
		touches_input_index++;
	}
}

void on_button_button9_clicked (GtkObject *object, gpointer user_data) {
	if(touches_input_index < 256){
		touches_input[touches_input_index] = 9;
		touches_input_index++;
	}
}
