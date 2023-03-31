//using friend class
#include<iostream>
using namespace std;
class Second;
class First{
    friend class Second;
    private:
    int x,y,z;
    public:
    void setter(void);
};
void First :: setter()
{
    cout<<"Enter the x,y,z"<<endl;
    cin>>x>>y>>z;
}
class Second{
    public:
    void display(First obj);

};
void Second :: display(First obj)
{
    cout<<"The values of x y and z are"<<endl<<obj.x<<endl<<obj.y<<endl<<obj.z<<endl;

}
int main()
{
    First firstobj;
    firstobj.setter();
    Second secondobj;
    secondobj.display(firstobj);
    return 0;

}