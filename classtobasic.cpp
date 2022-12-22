//CLASSTYPE TO BASICTYPE
#include<iostream>
using namespace std;
class Distance{
    int km ;
    public:
        Distance(int p){
            km = p;
        }
        operator int(){
            int m = km * 1000;
            return m;
        }
};
int main(){
    int meter;
    Distance d(3);
    meter = d;
    cout<<meter;
}