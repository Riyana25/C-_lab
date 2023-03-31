//Exception handling demo
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values for a and b"<<endl;
    cin>>a>>b;
    try{
        if(b == 0)
        {
        throw b;
        }else{
            cout<<endl<<"a/b ="<<(float)a/b;
        }
    }
    catch(int x)
    {
        cout<<endl<<"Divide by zero exception , b= "<<x;
    }
    return 0;
}