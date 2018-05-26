#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

liste string_to_token(liste token,char* string)
{
  char c;
  int i;

  for(i=0;c!='\0';i++)
  {
    c=string[i];
  }

  token=ajout_elem_fin(token,c);

  return token;
}

int token_op(char c)
{
  switch (c) {
    case '+': {return 1;}
    case '-': {return 2;}
    case '=': {return 3;}
    case '/': {return 4;}
    case'*': {return 5;}
    default:{return 0;}
  }
}

int token_entier(char c)
{
  switch (c) {
    case '0': {return 0;}
    case '1': {return 1;}
    case '2': {return 2;}
    case '3': {return 3;}
    case '4': {return 4;}
    case '5': {return 5;}
    case '6': {return 6;}
    case '7': {return 7;}
    case '8': {return 8;}
    case '9': {return 9;}
    default:{return -1;}
  }
}

int token_parenthese(char c)
{
  switch (c) {
    case '(': {return 1;}
    case ')': {return 2;}
    default:{return 0;}
  }
}
