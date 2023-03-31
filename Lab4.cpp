#include<iostream>
using namespace std;

void multiply(int ,int ,int);
void multiply(float ,float, float);

int main()
{
    int a,b,c;
    float d,e,f;

     cout<<"Enter the three integer numbers: "<<endl;
    cin>>a>>b>>c;
    cout<<"Enter the three floating numbers: "<<endl;
    cin>>d>>e>>f;

    multiply(a,b,c);
    multiply(d,e,f);
     return 0;
     }

     void multiply(int x,int y,int z)
     {
         int product;
         product= x*y*z;
         cout<<"The product is:"<<product;
         
     }
      void multiply(float x,float y,float z)
     {
         float product;
         product= x*y*z;
         cout<<"The product is:"<<product;
         
     }

