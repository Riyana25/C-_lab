//overloading template function
#include<iostream>
using namespace std;
template<class T>
void display(T x)//overoaded template function
{
    cout<<"overloaded template display1 "<<x<<endl;
}
template<class T1,class T2>
void display(T1 x,T2 y)//overoaded template function
{
    cout<<"OVerloaded template display2 "<<x<<"\t"<<y<<endl;
}
void display(int x)
{
    cout<<"Normal display "<<x<<endl;
}
int main()
{
    display(100);
    display(12.34);
    display(222,3.33);
    display('Y');
    return 0;
}
