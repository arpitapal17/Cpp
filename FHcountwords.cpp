#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char c;
    int count = 0;
    ifstream fin("a.txt");
    while(fin){
        cout<<c;
        fin.get(c);
        if(c=='\n'||c==' ')
            count++;
    }
    cout<<"\nTotal number of words : "<<count+1;
    fin.close();
}