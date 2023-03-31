//Addition operator using member function
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
    //using member fun for overloading
     Complex operator+(Complex);

    void display();

};
void Complex :: display()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}
Complex Complex :: operator+(Complex obj2)
{
    Complex temp;
    temp.real= real+obj2.real;
    temp.img= img+obj2.img;
    return(temp);
}
int main()
{
    Complex c3;
    Complex c1(5,6);
    c1.display();
    Complex c2(5,5);
    c2.display();
    c3 = c1.operator+(c2);
    c3.display();
    return 0; 

}