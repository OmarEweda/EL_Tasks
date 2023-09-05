/*summation the digits of integer entered by user*/

#include <iostream>
int main(int argc, char const *argv[])
{
    int i, sum = 0;
    std::cout<<"Enter number" <<std::endl;
    std::cin >> i;
    std::string s = std::to_string(i);
    for (char i : s)
    {
        sum += (i - '0');
    }
    std::cout<<"summed number:"<< sum <<std::endl;

    return 0;
}
