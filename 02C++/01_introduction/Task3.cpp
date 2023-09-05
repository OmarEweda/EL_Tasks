/* RIGHT angle triangle */
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
bool chech_RAT(std::array<int,3>arr)
{
    if (arr[0] == 0 || arr[1] == 0 || arr[2] == 0)
    {
        return false;
    }
    std::sort(arr.begin(),arr.end());
    double sqr1 = std::pow(arr[0],2) + std::pow(arr[1], 2);
    double sqr2 = std::pow(arr[2], 2);
    return sqr1 == sqr2? true:false;
}

int main() 
{
    std::array<int, 3> inArr;
    for (int i = 0; i < 3; ++i)
    {
        std::cout<<"Enter element" <<std::endl;
        std::cin >> inArr[i];
    }
    
    if(chech_RAT(inArr))
    {
        std::cout<<"Right Angle Triangle" <<std::endl;
    }
    else
    {
        std::cout<<"Not Right Angle Triangle" <<std::endl;
    }
    return 0;
}