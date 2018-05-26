#include "liste.h"
#include "eval.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int i=0;

  liste token=creer_liste();
  token=ajout_elem_fin(token,'A');

  for(i=1;i<argc;i++)
  {
    token=string_to_token(token,argv[i]);
    affiche_liste(token);
  }

  affiche_liste(token);

  libere_liste(token);

  return 0;
}
