/*maximum number between three values*/
#include <algorithm>
#include <array>
#include <iostream>
int main()
{
    std::array<int, 3> inArr;
    for (int i = 0; i < inArr.size(); ++i)
    {
        std::cout <<"Enter element" <<std::endl;
        std::cin >> inArr[i];
    }

    std::sort(inArr.begin(),inArr.end());
    std::cout<<inArr.back()<<std::endl;

    return 0;
}