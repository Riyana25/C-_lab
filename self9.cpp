//pointer to objects
//printing info of three student
#include<iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    int marks;
    public:
    void setter(void);
    void getter(void);
};
void Student :: setter()
{
    cout<<"Enter the roll number"<<endl;
    cin>>roll;
    cout<<"Enter the name"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"Enter the marks obtained"<<endl;
    cin>>marks;
}
void Student :: getter()
{
    cout<<"The roll number is"<<roll<<endl;
    cout<<"The name is"<<name<<endl;
    cout<<"The marks obtained is"<<marks<<endl;
}
int main()
{
    Student std[3];
    Student *sptr; //pointer to object
    sptr=&std[0];
    for(int i=0;i<3;i++)
    {
        (sptr+i)->setter();
        (sptr+i)->getter();
    }
    return 0;



}