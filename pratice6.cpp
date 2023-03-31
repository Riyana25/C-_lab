//function pointer or pointer to function
#include<iostream>
using namespace std;

float sum(float, float);
//pointer function
// it doesnot have definition
float (*ptr)(float ,float);

int main()
{

    ptr=&sum;
    float x=3.0, y=9.0, fsum;
    // fsum= sum(x,y);
    fsum= (*ptr)(x,y);

    cout<<fsum<<endl;
    return 0;

}
float sum(float a, float b)
{
    float f=a+b;
    return(f);

}
