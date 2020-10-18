#include <stdio.h>
unsigned long int fat(unsigned int n);
int main() {
  unsigned long int fatorial;
  unsigned int number;
  scanf("%u", &number);
  fatorial = fat(number);
  printf("%u! = %lu\n", number, fatorial);
  return 0;
}

unsigned long int fat(unsigned int n){
  unsigned long int f = 1, i;
  for (i = 2; i <= n; i++)
  {
    if(i != n) f*= i * n;
    else f *= i;
    n--;
  }
  return f;
}