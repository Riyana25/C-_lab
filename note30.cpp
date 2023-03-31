//Rethrowing an exception
#include<iostream>
using namespace std;
void divide(double x,double y)
{
    cout<<"inside function"<<endl;

    try{
        if(y == 0)
        {
            throw y; //throwing double
        }else{
            cout<<"division ="<<x/y<<endl;
        }
    }
    catch(double)
    {
        
        cout<<"caught double inside function"<<endl;
        cout<<"i throw in main"<<endl;
        throw; //rethrowing double
    }
    cout<<"end of function"<<endl;
}
int main()
{
    cout<<"inside main"<<endl;

    try{
        divide(10.5,0);
        // divide(20.0,0.0);
    }
    catch(double)
    {
        cout<<"i am last"<<endl;
        cout<<"caught double inside main"<<endl;
    }
    cout<<"ENd of main"<<endl;
    return 0;
}