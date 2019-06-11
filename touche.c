#include "touche.h"
/*
 * Retourne le numéro de la touche correspondant à la lettre passée en paramètre
 * Par exemple toucheEnFonctionDeLaLettre('b')  => retourne 2
 * toucheEnFonctionDeLaLettre('a')  => retourne 2
 * toucheEnFonctionDeLaLettre('z')  => retourne 9
 * toucheEnFonctionDeLaLettre('j')  => retourne 5
 *
 * retourne 0 en cas d'EOF ou de retour à la ligne
 * retourne -1 en cas d'erreur
 */

int touche_en_fonction_de_la_lettre(char c) {
	if(c == 'a' || c == 'b' || c == 'c') {
		return 2;
	}
	if(c == 'd' || c == 'e' || c == 'f') {
		return 3;
	}
	if(c == 'g' || c == 'h' || c == 'i') {
		return 4;
	}
	if(c == 'j' || c == 'k' || c == 'l') {
		return 5;
	}
	if(c == 'm' || c == 'n' || c == 'o') {
		return 6;
	}
	if(c == 'p' || c == 'q' || c == 'r' || c == 's') {
		return 7;
	}
	if(c == 't' || c == 'u' || c == 'v') {
		return 8;
	}
	if(c == 'w' || c == 'x' || c == 'y' || c == 'z'){
		return 9;
	}
	if(c == EOF || c == '\n') {
		return 0;
	}
	return -1;
}

int *recuperer_les_touches_en_fonction_du_mot(char chaine[]) {
	int *touches = (int*) malloc( sizeof(int) * strlen(chaine));
	for (int i = 0; i < strlen(chaine); i++){
		int touche = touche_en_fonction_de_la_lettre(chaine[i]);
		// Si c'est la fin du mot pas besoin de continuer on passe au mot suivant
		if(touche == 0) {
			break;
		}
		// Si il y a une erreur on quitte l'application
		if(touche == -1) {
			fprintf (stderr, "Erreur: La lettre %c est invalide!", chaine[i]);
			exit(EXIT_FAILURE);
		}
		touches[i] = touche;
	}
	return touches;
}
