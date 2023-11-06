/*Interface and Multiple Inheritance*/
#include <iostream>

class drawable{
    private:

    public:
        drawable() = default;
        ~drawable() = default;
        virtual float draw () = 0;
};

class circle:public drawable
{
private:
    float radius;
public:
    circle() = default;
    circle(float r):radius(r){};
    float draw() override{
        float shape = 2* 3.14* radius;
        return shape;
    };
    ~circle() = default;
};    


class Rectangle:public drawable
{
private:
    float length;
    float width;
public:
    Rectangle() = default;
    Rectangle(float l, float w):length(l),width(w){};
    float draw() override{
        float shape = 2* (width * length);
        return shape;
    };    
    ~Rectangle() = default;
};

class Triangle:public drawable
{
private:
    float len1;
    float len2;
    float len3;
public:
    Triangle() = default;
    Triangle(float l1, float l2, float l3):len1(l1),len2(l2),len3(l3){};
    float draw() override{ 
        float shape = len1 + len2 + len3;
        return shape;
    };
    ~Triangle() = default;
};


int main()
{
    drawable *obj;
    circle c(5);
    Rectangle r(3,4);
    Triangle t(3,4,5);

    obj = &c;
    std::cout << "Circule shape: " << obj->draw()<< std::endl;

    obj = &r;
    std::cout << "Rectangle shape: " << obj->draw()<< std::endl;

    obj = &t;
    std::cout << "Triangle shape: " << obj->draw()<< std::endl;
    return 0;
}
