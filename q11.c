#include <stdio.h>
void converteEmNotasMoedas( int value, int * centenas, int * dezenas, int * cinquentenas, int * unidades);
int main() {
  int value, centenas, dezenas, cinquentenas, unidades;
  centenas = dezenas = cinquentenas = unidades = 0;
  scanf("%d", &value);
  converteEmNotasMoedas(value, &centenas, &dezenas, &cinquentenas, &unidades);
  printf("NOTAS DE 100 = %d\n", centenas);
  printf("NOTAS DE 50 = %d\n", cinquentenas);
  printf("NOTAS DE 10 = %d\n", dezenas);
  printf("MOEDAS DE 1 = %d\n", unidades);
  return 0;
}
void converteEmNotasMoedas(int value, int * centenas, int * dezenas, int * cinquentenas, int * unidades){
  int dezenas_unidades = value % 100;
  *centenas = (value - dezenas_unidades) / 100;
  *unidades = dezenas_unidades % 10;
  dezenas_unidades /= 10;
  if(dezenas_unidades >= 5){
    dezenas_unidades -= 5;
    *cinquentenas = 1;
  }
  *dezenas = dezenas_unidades;
}