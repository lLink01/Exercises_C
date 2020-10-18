#include <stdio.h>
#include <math.h>
double raizesEq2Grau(double a, double b, double c, double * root1, double * root2);
double absol(double n){
  return (n >= 0) ? n : (double) -1 * n;
}
int main() {
  double a, b, c, root1, root2, number_roots;
  scanf("%lf %lf %lf", &a, &b, &c);
  number_roots = raizesEq2Grau(a, b, c, &root1, &root2);
  if (!number_roots) printf("RAIZES IMAGINARIAS\n");
  else if(number_roots == 1){
    printf("RAIZ UNICA\n");
    printf("X1 = %.2lf\n", root1);
  }
  else{
    printf("RAIZES DISTINTAS\n");
    printf("X1 = %.2lf\nX2 = %.2lf\n", root1, root2);
  }
  return 0;
}
double raizesEq2Grau(double a, double b, double c, double * root1, double * root2){
  double delta = (b * b) - (4 * a * c), aux;
  if(delta < 0) return 0;
  if(delta == 0){
    *root1 = (-1 * b) / (2*a);
    return 1;
  }
  *root1 = ((-1 * b) - sqrt(delta)) / (2*a);
  *root2 = ((-1 * b) + sqrt(delta)) / (2*a);

  if(absol(*root1) > absol(*root2) && *root2 != 0 && *root1 != 0){
      aux = *root1;
      *root1 = *root2;
      *root2 = aux;
  }
  return 2;
}