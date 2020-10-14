#include <stdio.h>
int fibonacci( int t1, int t2, int n);
int main() {
	int first_term, second_term, n_term, n;
	scanf("%d %d %d", &first_term, &second_term, &n);
	n_term = fibonacci(first_term, second_term, n);
	printf("%d\n", n_term);
 	return 0;
}

int fibonacci( int t1, int t2, int n){
	int aux;
	if(n == 1) return t1;
	if(n == 2) return t2;
	n -=2;
	while(n > 0){
		aux = t2;
		t2 += t1;
		t1 = aux;
		n--;
	}
	return t2;
}
