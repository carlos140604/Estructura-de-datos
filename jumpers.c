#include <stdio.h>
#include <stdlib.h>

int main() {
  int tam;
  bool jolly = true;
  scanf("%d", &tam);
  int nums[tam];
  int absolutos[tam - 1];
  for (int i = 0; i < tam; i++) {
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < tam - 1; i++) {
    absolutos[i] = abs(abs(nums[i]) - abs(nums[i + 1]));
  }
  int control = absolutos[0];

  for (int i = 0; i < tam - 1; i++) {
    if (control == absolutos[i]) {
      control -= 1;
    } else {
      jolly = false;
    }
  }

  if (jolly) {
    printf("Jolly");
  } else {
    printf("Not Jolly");
  }
}
