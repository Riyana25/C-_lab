//overlaoding stream insertion and stream extraction operator
//A program to input and output a complex number using overloaded stream
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    friend istream &operator>>(istream &in,Complex &c);
    friend ostream &operator<<(ostream &out,Complex &c);

};
istream &operator>>(istream &in,Complex &c)
{
    cout<<"Enter real part";
    in>>c.real;
    cout<<endl<<"Enter imaginary";
    in>>c.img;
    return in;
}
ostream &operator<<(ostream &out,Complex &c)
{
    out<<c.real;
    out<<"+"<<c.img<<"i";
    return out;
}

int main()
{
    Complex c1;
    cin>>c1;
    cout<<endl<<"Entered Complex object";
    cout<<c1;
    return 0;

}
