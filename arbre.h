typedef struct noeud
{
  int num;
  struct noeud* g;
  struct noeud* d;
}arbre_token;

int arbre_to_int(arbre_token at);
