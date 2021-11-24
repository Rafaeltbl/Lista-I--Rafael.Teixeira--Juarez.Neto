#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compare(const void *x, const void *y){
  
  if ( *(float*)x == *(float*)y ) return 0;
  if ( *(float*)x >  *(float*)y ) return 1;
  if ( *(float*)x <  *(float*)y ) return -1;
}

int main(void) {
clock_t Ticks[2];
int n; // n= número de valores
float *z;

Ticks[0] = clock(); 

printf("INSIRA O NUMERO DE VALORES");
scanf("%d", &n);

z = malloc(n*sizeof(float));

for (int i = 0; i<n;++i){
   printf("INSIRA O %dº VALOR:", i+1);
   scanf("%f",&z[i]);
}

qsort(z,n,sizeof(float),compare);

printf("VALORES EM ORDEM CRESCENTE \n");
for (int d = 0; d<n; ++d){
   printf("%f \n", z[d]);
}

free(z);

Ticks[1] = clock();
double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
printf("TEMPO CORRIDO: %g ms.", Tempo);
getchar();

return 0;
}
