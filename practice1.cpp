//function overloading
#include<iostream>
using namespace std;
void getAdd(int ,int ,int);
void getAdd(float, float);
void getAdd(char ,char, char);

int main()
{
    getAdd(1,2,3);
    getAdd(1.1,2.3);
    getAdd('A','b','C');
    return 0;

}
void getAdd(int a,int s,int f)
{
    cout<<"riyana"<<endl;
    cout<<a+s+f<<endl;


}
void getAdd(float c, float d)
{
    cout<<"priya"<<endl;
    cout<<c+d<<endl;

}
void getAdd(char a,char b, char m)
{
    cout<<"hina"<<endl;
    cout<<a+b+m<<endl;

}