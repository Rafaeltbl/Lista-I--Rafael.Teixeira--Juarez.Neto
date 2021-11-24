#include <stdlib.h>
#include <stdio.h>

float comparação(const void *r, const void *j){
  if ( *(float*)r == *(float*)j ) return 0;
  if ( *(float*)r >  *(float*)j ) return 1;
  if ( *(float*)r <  *(float*)j ) return -1;}

void organizar (float *vetor, int comprimento,float (*comparação)(float *r, float *j)){

float k = 0;
for (int i =0; i<comprimento;++i){
  for(int y=i+1; y<comprimento; ++y){
      if(comparação(vetor+i,vetor+y)>0){
        k = vetor[y];
        vetor[y]= vetor[i];
        vetor[i]=k;}}}}

int main(void) {
float *z;
int n; 
printf("INFORME A QUANTIA DE VALORES:");
scanf("%d", &n);
z = malloc(n*sizeof(float));

for (int l = 0; l<n; ++l){
  printf("INFORME O %dº VALOR:", l+1);
  scanf("%f",&z[l]);}
organizar(z,n,comparação);
printf("VALORES DIGITADOS EM ORDEM CRESCENTE: \n");
for (int d = 0; d<n; d++){printf("%f \n", z[d]);}

free(z);
return 0;}