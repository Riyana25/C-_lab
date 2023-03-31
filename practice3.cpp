#include<iostream>
using namespace std;

//parent class
class B{
    int a;
    public:
    int b;
    void set_ab();
    int get_a(void);
    void show_a(void);
};

//inherited class
class D : public B //publicly inherited
{
    int c;
    public:
    void mul(void);
    void display(void);

};

void B :: set_ab(void)
{
    a=5;
    b=10;
}
int B :: get_a()
{
    return a;
}
void B :: show_a()
{
    cout<<"a ="<<a<<endl;
}
void D :: mul()
{
    c= b* get_a();
}
void D :: display()
{
    cout<<"a ="<<get_a()<<endl;
    cout<<"b ="<<b<<endl;
    cout<<"c ="<<c<<endl;

}

int main()
{
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b =20;
    d.mul();
    d.display();
    return 0;
    

}