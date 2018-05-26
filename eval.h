#ifndef EVAL_H
#define EVAL_H

typedef struct token
{
  char token;
  struct token* next;
}liste_token;

liste_token* string_to_token(char* string);

#endif
