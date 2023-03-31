/*virtual base classes are used to reduce the twice inheritance of same characters*/
//mjltilevel inheritance
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

//Father1 class
class Test :virtual public Student{
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
    cout<<"marks are"<<sub1<<endl<<sub2<<endl;

}
//father 2
class Sports : public virtual Student{
    protected:
    float score;
    public:
    void get_marks(float);
    void put_marks(void);

};
void Sports :: get_marks(float s)
{
   score =s;
}
void Sports :: put_marks()
{
    cout<<"score is"<<score<<endl;

}

class Result : public Test,public Sports{
    private:
    float total;
    public:
    void display(void);
};

void Result :: display()
{
    total=sub1+sub2+score;
    cout<<"Total is"<<endl<<total<<endl;
}
int main(){
    Result std1;
    std1.get_number();
    std1.put_number();
    std1.Test::get_marks(90.0,90.0);
    std1.Test::put_marks();
    std1.Sports::get_marks(100.0);
    std1.Sports::put_marks();
    std1.display();
    return 0;

}