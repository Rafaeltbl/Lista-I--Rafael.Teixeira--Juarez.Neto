#include <stdio.h>

//a função contar vai ficar responsável por realizar a contagem do intervalo
void contar (int x, int y){
  for (int i = x;i<=y;++i){
    printf("%d",i);
  }}

int main(void) {
  void (*conte)(int,int) = &contar; 
  int X,Y;
  printf("INFORME O INTERVALO DE NÚMEROS QUE SERÁ CONTADO: \n");
  scanf("%d \n", &X);
  scanf("%d", &Y);

  (*conte)(X,Y);

  return 0;
}