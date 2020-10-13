#include <stdio.h>
unsigned long int fat( unsigned int n);
int main(void) {
  unsigned long int fatorial;
  unsigned int number;
  scanf("%u", &number);
  fatorial = fat(number);
  printf("%u! = %lu\n", number, fatorial);
}

unsigned long int fat( unsigned int n){
  	return n * (n == 1 ? 1 : fat(n - 1));
}