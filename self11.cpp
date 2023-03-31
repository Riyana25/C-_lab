//passing function pointer as an arguments
#include<iostream>
using namespace std;
int sum(int ,int);
int (*sptr)(int ,int);//function pointer
void calculate(int (*sptr)(int ,int),int, int ,int);
int main()
{
    int a=3,b=4,n=5;
    sptr=&sum;
    calculate(sptr,a,b,n);
    return 0;

}
int sum(int x,int y)
{
    return(x+y);
}
void calculate(int (*sptr)(int ,int),int a,int b,int n)
{
    int total;
    total=(*sptr)(a,b)*n;
    cout<<"The total is"<<total<<endl;
    
}