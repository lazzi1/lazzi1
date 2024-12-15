#include <stdio.h>
#include <string.h>
//Create a two-dimensional vector using structures in C.

struct vector{
  int vx;
  int vy;
  char name[20];
};
int main(){
  
  struct vector v1 ;
  v1.vx=5;
  v1.vy=7;
  strcpy(v1.name,"position");
  
  printf("%s = (%d , %d)",v1.name,v1.vx,v1.vy);
  
  return 0;
}