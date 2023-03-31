#include<iostream>
using namespace std;
class Calculate
{
    private:
    float real;
    float img;
    public:
    Calculate()
    {
        real =0;
        img=0;
    }
    Calculate(float a,float b)
    {
        real=a;
        img=b;
    }
    friend Calculate operator /(Calculate,Calculate);
    void show();

};
int main()
{

}