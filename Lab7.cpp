#include<iostream>
#include<string.h>
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

         for(int j=0;j<5;j++)
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
        
         for(int j=0;j<5;j++)
        {
            if(strcmp((depart[i].emp[j].post) , "departmenthead") == 0){
        
        cout<<"the name of employee whose post is department head is:"<<endl<<depart[i].emp[j].name<<endl;
        }
        }
        
    }

    return 0;
    
}
