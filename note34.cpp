//opening a file for writing data without using mode
#include<iostream>
// #include<fstream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("test.txt");//file open
    fout<<"hello Riyana";
    cout<<"Data successfully written in file"<<endl;
    fout.close();
    return 0;

}