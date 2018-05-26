#include "liste.h"
#include "eval.h"
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
  if(l==NULL) printf("Liste vide.\n");
  liste tmp=l;
	while(tmp!=NULL)
	{
		printf("%c ",tmp->val);
		tmp = tmp->suiv;
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
	liste new = malloc(sizeof(liste));
  /*if(token_entier(i)!=(-1)) new->val=atoi(i);
  else new->val=i;*/
  new->val=i;
	new->suiv = NULL;
	if(l==NULL)
	{
		return new;
	}
  else
  {
  	liste tmp = l;
  	while(l->suiv)
    {
  		tmp = tmp->suiv;
    }
  	tmp->suiv = new;
  	return l;
  }
}
