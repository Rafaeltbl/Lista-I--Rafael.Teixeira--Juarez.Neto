#include <stdio.h>
#include <stdlib.h>

void multmatrix(int **m1, int **m2, int **m3, int nl, int nc, int ncB){

for (int l = 0; l<nl; l++){
  for (int c =0; c<nl; c++){
    for(int z = 0; z<nc; z++){
     m3[l][c] = m1[l][z]*m2[z][c] + m3[l][c];
    }
  }
}
}

int main(void) {
  int **A,**B,**C;
  int lA = 2, cA = 3, cB = 2;

A = malloc(lA*sizeof(int*));
A[0] = malloc(cA*lA*sizeof(int));
for (int w = 1; w<lA; w++){
  A[w] = A[w-1] + cA;
}

B = malloc(cA*sizeof(int*));
B[0] = malloc(cA*cB*sizeof(int));
for (int i = 1; i<cA; i++){
  B[i] = B[i-1] + cB;
}

C = malloc(lA*sizeof(int*));
C[0] = malloc(lA*cB*sizeof(int));
for (int i = 1; i<lA; i++){
  C[i] = C[i-1] + cB;
}

printf("insira o valor da matriz A:\n");
for (int l = 0; l<lA; l++){
  for (int c =0; c<cA; c++){
    scanf("%d", &A[l][c]);
  }
}

printf("insira o valor da matriz B:\n");
for (int l = 0; l<cA; l++){
  for (int c =0; c<cB; c++){
    scanf("%d", &B[l][c]);
  }
}

printf("Valor da matriz A:\n");
for (int l = 0; l<lA; l++){
  for (int c =0; c<cA; c++){
    printf("Matriz A[%d][%d] = %d\n", l+1,c+1,A[l][c]);
  }
}

printf("Valor da matriz B:\n");
for (int l = 0; l<cA; l++){
  for (int c =0; c<cB; c++){
    printf("Matriz B[%d][%d] = %d\n", l+1,c+1,B[l][c]);
  }
}

multmatrix(A, B, C, lA, cA, cB);

printf("Valor da matriz C:\n");
for (int l = 0; l<lA; l++){
  for (int c =0; c<cB; c++){
    printf("Matriz C[%d][%d] = %d\n", l+1,c+1,C[l][c]);
  }
}

free(C[0]);
free(C);
free(B[0]);
free(B);
free(A[0]);
free(A);

  return 0;
}