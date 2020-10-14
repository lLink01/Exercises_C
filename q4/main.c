#include <stdio.h>
int somaDivisores(int number);
int main(){
	int number, sumDividers;
	scanf("%d", &number);
	printf("%d = ", number);
  sumDividers = somaDivisores(number);
  printf(" = %d", sumDividers);
  if(number == sumDividers){
    printf(" (NUMERO PERFEITO)");
  } else printf(" (NUMERO NAO E PERFEITO)");
	printf("\n");
	return 0;
}
int somaDivisores(int number){
	int last_number = (number / 2) + (number % 2), i, sum;
  sum = 0;
	for (i = 1; i <= last_number; i++)
  {
    if(number % i == 0){
      if(i > 1) printf(" + ");
      sum += i;
      printf("%d", i);
    }
  }
  return sum;
}