#include <stdio.h>
#include <stdlib.h>

//trocar dois numeros sem o uso de um auxiliar
void troca (int *x, int *y);

int main () {
  int a,b;
  printf("Entre com dois numeros\n");
  scanf("%d %d", &a, &b);
  printf("A:%d e B:%d\n", a, b);
  troca (&a, &b);
  printf("A:%d e B:%d\n",a, b);

  return 0;
}

void troca (int *x, int *y) {
  *x += *y;
  *y = *x - *y;
  *x -= *y;
}
