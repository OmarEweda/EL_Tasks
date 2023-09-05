/*multiplication table*/

#include <iostream>
int main() 
{
    for (int i = 1; i < 255; ++i)
    {
        for (int j = 1; j < 255; ++j)
        {
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
    }  
    return 0;
}