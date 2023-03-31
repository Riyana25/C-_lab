//using multiple class template
#include<iostream>
using namespace std;
template<class T1,class T2>
class Test
{
    private:
    T1 a;
    T2 b;
    public:
    Test(T1 x1,T2 x2)
    {
        a=x1;
        b=x2;
    }
    void show()
    {
        cout<<a<<" and "<<b<<endl;

    }
};
int main()
{
    //class template objects
    Test<float,int>test1(1.23,123);
    test1.show();
    Test<int,char>test2(100,'W');
    test2.show();
    return 0;
}