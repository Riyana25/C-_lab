//demonstrating a class template 
#include<iostream>
using namespace std; 
template<class T1, class T2>
class Average
{
    private:
    T1 num1;
    public:
    Average()
    {
        num1=0;
    }
    Average(T1 n)
    {
        num1=n;
    }
    T2 myAvg(T2 num2)
    {
        return((num1+num2)/2);
    }
};
int main()
{
    Average <int ,float> obj1(5);
    Average <int ,float> obj2(6);
    cout<<obj1.myAvg(5.5)<<endl;
    cout<<obj2.myAvg(5.5)<<endl;
    return 0;
}