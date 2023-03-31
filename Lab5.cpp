#include<iostream>
using namespace std;

void readInt(int *ptr,int );
int max(int *ptr,int);
int (*getMax)(int *ptr,int);

int main()
{
    int n;
    int max;
    int myArray[n];
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;

    readInt(&myArray[0],n);
    // max=

    return 0;
}
void readInt(int *ptr,int N)
{

    int i;
    for(i=0;i<N;i++)
    {
        cin>> ((ptr)+i);
    }
    for(i=0;i<N;i++)
    {
        cout<< *((ptr)+i)<<endl;
    }

}

