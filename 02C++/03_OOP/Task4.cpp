/*write string class which has members*/

#include <cstring>
#include <iostream>
class MyString
{
private:
    char* str;
public:
    MyString();
    MyString(const char* s);
    MyString(const MyString& other);
    MyString& operator =(const MyString& other);
    MyString& operator +(const MyString& other);
    char* get_str();
    int get_len();
    ~MyString();
};

MyString::MyString()
{
    std::cout<<"In Class defalut Constractor"<<std::endl;    
    this->str = nullptr;
}

MyString::MyString(const char* s)
{
    std::cout<<"In Class Parameterized Constractor"<<std::endl;
    this->str = new char[strlen(s)+1];
    strcpy(this->str, s);
}

MyString::MyString(const MyString& other)
{
    std::cout<<"In Class copy Constractor"<<std::endl;
    this->str = new char[strlen(other.str)+1];
    strcpy(this->str, other.str);
}

MyString& MyString::operator=(const MyString &other)
{
    std::cout<<"In Class operator = overloading"<<std::endl;
    if (!strcmp(this->str, other.str))
    {
        this->str = other.str;
    }
    else
    {
        delete [] this->str;
        this->str = new char [strlen(this->str)+1];
        this->str = other.str;
    }

    return *this;
}

MyString &MyString::operator+(const MyString &other)
{
    std::cout<<"In Class operator + overloading"<<std::endl;
    static MyString result;
    result.str = new char[strlen(this->str) + strlen(other.str) + 1];
    strcpy(result.str,this->str);
    strcat(result.str, other.str); 
    return result;
}

char *MyString::get_str()
{
    return this->str;
}

int MyString::get_len()
{
    return strlen(this->str);
}

MyString::~MyString()
{
    std::cout<<"In Class destractor"<<std::endl;    
    delete[] str;
}



int main()
{
    MyString a = "Hello";
    MyString b = a;
    MyString c (a);
    MyString d = a+b;
    std::cout << d.get_str() << std::endl;

    return 0;
}

