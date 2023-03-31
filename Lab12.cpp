#include<iostream>
using namespace std;

class Bank{
    private:
    string accountName;
    int balance;
    static int count;

    public:
    void setter(void)
    {
        cout<<"Enter the accountName"<<endl;
        cin>>accountName;
        cout<<"Enter the balance"<<endl;
        cin>>balance;

    }
    void deposit(void){
        int deposit;
        cout<<"Enter the bank deposit"<<endl;
        cin>>deposit;

        deposit =balance +deposit;

        cout<<"the bank deposit"<<endl<<deposit;
}
    void withdraw(void){
         int draw;
        cout<<"Enter the bank withdraw"<<endl;
        cin>>draw;

        draw =balance - draw;

        cout<<"the bank withdraw"<<endl<<draw;

    }
     void displayBalance(void){

        cout<<"Display the balance"<<endl<<balance;

    }

    
};

int main()
{
    Bank b[3];
    for(int i=0;i<3;i++)
    {
        b[i].setter();
    }

    int choice;

    cout<<"Enter the choice you want"<<endl;
    cin>>choice;

    for(int i=0;i<3;i++)
    {
        switch(choice)
        {
            case 1:
            b[i].deposit();
            break;

            case 2:
            b[i].withdraw();
            break;

            case 3:
            b[i].displayBalance();
            break;

            case 4:
            b[i].displayTotal();
            break;

            case 5:
            exit(-1);
            break;

            default:
            cout<<"No choice"<<endl;

        }
    }
    
    return 0;
}