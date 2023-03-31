//Nested class for student
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
    class Date{
        private:
        int year;
        int month,day;
        public:
        void setter();
        void getter();

    }db;
};
void Student :: Date :: setter()
{
    cout<<"Enter the year/month/day"<<endl;
    cin>>year>>month>>day;
}
void Student :: Date :: getter()
{
    cout<<"The date is"<<year<<endl<<month<<endl<<day<<endl;

}
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
    std1.db.setter();
    std1.db.getter();
    return 0;

}