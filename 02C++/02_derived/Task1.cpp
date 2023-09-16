/*function to ﬁnd the maximum number of array*/

#include <array>
#include <iostream>

int max_array(std::array<int, 6> arr)
{
    int max = arr[0];
    for (auto &&i : arr)
    {   
        if (i > max)
        {
            max = i;
        }   
    }
    return max;
}

int main()
{
    std::array<int, 6> array;
    for (int i = 0; i < 6; ++i)
    {
        std::cout <<"Enter Array elemnt"<< i <<std::endl;
        std::cin >> array[i];
    }

    std::cout<< "Array Max:"<< max_array(array)<< std::endl;
    
    return 0;
}
