/*  1-Create a table for AscII code */
#include <iostream>
#include <iomanip>
static int i;
int main(void)
{
    for (int i = 0; i < 255; ++i)
    {
        std::cout<< "AscII: "<< i<< std::setw(10)<< "Char: "<< static_cast<char>(i)<< std::endl;     
    }
    return 0;
}