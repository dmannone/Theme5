#include "arbre.h"

void ajouter_mot_dans_larbre(noeud * n, char chaine[], int *touches) {
	for(int i = 0; i < strlen(chaine); i++) {
		while(n->suivant){
			if(n->touche == touches[i])
				break;
			n = n->suivant;
		}
		if(n->touche != touches[i])
			n = ajouter_noeud_suivant(n, touches[i]);
		if(i+1 < strlen(chaine))
			n = ajouter_noeud_fils(n, touches[i+1]);
	}
	ajouter_mot(n, chaine);
}

void construction_de_larbre() {
	FILE* fichier = NULL;
	char chaine[TAILLE_MAX] = "";

	/* Ouverture en lecture du fichier listemots.txt en lecture seule */
	fichier = fopen("listemots.txt", "r");

	/* Si le fichier a bien �t� ouvert */
	if (fichier != NULL)
	{
		// On lit le fichier tant qu'on ne re�oit pas d'erreur (NULL)
		while (fgets(chaine, TAILLE_MAX, fichier) != NULL)
		{
			//On enl�ve le retour � la ligne
			size_t taille = strlen(chaine);
			if (taille > 0 && chaine[taille - 1] == '\n')
				chaine[taille - 1] = '\0';

			//On r�cup�re toutes les touches utilis�es pour �crire le mot
			int *touches = recuperer_les_touches_en_fonction_du_mot(chaine);
			//On ajoute le mot dans l'arbre
			ajouter_mot_dans_larbre(arbre, chaine, touches);
		}
		fclose(fichier); // On ferme le fichier qui a �t� ouvert

	} else { // Si le fichier n'a pas �t� ouvert on faire l'application et on �crit un message d'erreur sur la sortie d'erreur stderr
		fprintf (stderr, "Erreur: ouverture du fichier listemots.txt\n") ;
		exit(EXIT_FAILURE);
	}
}

void afficher_mots_dans_larbre(noeud *n, char chaine[], int *touches)
{
	int count_fils = 0;
	int count_suivant = 0;
	for(int i = 0; i < strlen(chaine); i++) {
		while(n->suivant) {
			if(n->touche == touches[i])
				break;
			count_suivant++;
			n = n->suivant;

		}
		count_fils++;
		n = n->fils;
	}
	afficher_liste_mot(n->mot);
}

mot * rechercher_mots_dans_larbre(noeud *n, int *touches)
{
	if (n == NULL) return NULL;
	int i = 0;
	int count_suivant = 0;
	int count_fils = 0;

	while(1) {
		while(n != NULL && n->suivant) {
			if(n->touche == touches[i])
				break;
			count_suivant++;
			n = n->suivant;
		}
		count_fils++;
		if(touches[i+1] >= 2 && touches[i+1] <= 9) {
			if(!n)
				return NULL;
			n = n->fils;
		}
		else
			break;
		i++;
	}
	if(!n)
		return NULL;
	return n->mot;
}
