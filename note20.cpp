//function with multiple parameters
#include<iostream>
using namespace std;

template<class T1,class T2>
void display(T1 x,T2 y)
{
    cout<<x<<endl<<y<<endl;
}
int main()
{
    cout<<"Call with integer and character";
    display(45,'z');
    cout<<endl<<"Call with float and integer"<<endl;
    display(22.22,77);
    return 0;
}