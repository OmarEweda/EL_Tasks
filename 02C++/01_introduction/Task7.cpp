/*change from decimal to binary and vice versa*/
#include <bitset>
#include <iostream>
std::bitset<32> decimalToBinary(int decimal)
{
    return std::bitset<32>(decimal);
}
int binaryToDecimal(const std::bitset<32>& binary) 
{
    return static_cast<int>(binary.to_ulong());
}

int main()
{
    std::bitset<32> binary("101010");
    int decimal = binaryToDecimal(binary);

    std::cout << "Binary:  " << binary << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;
    
    decimal = 255;
    binary = decimalToBinary(decimal);
    
    std::cout << "Binary:  " << binary << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;

    return 0;
}
