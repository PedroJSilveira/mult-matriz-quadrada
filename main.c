//if you want to multiply a matrix with other dimensions, change 3 to the number you want

#include <stdio.h>

int main() {
  int i /*lines*/, j /*colums*/, k, sum;
  int mat1[3][3];
  int mat2[3][3];
  int mult[3][3];
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      scanf("%d", &mat1[i][j]);
    }
  printf("\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      scanf("%d", &mat2[i][j]);
    }
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      sum= 0;
      for (k = 0; k < 3; k++)
        sum= sum + mat1[i][k] * mat2[k][j];
      mult[i][j] = sum;
    }
  for (i = 0; i < 3; i++) {
    printf("\n");
    for (j = 0; j < 3; j++)
      printf("%d ", mult[i][j]);
  }

  return 0;
}
