//exception handling in a class
#include<iostream>
using namespace std;
class Student
{
    private:
    char gender;
    public:
    void setter();
    void getter();
};
void Student :: setter()
{
    cout<<"Enter the gender of student either [M/F]"<<endl;
    cin>>gender;

}
void Student :: getter()
{
    if(gender == 'T')
    {
        throw gender;
    }else{
        cout<<"The gender of student is"<<gender<<endl;
    }

}
int main()
{
    Student std1;
    std1.setter();
    try{
        std1.getter();
    }
    catch(char gen)
    {
        cout<<"The third gender"<<gen<<"\t"<<" is exception"<<endl;
    }
return 0;
}