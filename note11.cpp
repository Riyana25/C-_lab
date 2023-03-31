//comparison operator overloading using member function
#include<iostream>
using namespace std;
class Sample{
    private:
    int x;
    public:
    void setvalue()
    {
        cout<<"enter value"<<endl;
        cin>>x;
    }
    int operator<(Sample obj2)
    {
        if(x<obj2.x)
        {
            return x;
        }else{
            return obj2.x;
        }
    }

};
int main()
{
    Sample s1,s2;
    s1.setvalue();
    s2.setvalue();
    int res;
    // res=s1<s2;
    res= s1.operator<(s2);
    cout<<"smaller value"<<res;
    return 0;

}