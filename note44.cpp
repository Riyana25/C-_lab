//a random writing on a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("myfile.txt");

    if(fout.is_open())
    {
        fout<<"I am a lady coder \n";
        fout<<"coding is my life \n";
          fout.close();
        
    }
    cout<<"data is sucessfully written in file"<<endl;
    
    return 0;
}