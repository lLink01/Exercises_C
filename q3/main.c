#include <stdio.h>
void separaDigitos(int number_Reversed, int * first_n, int * second_n, int * third_n);
int main(){
	int number_reversed, number, d1, d2, d3;
	scanf("%d", &number_reversed);
	separaDigitos(number_reversed, &d1, &d2, &d3);
	number = d1 * 100 + d2 * 10 + d3;
	printf("%d\n", number);
	return 0;
}
void separaDigitos(int number_Reversed, int * first_n, int * second_n, int * third_n){
	*first_n = number_Reversed % 10;
	*second_n = (number_Reversed/10) % 10;
	*third_n = (number_Reversed/100) % 10;
}