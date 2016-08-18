#include <stdio.h> 
#define M 2 
#define N 2 
int main() { 
float a[M][N], v[N], p[M]; 
int i, j; 
for (i=0; i<M; i++) 
for (j=0; j<N; j++) { 
printf("Informe A[%d][%d]: ", i, j); 
scanf("%f", &a[i][j]); 
} 
for (j=0; j<M; j++) { 
printf("Informe V[%d]: ", j); 
scanf("%f", &v[j]); 
} 
for (i=0; i<M; i++) { 
p[i] = 0; 
for (j=0; j<N; j++) 
p[i] += a[i][j] * v[j]; 
} 
printf("O produto da Matriz A x Vetor V eh:\n"); 
for (i=0; i<M; i++) 
printf("%2.f\n", p[i]); 
return 0; 
}
