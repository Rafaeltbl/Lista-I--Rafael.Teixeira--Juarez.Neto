#include <stdio.h>
#include <stdlib.h>


int comparacao(const void *x, const void *y){

  if ( *(float*)x == *(float*)y ) return 0;
  if ( *(float*)x >  *(float*)y ) return 1;
  if ( *(float*)x <  *(float*)y ) return -1;
}

int main(void) {
 int n;
 float *z;

 printf("INSIRA O NUMERO DE VALORES");
 scanf("%d", &n);

 z = malloc(n*sizeof(float));

for (int i = 0; i<n;++i){
   printf("INSIRA O %dº VALOR:", i+1);
   scanf("%f",&z[i]);
}

qsort(z,n,sizeof(float),comparacao);

printf("ORDEM CRESCENTE DOS VALORES: \n");
for (int q = 0; q<n; ++q){
   printf("%f \n", z[q]);
}
free(z);

return 0;
}