//passing function pointer as arguments
#include<iostream>
using namespace std;

int sum(int ,int);
int (*ptr)(int ,int);
void calculate(int (*ptr)(int, int),int ,int,int);
int main()
{
    int a=10, b=20,n=3;
    ptr=&sum;
    int add;
    // add= (*ptr)(a,b);
    calculate(ptr,a,b,n);

    return 0;

}
int sum(int a,int b)
{
    return(a+b);
}
 void calculate(int (*ptr)(int, int),int a,int b,int n)
 {
     int total;
     total=(*ptr)(a,b)*n;
     cout<<"total"<<total;

 }