#include "liste.h"
#include "eval.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

  liste token=creer_liste();

  token=string_to_token(token,argv[1]);

  affiche_liste(token);

  libere_liste(token);

  return 0;
}
