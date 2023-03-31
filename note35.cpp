//opening a file for writing data  using mode
#include<iostream>
// #include<fstream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("test.txt",ios::out);//file open
    fout<<"hello Riyana";
    cout<<"Data successfully written in file"<<endl;
    fout.close();
    return 0;

}