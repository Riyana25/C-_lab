#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("file.txt");
    char ch;

    do{
        cin.get(ch);
        fout.put(ch);
    }while(ch != EOF);
    
    cout<<"Data is written"<<endl;
    fout.close();

    ifstream fin;
    fin.open("file.txt");
    char rh;

    cout<<"data in file"<<endl;
    while(! fin.eof())
    {
        fin.get(rh);
        cout<<rh;
    }
    fin.close();
    return 0;

}