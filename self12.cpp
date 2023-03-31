//using friend function
#include<iostream>
using namespace std;
class Student 
{
    private:
    int id;
    public:
    void setter(void);
    friend void display(Student obj);

};
void Student :: setter()
{
    cout<<"Enter the id"<<endl;
    cin>>id;
}
void display(Student obj)
{
    cout<<"The id is"<<endl<<obj.id<<endl;
}
int main()
{
    Student obj;
    obj.setter();
    display(obj);
    return 0;

}