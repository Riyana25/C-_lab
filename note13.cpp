//Addition operator using friend function
#include<iostream>
using namespace std;
class Complex{
    private:
    int real,img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    //using friend fun for overloading
    friend Complex operator+(Complex,Complex);

    void display();

};
void Complex :: display()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}
Complex operator+(Complex obj1,Complex obj2)
{
    Complex temp;
    temp.real= obj1.real+obj2.real;
    temp.img= obj1.img+obj2.img;
    return(temp);
}
int main()
{
    Complex c3;
    Complex c1(5,6);
    c1.display();
    Complex c2(5,5);
    c2.display();
    c3 = operator+(c1,c2);
    c3.display();
    return 0; 

}