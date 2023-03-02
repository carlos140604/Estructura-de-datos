#include <stdio.h>
#include <stdlib.h>

void ubicacion(int entrada);

int main() {
  int entrada = 1;
  do {
    scanf("%i", &entrada);
    if (entrada != 0) {
      ubicacion(entrada);
    }
  } while (entrada != 0);
}

void ubicacion(int entrada) {
  int xOriginal = 0;
  int yOriginal = 0;
  scanf("%i %i", &xOriginal, &yOriginal);
  int x = 0;
  int y = 0;
  for (int i = 0; i < entrada; i++) {
    scanf("%i %i", &x, &y);
    if (x == xOriginal || y == yOriginal) {
      printf("divisa\n");
    }
    if (x > xOriginal && y > yOriginal) {
      printf("NE\n");
    }
    if (x < xOriginal && y > yOriginal) {
      printf("NO\n");
    }
    if (x > xOriginal && y < yOriginal) {
      printf("SE\n");
    }
    if (x < xOriginal && y < yOriginal) {
      printf("SO\n");
    }
  }
}