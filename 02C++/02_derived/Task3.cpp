/*delete number in array*/

void delete_number(int* array, int size, int number) {
  int index = 0;
  while (index < size && array[index] != number) {
    index++;
  }

  if (index == size) {
    return;
  }

  for (int i = index; i < size - 1; i++) {
    array[i] = array[i + 1];
  }

  size--;
}

int main() 
{
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);

  delete_number(array, size, 3);

  return 0;
}
