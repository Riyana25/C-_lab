//using three type of constructors and destructors
#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    int age;
    public:
    Student();//this is default constructor
    Student(int r,int a);//This is parameterized constructor
    Student(const Student &obj2);//This is copy constructor
    ~Student(); //this is destructor
     
    void setter(void);
    void displayData(void);
};
Student :: Student()//constructor
{
    roll=0;
    age=0;
}
Student :: Student(int r,int a)
{
    roll =r;
    age =a;
}
Student :: Student(const Student &obj2)
{
    roll=obj2.roll;
    age=obj2.age;
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
    Student std2;
    Student std1(1,50);
    std1.displayData();
    std2.setter();
    std2.displayData();
    // Student std3(std2); This is equivalent to below
    Student std3 = std2;
    std3.displayData();
    /*Student std3;
    std(std2);
    THis is wrong*/

    std1.~Student();//This is optional
    return 0;

}
