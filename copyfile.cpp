#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("a.txt");
    ofstream fout("a1.txt");
    char a;
    while(fin){
        fin>>a;
        fout<<a;
    }
    fin.close();
    fout.close();
}
