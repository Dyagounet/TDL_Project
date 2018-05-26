#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

liste creer_liste()
{
  return NULL;
}

int est_vide(liste l)
{
	if(l == NULL)
		return 1;
	return 0;
}

void affiche_liste(liste l)
{
	if(est_vide(l))
	{
		printf("La liste est vide \n");
		return;
	}
	while(l)
	{
		printf("%d ",l->val);
		l = l->suiv;
	}
	printf("\n");
}

liste libere_liste(liste l)
{
	liste tmp;
	while(l)
	{
		tmp = l->suiv;
		//printf("libération de %d\n",l->val);
		free(l);
		l = tmp;
	}
	return NULL;
}

liste ajout_elem_fin(liste l, char i)
{
	liste new = malloc(sizeof(struct elem));
	new->val = i;
	new->suiv = NULL;
	if(est_vide(l))
	{
		return new;
	}
	liste debut = l;
	while(l->suiv)
		l = l->suiv;
	l->suiv = new;
	return debut;
}
