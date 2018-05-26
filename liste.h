#ifndef EVAL_H
#define EVAL_H

struct elem{
	char val;
	struct elem *suiv;
  char* type;
};

typedef struct elem* liste;


liste creer_liste();
int est_vide(liste l);
void affiche_liste(liste l);
liste libere_liste(liste l);
liste ajout_elem_fin(liste l, char i);


#endif
