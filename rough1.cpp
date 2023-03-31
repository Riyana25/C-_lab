//single inheritance (publicly inherit)
#include<iostream>
using namespace std;
class Parent
{
    private:
    int ageP;
    public:
    int getAge();
    void showAge();
};
class Son : public Parent
{
    private:
    int ageS;
    public:
    int total;
    void read();
    void setter();
    void add();
    void display();
};
int Parent :: getAge()
{
    cout<<"Enter the age of father"<<endl;
    cin>>ageP;
    return ageP;
}
void Parent ::showAge()
{
    cout<<"the age of father is"<<endl<<ageP<<endl;
}
void Son :: setter()
{
    cout<<"Enter the age of son"<<endl;
    cin>>ageS;
}
void Son :: add()
{
    total= ageS + getAge();
}
void Son :: display()
{
    cout<<"the total is"<<" "<<total<<endl;
}
void Son :: read()
{
    total=44;
    cout<<"The total is"<<total<<endl;
}
int main()
{
    Son s;
    s.setter();
    s.add();
    s.showAge();
    s.display();
    s.read(); //this is a test
    return 0;
}