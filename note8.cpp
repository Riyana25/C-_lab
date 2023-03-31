//using virtual function to achieve the runtime polymorphism
#include<iostream>
using namespace std;
class Base{
    public:
    void display()
    {
        cout<<endl<<"Show Base"<<endl;
    }
    virtual void show()
    {
        cout<<"Show Base"<<endl;
    }
};
class Derived : public Base{
    public:
    void display()
    {
        cout<<endl<<"Display Derived"<<endl;
    }
    void show()
    {
        cout<<"Display derived"<<endl;
    }
};
int main()
{
    Base B;
    Base *bptr;
    bptr =&B;
    cout<<"bptr points to base class"<<endl;
    bptr->display();//calls to base member
    bptr->show();

    Derived D;
    bptr=&D;
    cout<<"bptr now points to derived class"<<endl;
    bptr->display();//calls to derived member
    bptr->show();//calls to same base member because it is not virtual fuction
    return 0;


}