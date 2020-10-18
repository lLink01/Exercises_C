#include <stdio.h>
#include <stdlib.h>

int main()
{
  int bit = 0, j, m = 1;
  unsigned char byte;
  float fn;
  double number = 0.3;

  double * dbyte = &number;
  unsigned char * pbyte = dbyte;
  unsigned int * ibyte = (unsigned char *) malloc(1);
  ibyte = (unsigned int * ) pbyte;
  pbyte = pbyte;
  byte = *pbyte;
  for (j = byte; j >= 1; j/=2)
    {
      bit += (j % 2) * m;
      m *= 10;
    }
  printf("%08d ", bit);
  printf("%d ", *ibyte);
  printf("%c", *pbyte);
  return 0;
}
/*
int i, j, m = 1, div = 1, bit = 0, size;
  unsigned char a = 0;
  int b = 255;
  char * pa;
  a = b;
  size = sizeof(int);
  for (i = 1; i <= size; i++)
  {
    a = b / div;
    div *= 255;
    bit = 0, m = 1;
    for (j = a; j >= 1; j/=2)
    {
      bit += (j % 2) * m;
      m *= 10;
    }
    printf("%08d ", bit);
  }
  
  printf("%c\n", a);
*/