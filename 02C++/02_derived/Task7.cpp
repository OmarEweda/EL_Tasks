/*Use lambda functions to sort an array of integers in ascending and descending
order*/

#include <algorithm>
#include <array>
#include <iostream>

auto square = [](int a)-> int{return a*a;};
int main()
{
  std::array<int, 6> x= {1, 5, 8, 3, 2, 4};
  
  std::sort(x.begin(), x.end(), [](int a, int b){
    return a > b;
  });
  for (auto i : x)
  {
    std::cout<<i<< std::endl;    
  }

  std::sort(x.begin(), x.end(), [](int a, int b){
    return a < b;
  });
  for (auto i : x)
  {
    std::cout<<i<< std::endl;    
  }
  
  return 0;
}
