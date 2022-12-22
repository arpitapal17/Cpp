#include<iostream>
using namespace std;
class X{
    public:
    X(){
        cout<<"base class"<<endl;
    }
    X(int p){
        cout<<p<<endl;
    }
};
class Y : public X{
    public:
    Y(){
        cout<<"derived class"<<endl;
    }
    Y(int p) {
        cout<<"derived"<<endl;
    }
};
int main(){
    // Y y1;
    // X x1;
    // X x2(8);
    Y y2(10);
}

