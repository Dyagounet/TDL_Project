#include "eval.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char* string;
  liste_token* token;

  token=initliste_token();

  //scanf("%s",&string);

  //printf("%s/n",&string);

  freeliste_token(token);

  return 0;
}
