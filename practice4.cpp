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
class D : private B //privately inherited
{
    int c;
    public:
    void mul(void);
    void display(void);

};

void B :: set_ab(void)
{
    cout<<"enter the values of a and b:"<<endl;
    cin>>a>>b;
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
    set_ab();
    c= b* get_a();
}
void D :: display()
{
    show_a();
    cout<<"b ="<<b<<endl;
    cout<<"c ="<<c<<endl;

}

int main()
{
    D d;
    // d.set_ab();
    d.mul();
    // d.show_a();
    d.display();

    // d.b =20;
    d.mul();
    d.display();
    return 0;
    

}