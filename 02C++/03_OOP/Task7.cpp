/*calculate accumulate of array*/

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
int main(int argc, char const *argv[])
{
  std::array<int, 10> serial;
  std::iota(serial.begin(), serial.end(), 10);
  int sum = std::accumulate(serial.begin(), serial.end(), serial[0]);

  std::cout << sum << std::endl; 
  
  return 0;
}
