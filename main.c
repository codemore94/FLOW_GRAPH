#include "stdlib.h"
#define V 1024
struct Vertex{
  struct Vertex* forward[V];
  struct Vertex* backward[V];
  int weight;
};

void build(struct Vertex* v){
  for(int i=0;i<V;++i)
  	v->forward[i]= (struct Vertex*)malloc(sizeof(struct Vertex));
  v->weight = 0;
}
void destroy(struct Vertex* v){
  for(int i=0;i<V;++i)
        free(v->forward[i]);
}
int main(){
  struct Vertex* v = (struct Vertex*)malloc(sizeof(struct Vertex));
  build(v);
  destroy(v);
}


