#include<iostream>
using namespace std;


    struct Department{

        char departName[20];
        int departNum;

         struct Employee{
                  int empId;
                  int salary;
                  char name[20];
                  char post[20];
                  }emp[5];
};


int main()
{
    
    struct Department depart[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter the department name:"<<endl;
        cin.ignore();
        cin>>depart[i].departName;
        cout<<"Enter the departNum :"<<endl;
        cin>>depart[i].departNum;

    }
    for(int i=0;i<3;i++)
     {
         for(int j=0;i<5;i++)
        {
        cout<<"Enter the emp ID:"<<endl;
        cin>>depart[i].emp[j].empId;
        cout<<"Enter the salary:"<<endl;
        cin>>depart[i].emp[j].salary;
        cout<<"Enter the name:"<<endl;
        cin.ignore();
        cin>>depart[i].emp[j].name;
        cout<<"Enter the post:"<<endl;
        cin.ignore();
        cin>>depart[i].emp[j].post;
        }
    }

    for(int i=0;i<3;i++)
     {
         for(int j=0;i<5;i++)
        {
            if((depart[i].emp[j].post) == "department_head")
            {
                cout<<"the emp ID:"<<endl;
                cin>>depart[i].emp[j].empId;
                cout<<"the salary:"<<endl;
                cin>>depart[i].emp[j].salary;
                cout<<"the name:"<<endl;
                cin>>depart[i].emp[j].name;
        
            }
    
    }

    return 0;
    
}
