#include <stdlib.h>
#include <stdio.h>

int main(void) {
float z;
float *r;
int v;
printf("INFORME A QUANTIA DE VALORES:");
scanf("%d", &v);
r = malloc(v*sizeof(float));

for (int j = 0; j<v; ++j){
  printf("INFORME O %dº VALOR:", j+1);
  scanf("%f",&r[j]);}

for (int l =0; l<v; ++l){
  for(int k=0; k<v; ++k){
    if(l==0){
      if(r[l] > r[k]){
        z = r[k];
        r[k]= r[l];
        r[l]=z;}}
    else {if((r[l] < r[l-1]) && (r[l] < r[k])){
        z = r[k];
        r[k]= r[l];
        r[l]=z;}}}}

printf("ORDEM CRESCENTE DOS VALORES INFORMADOS: \n");
for (int w = 0; w<v; ++w){ printf("%f \n", r[w]);}

free(r);
return 0;
} 