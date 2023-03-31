//creating a function that generate exception
#include<iostream>
using namespace std;
void multiply(int a,int b)
{
    if(a == 0)
    {
        throw a;
    }else
    {
        cout<<"a*b = "<<a*b<<endl;
    }

}
int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b; 
    try{
        multiply(a,b);
    }
    catch(int x)
    {
        cout<<"This is exception: a= "<<x;
    }
    return 0;

}