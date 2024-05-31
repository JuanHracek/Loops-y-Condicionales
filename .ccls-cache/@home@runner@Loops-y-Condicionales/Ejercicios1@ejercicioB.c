#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a, b, c;

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);

  if (a > b && a > c) {
    printf("%d", a);
  }
  if (b > c && b > a) {
    printf("%d", b);
  }
  if (c > a && c > b) {
    printf("%d", c);
  }

  return 0;
  


  
}