//Function pointer
#include<iostream>
using namespace std;
float sum(float ,float);
float (*sptr)(float,float);
//function pointer: it has no definition body

int main()
{
    sptr=&sum;
    float x,y,fsum;
    cout<<"Enter two floating numbers"<<endl;
    cin>>x>>y;
    fsum=sum(x,y);
    fsum=(*sptr)(x,y);
    cout<<"The sum is"<<endl<<fsum<<endl;
    return 0;
}
float sum(float a,float b)
{
    return(a+b);
}