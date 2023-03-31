//using constructor and destructor 
#include<iostream>
using namespace std;
class Calculate{
    private:
    int real;
    int img;
    public:
    Calculate(){
        real=0;
        img=0;
    }
    Calculate(int r,int i)
    {
        real=r;
        img=i;
    }
    Calculate(const Calculate &c4)
    {
        real=c4.real;
        img=c4.img;
    }
    void display(void);
    void addition(Calculate c1,Calculate c2);
    void subtraction(Calculate c1,Calculate c2);
    void displayAdd(void);
    void displaySub(void);
};
void Calculate :: display()
{
    cout<<"real and imaginary number are"<<real<<endl<<img<<endl;

}
void Calculate :: displayAdd()
{
    cout<<"Addition is"<<real<<"+"<<img<<"i"<<endl;


}
void Calculate :: displaySub()
{
    cout<<"Subtraction is"<<real<<"+"<<img<<"i"<<endl;

}
void Calculate :: addition(Calculate c1,Calculate c2)
{
    img= c1.img+ c2.img;
    real= c1.img+c2.img;

}
void Calculate :: subtraction(Calculate c1,Calculate c2)
{
    img= c1.img - c2.img;
    real= c1.img - c2.img;

}
int main()
{
    Calculate c3;
    Calculate c1(2,3);
    c1.display();

    Calculate c2(4,5);
    c2.display();

    Calculate c4(c2);
    c4.display();

    c3.addition(c1,c4);
    c3.displayAdd();

    c3.subtraction(c1,c4);
    c3.displaySub();

    return 0;


    }
