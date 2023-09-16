/*function to search to the number in the array*/

#include <algorithm>
#include <array>
#include <iostream>

int search_array(std::array<int, 6> arr, int num)
{

    auto it = std::find(arr.begin(), arr.end(), num);

    if (it != arr.end()) 
    {
        std::cout << "The number " << num << " is located at index " << it - arr.begin() << std::endl;
    } 
    else 
    {
        std::cout << "The number " << num << " is not found in the array" << std::endl;
    } 

  return 0;
}

int main()
{
    int num;
    std::array<int, 6> array = {5,4,7,9,3,6};
    std::cout <<"Enter number to search" <<std::endl;
    std::cin >>num;
    search_array(array, num);    
    return 0;
}