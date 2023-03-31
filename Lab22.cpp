//program to overload the pointer to member (->)operator
#include<iostream>
using namespace std;
class Class
{
    public:
    int num;
    Class(int num)
    {
        this->num=num;
    }

    Class* operator->()
    {
        return this;
    }
};
int main()
{
    Class obj(5);
    cout<<obj->num;
    return 0;

}