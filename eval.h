#ifndef EVAL_H
#define EVAL_H

typedef struct token
{
  char t;
  struct token* next;
}liste_token;

liste_token* initliste_token();
liste_token* string_to_token(char* string);
void freeliste_token(liste_token* token);

#endif
