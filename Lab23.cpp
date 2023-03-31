//creating a function template to swap 2 values
#include<iostream>
using namespace std;
template<class T1>
class Calculate
{
    private:
    T1 num1,num2;
    public:
    Calculate(T1 n1,T1 n2)
    {
        num1=n1;
        num2=n2;
    }
    
    
    void swapping()
    {
        T1 temp;
        temp=num1;
        num1=num2;
        num2= temp;
    }
    void display()
    {
        cout<<"num1 and num2 after swapping is"<<endl<<num1<<endl<<num2<<endl;
    }

};
int main()
{
    Calculate <int> obj1(5,6);
    obj1.swapping();
    obj1.display();
    Calculate <float> obj2(6.9,7.8);
    obj2.swapping();
    obj2.display();
    Calculate <char> obj3('R','S');
    obj3.swapping();    
    obj3.display(); 
    return 0;

}