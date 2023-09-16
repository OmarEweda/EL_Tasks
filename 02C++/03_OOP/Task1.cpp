/*check if the character is digit*/

#include <cctype>
#include <iostream>
bool is_digit(char x)
{
    return std::isdigit(x);
}

int main() 
{
    char a; 
    std::cout<<"Enter Char"<<std::endl;
    std::cin>>a;
    std::cout<< is_digit(a)<<std::endl;
    return 0;
}