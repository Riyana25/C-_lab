//swapping values through call by reference 
#include<iostream>
using namespace std;

void swap(int &,int &);
int main()
{
    int n1, n2;
    cout<<"Enter n1"<<endl;
    cin>>n1;
    cout<<"Enter n2";
    cin>>n2;
    cout<<endl<<"Orginal Values";
    cout<<"n1 ="<<n1<<endl<<"n2="<<n2;
    swap(n1,n2);
    cout<<endl<<"After swap";
    cout<<"n1 ="<<n1<<endl<<"n2="<<n2;
    return 0;
}

void swap(int &n1,int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;

}

