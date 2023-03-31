/*THis program demonstrates the concept of class implementation*/
#include<iostream>
using namespace std;

//defining the class
class Account_Holder{
    private:
    int accNum;
    string name;
    int balance;
    public:
    //function prototype
    void getData(void);
    //function definition inside class
    void putData(void)
    {
      
        cout<<"Enter the account number:"<<endl;
        cin>>accNum;
        cout<<"Enter the name :"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the balance :"<<endl;
        cin>>balance;
        
        
    }
};

//Member function definition outside the class

 void Account_Holder :: getData(void)
{
    cout<<"the account number:"<<accNum<<endl;
    cout<<"the name :"<<name<<endl;
    cout<<"the balance :"<<balance<<endl;
        
    
}

int main()
{
    // class Account_Holder customer[3];
    class Account_Holder customer[3];

    cout<<"This is accessing through object directly"<<endl;

    

//    ptr->putData();
//    (*ptr).putData();
//     ptr->getData();
    

  
     for(int i=0;i<3;i++)
     {
         customer[i].putData();
         customer[i].getData();

     }

     cout<<"This is accessing through pointer to object"<<endl;

     class Account_Holder *ptr;
    ptr=&customer[0];

     for(int i=0;i<3;i++)
     {
         (ptr+i)->putData();
         (ptr+i)->getData();
    }

       return 0;
}