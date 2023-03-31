#include<iostream>
using namespace std;

int main()
{
    int myArray[10];
    int *ptr;
    ptr= &myArray[0];

    cout<<"Enter the array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>> *((ptr)+i);
    }
     cout<<"Array"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<< *((ptr)+i);
    }
    return 0;
}