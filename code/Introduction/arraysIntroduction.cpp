#include <iostream>

int main() {
  int arraySize;

  scanf("%d", &arraySize);

  int array[arraySize];

  for (int i = 0; i < arraySize; i++) {
    scanf("%d", &array[i]);
  }

  arraySize--;

  while (arraySize >= 0) {
    printf("%d ", array[arraySize]);

    arraySize--;
  }
 
  return 0;
}
