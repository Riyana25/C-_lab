//multilevel inheritance
#include<iostream>
using namespace std;

//grand father class
class Student{
    protected:
    int roll_number;
    public:
    void get_number();
    void put_number();
};
void Student :: get_number()
{
    cout<<"Enter rollnumber"<<endl;
    cin>>roll_number;
}
void Student :: put_number()
{
    cout<<"Roll Number"<<roll_number<<endl;
}

//Father class
class Test : public Student{
    protected:
    float sub1;
    float sub2;
    public:
    void get_marks(float, float);
    void put_marks(void);

};
void Test :: get_marks(float x,float y)
{
    sub1=x;
    sub2=y;
}
void Test :: put_marks()
{
    cout<<"marks are"<<sub1<<sub2<<endl;

}

class Result : public Test{
    private:
    float total;
    public:
    void display(void);
};

void Result :: display()
{
    total=sub1+sub2;
    cout<<"Total is"<<endl<<total<<endl;
}
int main(){
    Result std1;
    std1.get_number();
    std1.put_number();
    std1.get_marks(75.0,59.5);
    std1.display();
    return 0;

}