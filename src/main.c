#include "main_server.c"
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int *a;
  int i, n;
  scanf("%d", &n);

  a = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++) {
    a[i] = rand() % 100;
  }

  is_root_square_exist(a, n);
  free(a);
  getchar();
  getchar();
  return 0;
}
