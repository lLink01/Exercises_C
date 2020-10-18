#include <stdio.h>
double raizesEq2Grau(double a, double b, double c, double * root1, double * root2);
int main() {
  double a, b, c, root1, root2, number_roots;
  number_roots = raizesEq2Grau(a, b, c, &root1, &root2);
  if (!number_roots) printf("RAIZES IMAGINARIAS\n");
  else if(number_roots == 1){
    printf("RAIZ UNICA\n");
    printf("X1 = %lf\n", root1);
  }
  else{
    printf("RAIZES DISTINTAS\n");
    printf("X1 = %lf\nX2 = %lf\n", root1, root2);
  }
  return 0;
}
double raizesEq2Grau(double a, double b, double c, double * root1, double * root2){
  double delta = (b * b) - (4 * a * c);
  if(delta < 0) return 0;
  if(delta == 0){
    *root1 = (-b) / (2*a);
    return 1;
  }
}