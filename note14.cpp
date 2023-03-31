//postfix and prefix operator overloading using member function
#include<iostream>
using namespace std;
class Counter
{
    private:
    int count;
    public:
    Counter()
    {
        count=0;
    }
    Counter(int count)
    {
        this->count=count;
    }
    int show()
    {
        return count;
    }

    //preincrement overloading
    Counter operator++()
    {
        return Counter(++count);
    }

    //post increment overloading
    Counter operator++(int)
    {
        return Counter(count++);
    }
};
int main()
{
    Counter c2,c1(5);
    cout<<"c1="<<c1.show()<<endl;
    cout<<"c2="<<c2.show()<<endl;

    //overloaded definition called
    c2=++c1;
    cout<<"c2="<<c2.show()<<endl;

    //overloaded definition called
    c2=c1++;
    cout<<"c2="<<c2.show()<<endl;

    return 0;



}