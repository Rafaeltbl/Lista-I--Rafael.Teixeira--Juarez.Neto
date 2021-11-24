#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int comparar(const void *x, const void *y){
  if ( *(float*)x <  *(float*)y ) return -1;
  if ( *(float*)x == *(float*)y ) return 0;
  if ( *(float*)x >  *(float*)y ) return 1;
}

void ordem (float *vetor, int tamanho,int (*comparar)(float *x, float *y)){

float aux = 0;
for (int p =0; p<tamanho; p++){
  for(int r=p+1; r<tamanho; r++){
      if(comparar(vetor+p,vetor+r)>0){
        aux = vetor[r];
        vetor[r]= vetor[p];
        vetor[p]=aux;
      }  }
      }  }

int main(void) {
clock_t Ticks[2];
int n; // número de valores
float *z; // ponteiro apontando p/ float

Ticks[0] = clock(); // start

printf("DIGITE O NUMERO DE VALORES:");
scanf("%d", &n);

z = malloc(n*sizeof(float)); // construção do vetor

for (int i = 0; i<n; i++){
   printf("DIGITE O %dº VALOR:", i+1);
   scanf("%f",&z[i]);
}

ordem(z,n,comparar);

printf("VALORES EM ORDEM CRESCENTE: \n");
for (int d = 0; d<n; d++){
   printf("%f \n", z[d]);
}

free(z);

Ticks[1] = clock();
double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
printf("TEMPO CORRIDO: %g ms.", Tempo);
getchar();

return 0;
}