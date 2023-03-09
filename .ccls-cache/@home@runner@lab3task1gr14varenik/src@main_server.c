#include "main_interface.h"
#include "math.h"
#include <stdio.h>

void is_root_square_exist(int *array, int size) {
  for (int i = 0; i < size; i++) {
    if (sqrt(array[i]) - (int)sqrt(array[i]) != 0)
      printf("%d", array[i]);
  }
}
