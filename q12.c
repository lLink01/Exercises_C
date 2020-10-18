#include <stdio.h>
double compute_pi( int n );
int main() {
  double pi;
  int precision;
  scanf("%d", &precision);
  pi = compute_pi(precision);
  printf("%.12lf", pi);
  return 0;
}
double compute_pi( int n ){
  double pi = 2;
  int half, rest = n % 2;
  half = (n - rest) / 2;
  while ( half > 0){
    pi *= ((4 * half * half) /( double ) ((4 * half * half) - 1));
    half--;
  }
  if(rest == 1) pi *= (n + 1) / (double) n;
  return pi;
}