//WAP TO DISPLAY THE CONTENTS OF THE FILE IN BACKWARD DIRECTION
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char c;
    ifstream fin;
    fin.open("a.txt");
    fin.seekg(0,ios::end);
    int pos = fin.tellg();
    cout<<pos<<endl;
    for(int i = 1 ; i<=pos; i++)
    {
        fin.seekg(-i,ios::end);
        fin.get(c);
        cout<<c;
    }
    fin.close();
}