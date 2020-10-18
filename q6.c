#include <stdio.h>
double raiz( double n );
double absoluto( double n );
int main() {
  double number, actual_square, previous_square, actual_error, error;
  scanf("%lf %lf", &number, &error);
  actual_square = previous_square = 1;
  actual_error = number - (actual_square * actual_square);
  while (actual_error > error)
  {
    actual_square = (previous_square + (number / previous_square)) / (double) 2;
    actual_error = absoluto(number - (actual_square * actual_square));
    previous_square = actual_square;
    printf("r: %.9lf, err: %.9lf\n", actual_square, actual_error);
  }
  
  return 0;
}

double raiz( double n ){

}
double absoluto( double n ){
  return n >= 0 ? n : (-1 * n);
}