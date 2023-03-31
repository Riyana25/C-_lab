/* Constructor are special type of member functions which has following features:
I.same name as that of class
II.no return type not even a void
III.usually placed in public access
IV.function overloaded */

// A normal class using access modifier private and public
#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    string name;
    public:
    Student()//this is default constructor
    {
        roll=0;
    }
    Student(int a,string b)//This is parametrized constructor
    {
        roll=a;
        name=b;
    }
    void displayData(void);
};

void Student :: displayData()
{
    cout<<"The roll number is"<<endl<<roll<<endl;
    cout<<"The name is"<<endl<<name<<endl;
}
int main()
{
    Student std1(1,"Riyana");
    std1.displayData();
    /* Student std1;
    std1(1,"Riyana"); This doesnot works
    */
    

    return 0;

}
