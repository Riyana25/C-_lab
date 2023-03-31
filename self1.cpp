
// A normal class using access modifier private and public
#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    string name;
    public:
    void readData(void);
    void displayData(void);
};
void Student :: readData()
{
    cout<<"Enter the roll number"<<endl;
    cin>>roll;
    cout<<"Enter the name"<<endl;
    cin.ignore();
    getline(cin,name);
}
void Student :: displayData()
{
    cout<<"The roll number is"<<endl<<roll<<endl;
    cout<<"The name is"<<endl<<name<<endl;
}
int main()
{
    Student std1;
    std1.readData();
    std1.displayData();
    return 0;

}