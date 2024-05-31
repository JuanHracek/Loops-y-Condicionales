#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Uso: %s <n>\n", argv[0]);
    return 1;
  }

  int n = atoi(argv[1]);
  int i;
  float promedio = 0, suma = 0;
  srand(time(NULL));

  for (i = 0; i < n; i++) {
    int numero = rand() % 101;
    printf("%d ", numero);
    suma += numero;
  }

  promedio = suma / n;
  printf("\nEl promedio de los números es: %.2f\n", promedio);

  return 0;
}