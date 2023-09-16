/*merge two arrays together*/

#include <algorithm>
#include <iostream>

int *merge_array(int array1[], int size1, int array2[], int size2, int merged_array[]) {
  std::copy(array1, array1+size1,merged_array);
  std::copy(array2, array2+size2, merged_array+size1);
  int index = 0;
  return merged_array;
}

int main() 
{
  int array1[] = {1, 2, 3, 4, 5};
  int array2[] = {6, 7, 8, 9, 10};
  int size1 = sizeof(array1)/sizeof(array1[0]);
  int size2 = sizeof(array2)/sizeof(array2[0]);
  int merged[size1+size2];
  merge_array(array1, size1, array2, size2, merged);
  
 for (int i = 0; i < size1+size2; ++i)
 {
    std::cout << merged[i] << std::endl;
 }
  return 0;
}
