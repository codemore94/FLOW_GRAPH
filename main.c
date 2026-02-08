#include "stdlib.h"
#define V 1024
struct Vertex{
  struct Vertex* adj[V];
  int weight;
};

void build(struct Vertex* v){
  v->adj[0]= (struct Vertex*)malloc(sizeof(struct Vertex));
  v->weight = 0;
}
void destroy(struct Vertex* v){
  free(v->adj[0]);
  free(v);
}
int main(){
  struct Vertex* v = (struct Vertex*)malloc(sizeof(struct Vertex));
  build(v);
  destroy(v);
}


