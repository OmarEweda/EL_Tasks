/*ﬁnd the even and odd numbers in the array*/

#include <algorithm>
#include <iostream>

void even_odd_array(int array[], int size){
  for (int i = 0; i < size; ++i)
  {
    if(array[i] % 2){
      std::cout<<"Element["<<i<<"] is even"<< std::endl;
    }
    else{
      std::cout<<"Element["<<i<<"] is odd"<< std::endl;
    }
  } 
}

int main() 
{
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array)/sizeof(array[0]);

  even_odd_array(array, size);
  return 0;
}
