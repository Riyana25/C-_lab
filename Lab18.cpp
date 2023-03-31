#include<iostream>
using namespace std;
class Number2;
class Number1{
    private:
    int num1;
    public:
    void setter(void);
    friend void get( Number1 obj1,Number2 obj2);
};
void Number1 :: setter()
{
    cout<<"Enter the first number"<<endl;
    cin>>num1;
}
class Number2{
    private:
    int num2;
    // int total;
    public:
    void set(void);
    friend void get(Number1 obj1,Number2 obj2);
};

void Number2 :: set()
{
    cout<<"Enter the second number"<<endl;
    cin>>num2;

}
void get(Number1 obj1,Number2 obj2)
{
    int total;
    total = obj1.num1+obj2.num2;
    cout<<"Total of two numbers is"<<endl<<total<<endl;
}
int main()
{
    Number1 N1;
    N1.setter();
    Number2 N2;
    N2.set();
    get(N1,N2);
    return 0;

}