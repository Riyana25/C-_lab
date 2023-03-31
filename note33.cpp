//using ios member functions with manipulators
#include<iostream>
using namespace std;
int main()
{
    float num[5]={1.0,-1.2345,2350.1,23.4,45.34};
    cout.setf(ios::showpos);
    //show the + sign before positive numbers
    cout.setf(ios::scientific);
    //use scientific notation
    cout.precision(2);
    //two digits after decimal point
    for(int i=0;i<5;i++)
    {
        cout.width(20);
        //use 10 spaces for the numbers
        cout.fill('$');
        //pad with $
        cout<<num[i]<<endl;
    }
    return 0;
}