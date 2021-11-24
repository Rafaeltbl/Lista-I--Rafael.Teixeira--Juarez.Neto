#include <stdlib.h>
#include <stdio.h>

void soma(int *x1, int *x2, int *x3, int e){
  for(int j = 0; j<e; ++j){
  x3[j] = x1[j] + x2[j];}}

int main(void) {
int *vetor1,*vetor2, *vetorsoma;
int comprimento;

printf("INFORME O TAMANHO DO VETOR:");
scanf("%d",&comprimento);
vetor1 = malloc(comprimento*sizeof(int));
vetor2 = malloc(comprimento*sizeof(int));
vetorsoma = malloc(comprimento*sizeof(int));
  
for (int i =0; i<comprimento; ++i){
  vetor1[i] = rand() % 50;
  vetor2[i] = rand() % 50;}

printf("VETOR A:\n");
for (int y =0; y<comprimento; ++y){
  printf("VETOR A[%d] = %d\n", y,vetor1[y]); }
printf("VETOR B:\n");
for (int y =0; y<comprimento; ++y){
  printf("VETOR B[%d] = %d\n", y,vetor2[y]); }
soma(vetor1,vetor2,vetorsoma,comprimento);
  printf("VETOR SOMA:\n");
for (int a =0; a<comprimento; ++a){
  printf("VETORSOMA[%d] = %d \n",a,vetorsoma[a]);}

free(vetorsoma);
free(vetor2);
free(vetor1);
return 0;}