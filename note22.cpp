//using class template 
#include<iostream>
using namespace std;
template<class T>

class Calculator
{
    private:
    T num1,num2;
    public:
    Calculator(T n1,T n2)
    {
        num1=n1;
        num2=n2;
    }
    void displayResult()
    {
        cout<<"No are "<<num1<<endl<<num2<<endl;
        cout<<"sum ="<<add()<<endl;
        cout<<"difference ="<<subtract()<<endl;
        cout<<"product ="<<multiply()<<endl;
        cout<<"division ="<<divide()<<endl;
    }

    T add()
    {
        return(num1+num2);
    }
    T subtract()
    {
        return(num1-num2);
    }
    T multiply()
    {
        return(num1*num2);
    }
    T divide()
    {
        return(num1/num2);
    }
};
int main()
{
    //class template objects
    Calculator<int>intCal(6,2);
    Calculator<float>floatCal(4.4,2.2);

    cout<<"int result"<<endl;
    intCal.displayResult();

    cout<<"float result"<<endl;
    floatCal.displayResult();
    return 0;
}