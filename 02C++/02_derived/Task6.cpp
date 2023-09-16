/*Write a lambda function to calculate the square of a given number*/
#include <iostream>

auto square = [](int a)-> int{return a*a;};
int main()
{
  int x;
  std::cout<<"Enter Number"<<std::endl;
  std::cin>>x;
  std::cout<<"Squared number = "<<square(x)<<std::endl;
  return 0;
}
