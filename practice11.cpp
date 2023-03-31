//single inheritance 2 which is privately inheritated
#include<iostream>
using namespace std;

class Father{
    char name[20];
    int age;
    public:
    void readage();
    int displayage();
    void readData();
    void displayData();
};

class Son : private Father{
    private:
    char name[20];
    int age;
    int diff;
    public:
    
    void setter();
    void getter();
    void totalAge();
};

void Father :: readData()
{
    cout<<"Enter the name of father"<<endl;
    cin.ignore();
    cin.get(name,20);
    
}
void Father :: readage()
{
    cout<<"Enter the age of the father"<<endl;
    cin>>age;

}
int Father :: displayage()
{
    return age;

}

void Father :: displayData()
{
    cout<<"the name of father"<<endl<<name<<endl;
    cout<<"the age of the father"<<endl<<age<<endl;
}

void Son ::setter()
{
    readage();
    readData();
    displayData();
     cout<<"Enter the name of son"<<endl;
    cin.ignore();
    cin.get(name,20);
    cout<<"Enter the age of the son"<<endl;
    cin>>age;

}
void Son :: getter()
{
    cout<<"the name of son"<<endl<<name<<endl;
    cout<<"the age of the son"<<endl<<age<<endl;
}

void Son :: totalAge()
{
     diff =  displayage() - age;
    cout<<"Total age gap between father and son is"<<diff<<endl;

}

int main()
{
    Son so;
    //publicly inherited case
    // so.readage();
    // so.displayage();
    // so.readData();
    // so.displayData();
    //we cant do above in privately inherited case
    so.setter();
    so.getter();
    so.totalAge();

    return 0;

}