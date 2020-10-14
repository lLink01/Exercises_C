#include <stdio.h>
int main(void) {
	char filename[30] = "nome_do_arquivo";
  	printf("Para executar algum dos arquivos, execute:\nclang-7 -pthread -lm -o %s %s.c && ./%s\n", filename, filename, filename);
  	return 0;
}