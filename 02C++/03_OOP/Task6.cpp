/*fill array from 10 to 10000 sequentially*/

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
int main(int argc, char const *argv[])
{
  std::array<int, 10000> serial;
  std::iota(serial.begin(), serial.end(), 10);
  for (auto &&i : serial)
  {
    std::cout << i << std::endl; 
  }
  
  return 0;
}
