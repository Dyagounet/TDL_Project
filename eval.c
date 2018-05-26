#include "eval.h"
#include <stdlib.h>

liste_token* initliste_token()
{
  liste_token* token=malloc(sizeof(liste_token));

  token->t = -1;
  token->next = NULL;

  return token;
}

liste_token* string_to_token(char* string)
{
  liste_token* token;

  return token;
}

void freeliste_token(liste_token* token)
{
  if(token != NULL)
  {
    liste_token* index = token;
    liste_token* next = token->next;

    while(next != NULL)
    {
      free(index);
      index = next;
      next = next->next;
    }

    free(index);
  }
}
