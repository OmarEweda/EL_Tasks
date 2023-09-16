/*check if all the array is even*/

#include <algorithm>
#include <array>
#include <iostream>
bool is_even(int x)
{
   return (x % 2 == 0);
}

int main() 
{
    std::array<int, 6> a = {2,4,6,8,10,12}; 
    if(std::all_of(a.begin(),a.end(),is_even)){
        std::cout<<"Array is even"<<std::endl;        
    }
    else{
        std::cout<<"Array not even"<<std::endl;
    }
    return 0;
}