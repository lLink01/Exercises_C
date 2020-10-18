#include <stdio.h>
#include <math.h>
int next_power( int n, int p );
int absol(int a) {return (a>=0 ? a : -a);}
int main() {
  int exponent, limit;
  int  result;
  scanf("%d %d", &limit, &exponent);
  printf("%d -> ", limit);
  result = next_power(limit, exponent);
  printf(" = %d", result);
  return 0;
}
int next_power( int n, int p ){
  int next_base,  i, base;
  int value, next_value;
  if(n == 1 || (p <= 0 && n != 0)) {
    printf("1^%d", p);
    return 1;
  }
  if(n <= 0 && p > 0){
    printf("0^%d", p);
    return 0;
  } else if(n <= 0 && p < 0){
    printf("1^%d", p);
    return 1;
  } else if(n > 1 && p == 1){
    printf("%d^1", n);
    return n;
  }
  next_base = next_value = value = base = 1;
  while(absol(n - next_value) <= absol(n - value)){
		value = next_value;
    base = next_base;
    next_base++;
    next_value = 1;
    for (i = 1; i <= p; i++) next_value *= next_base;
  }
  printf("%d^%d", base, p);
  return value;
}