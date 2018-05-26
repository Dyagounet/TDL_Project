#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

liste string_to_token(liste token,char* string)
{
  

  token=ajout_elem_fin(token,c);

  return token;
}

int token_op(char c)
{
  switch (c) {
    case '+': {return 1;}
    case '-': {return 1;}
    case '=': {return 1;}
    case '/': {return 1;}
    case'*': {return 1;}
    default:{return 0;}
  }
}

int token_entier(char c)
{
  switch (c) {
    case '0': {return 1;}
    case '1': {return 1;}
    case '2': {return 1;}
    case '3': {return 1;}
    case '4': {return 1;}
    case '5': {return 1;}
    case '6': {return 1;}
    case '7': {return 1;}
    case '8': {return 1;}
    case '9': {return 1;}
    default:{return 0;}
  }
}

int token_parenthese(char c)
{
  switch (c) {
    case '(': {return 1;}
    case ')': {return 1;}
    default:{return 0;}
  }
}
