//multilevel inheritance
#include<iostream>
using namespace std;
//*****GRANDFATHER*****
class Student{
    protected:
    int roll_num;
    public:
    void get_number();
    void put_number();
};
void Student :: get_number()
{
    cout<<"Enter the roll number"<<endl;
    cin>>roll_num;
}
void Student :: put_number()
{
    cout<<"The roll number is "<<endl<<roll_num<<endl;
}
//******FATHER******
class Test : public Student
{
    protected:
    float marks1, marks2;
    public:
    void get_marks();
    void put_marks();
};
void Test :: get_marks()
{
    cout<<"Enter the marks"<<endl;
    cin>>marks1>>marks2;
}
void Test :: put_marks()
{
    cout<<"marks are"<<endl<<marks1<<endl<<marks2<<endl;
}
//******GRANDCHILD********
class Result : public Test{
    private:
    float total;
    public:
    void display();
};
void Result :: display()
{
    total = marks1 +marks2;
    // put_number();
    // put_marks();
    cout<<"total"<<endl<<total;
}

int main()
{
    Result std1;
    std1.get_number();
    std1.get_marks();
    std1.put_number();
    std1.put_marks();
    std1.display();
    return 0;

}