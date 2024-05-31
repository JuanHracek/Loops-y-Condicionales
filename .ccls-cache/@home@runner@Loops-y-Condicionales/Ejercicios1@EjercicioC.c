#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a;
a = atoi(argv[1]);

  if (a > 0 ) {
    printf("Es positivo");
  } 
  if (a < 0 ) {
    printf("Es Negativo");
  }
  if (a == 0 ) {
    printf("Es Cero");
  }

  return 0;
}

H