/*Create Class behave like string totally*/

#include <iostream>

class myString
{
    private:
        std::string str;
    public:
        myString():str(""){}
        myString(const std::string& s){
            this->str = s;
        }
        myString(const myString& s){
            this->str = s.str;
        }
        myString(myString&& s){
            if(&s != this){
                this->str = std::move(s.str);
            }
            else{
                std::cout<<"same object";
            }
        }

        myString& operator= (const myString& s){
            if(&s == this){
                return *this;
            }
            else{
                this->str = s.str;
                return *this;
            }         
        }

        myString& operator= (myString&& s){
            if(&s == this){
                return *this;
            }
            else{
                this->str = std::move(s.str);
                return *this;
            }         
        }

        size_t getlength(){
            size_t length;
            length = this->str.length();
            return length;
        }

        myString& operator +(const myString& s){
            this->str += s.str;
            return *this;
        }

        char& operator[](size_t index){
            return this->str[index];
        }

        bool operator == (const myString& s){
            return this->str== s.str;
        }

        friend std::ostream& operator <<(std::ostream& os, const myString& s){
            os << s.str;
            return os;
        }

};

int main() 
{
        // Create myString objects
    myString s1("Hello");
    myString s2(" World");

    // Use copy constructor
    myString s3(s1);

    // Use move constructor
    myString s4(std::move(s2));

    std::cout << "s1: " << s1 << '\n';
    std::cout << "s3 (copy of s1): " << s3 << '\n';
    std::cout << "s4 (moved from s2): " << s4 << '\n';

    // Use copy assignment operator
    myString s5;
    s5 = s1;

    // Use move assignment operator
    myString s6;
    s6 = std::move(s3);

    std::cout << "s5 (copy of s1): " << s5 << '\n';
    std::cout << "s6 (moved from s3): " << s6 << '\n';

    return 0;

}