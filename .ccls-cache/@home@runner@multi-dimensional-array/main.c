#include <stdio.h>

int main(void) {
  int i, j;
  int values[3][3];
 
  printf("Enter Values: ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &values[i][j]);
    }
  }

  printf("Entered Values are :\n ");
 
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\t", values[i][j]);
    }
    printf("\n");
  }

  return 0;
}

// #include <stdio.h>

// int main(void) {
//   int i, j, values[i][j];
//   printf("Enter Values: ");
//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       scanf("%d", &values[i][j]);
//     }
//   }
//   printf("Enterd Values are :\n ");

//   for (i = 0; i < 3; i++) {
//     for (j = 0; j < 3; j++) {
//       printf("%d\t", values[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
