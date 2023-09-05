/*vowel or not*/
#include <iostream>
const char vowel[]={'a', 'e', 'i', 'o', 'u', 
                    'A', 'O', 'I', 'O', 'U'};
int main() 
{
    char c;
    std::cout<<"Enter char" <<std::endl;
    std::cin >> c;

    for (auto &&i : vowel)
    {
        if (i == c)
        {
            std::cout<<"vowel" <<std::endl;
            return 0;
        }           
    }

    std::cout<<"not vowel" <<std::endl;    
    return 0;
}