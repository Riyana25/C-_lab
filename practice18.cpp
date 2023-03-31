 //this Pointer Demo #include <iostream> using namespace std;
 #include<iostream>
 using namespace std;
class Check {
private: int var;
public:
Check( ){ } Check(int var) {
this -> var = var; }
 Check send( ) {
return *this; }
void show() 
{
    cout<< "var = " << var; }
};
int main( ) {
Check var(44);
Check ans;
ans = var.send( ); 
ans.show( ); 
return 0;
}

   
