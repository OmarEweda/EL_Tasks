/*check if there is any value of array is even*/

#include <algorithm>
#include <array>
#include <iostream>
bool is_even(int x)
{
   return (x % 2 == 0);
}

int main() 
{
    std::array<int, 6> a = {1,3,5,7,9,12}; 
    if(std::any_of(a.begin(),a.end(),is_even)){
        std::cout<<"Array has even element"<<std::endl;        
    }
    else{
        std::cout<<"Array doesn't have even element"<<std::endl;
    }
    return 0;
}