#include <stdio.h>

int main(void) {
  int i, j, values[i][j];
  printf("Enter Values: ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &values[i][j]);
    }
  }
  printf("Enterd Values are : ");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\t", values[i][j]);
    }
    printf("\n")
  }
  return 0;
}