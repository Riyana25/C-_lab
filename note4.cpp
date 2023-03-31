//demonstrates funciton overloading
#include<iostream>
using namespace std;

void repchar();//definition
void repchar(char);
void repchar(char,int);

int main()
{
    repchar();
    repchar('=');
    repchar('+',30);
    return 0;
}
//repchar definition 1
//display 45 *
void repchar()
{
    for(int j=0;j<45;j++)
    {
        cout<<"*";

    }
    cout<<endl;
}

//repchar definition 2
//display 45 copies of specified character
void repchar(char ch)
{
    for(int j=0;j<45;j++)
    {
        cout<<ch;  //print specified character

    }
    cout<<endl;
}

//repchar definition 3
//display specified number of copies of sepcified character

void repchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;  //loop n times 
        //print specified character

    }
    cout<<endl;
}




