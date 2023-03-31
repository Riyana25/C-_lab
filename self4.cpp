//using constructor and destructor
#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    int age;
    public:
    Student();//this is default constructor
    ~Student(); //this is destructor
     
    void setter(void);
    void displayData(void);
};
Student :: Student()//constructor
{
    roll=0;
    age=0;
}
Student :: ~Student()
{
    cout<<"Destructor is called"<<endl;
}
void Student :: setter()
{
    cout<<"Enter the roll number"<<endl;
    cin>>roll;
    cout<<"Enter the age"<<endl;
    cin>>age;
}


void Student :: displayData()
{
    cout<<"The roll number is"<<endl<<roll<<endl;
    cout<<"The age is"<<endl<<age<<endl;
}
int main()
{
    Student std1;
    std1.displayData();
    std1.setter();
    std1.displayData();
    std1.~Student();//This is optional
    return 0;

}
