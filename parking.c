#include <stdio.h>
#include <stdlib.h>

int distancia();
void ordenar(int arreglo[], int n);
void intercambiar(int *x, int *y);

int main() {
  int iteraciones;
  scanf("%d", &iteraciones); // 1 <= i <= 100
  int resp[iteraciones];
  for (int i = 0; i < iteraciones; i++) {
    resp[i] = distancia();
  }

  for (int i = 0; i < iteraciones; i++) {
    printf("%i\n",resp[i]);
  }
}

int distancia() {
  int numeroTiendas;
  int temp;
  scanf("%i", &numeroTiendas);
  int arr[numeroTiendas];
  for (int i = 0; i < numeroTiendas; i++) {
    scanf("%i", &arr[i]);
  }
  ordenar(arr,numeroTiendas);
  int cont;
  cont = 0;
  temp = 0;
  for (int i = 0; i < numeroTiendas-1; i++) {
    temp = arr[i+1] - arr[i];
    cont += temp;
  }
  return cont*2;
}

void intercambiar(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void ordenar(int arreglo[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arreglo[j] > arreglo[j + 1]) {
        intercambiar(&arreglo[j], &arreglo[j + 1]);
      }
    }
  }
}