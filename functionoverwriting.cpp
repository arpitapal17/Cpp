#include<iostream>
using namespace std;
class A{
    public:
        void print(){
            cout<<"base class"<<endl;
        }
};
class B : public A{
    public:
        void print(){
            cout<<"derived class"<<endl;
        }
};
int main(){
    B b1;
    b1.print();//calls derived class
    b1.A::print();//call base class
} 