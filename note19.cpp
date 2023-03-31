//program using template function
#include<iostream>
using namespace std;

//using template function
template<class T>

//function definition
T large(T n1,T n2)
{
    return(n1>n2)?n1:n2;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"Enter the integers"<<endl;
    cin>>i1>>i2;
    cout<<endl<<large(i1,i2)<<"is a largest"<<endl;
    cout<<"Enter two floating"<<endl;
    cin>>f1>>f2;
    cout<<endl<<large(f1,f2)<<"is a largest"<<endl;
    cout<<"Enter two characters"<<endl;
    cin>>c1>>c2;
    cout<<endl<<large(c1,c2)<<" shas a largest ascii"<<endl;
    return 0;

}
