#include<iostream>
using namespace std;

class Person{
    public:
    char name[20];
    int id;
    void setter();
    void getter();

    class DOB{
        public:
        int year,month,day;
        void setdob();
        void millionial();
        void eligible();
    }db;
};

void Person :: setter()
{
    cout<<"Enter the name"<<endl;
    cin.ignore();
    cin.get(name,20);
    cout<<"Enter the iD"<<endl;
    cin>>id;
}

void Person :: getter()
{
    cout<<"the name"<<endl<<name;
    
    cout<<"iD"<<endl<<id;
    
}

void Person :: DOB :: setdob()
{
    cout<<"Enter the year month day"<<endl;
    
    cin>>year>>month>>day;
}

void Person :: DOB :: millionial()
{
    if(year>1900 && year<2000)
    {
        cout<<"Millionial"<<endl;
    }
    
}

void Person :: DOB :: eligible()
{
    
}

int main()
{
    class Person per;
    per.setter();
    per.getter();
    per.db.setdob();
    per.db.millionial();

    return 0;
}