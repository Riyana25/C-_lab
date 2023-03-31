//binary operator overloading using friend function
#include<iostream>
using namespace std;
class Complex
{
    private:
    float x;
    float y;
    public:
    Complex()
    {}
    Complex(float real,float img)
    {
        x=real;
        y=img;
    }
    friend Complex operator+(Complex c1,Complex c2);
    void display(void);
};
//friend function
Complex operator+(Complex c1,Complex c2)
{
    cout<<"operator overloading is called"<<endl;
    Complex temp;
    temp.x =c1.x+c2.x;
    temp.y =c2.y+c2.y;
    return temp;
}
void Complex :: display()
{
    cout<<x<<"+j"<<y<<endl;
}

int main()
{
    Complex c3;
    Complex c1(2.5,3.5);
    c1.display();

    Complex c2(1.6,2.7);
    c2.display();

    // c3=c1+c2;
    //Here c1 is responsible for invoking function
    c3 = operator+(c1,c2);
    c3.display();
    return 0;
}