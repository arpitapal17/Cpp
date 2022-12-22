#include<iostream>
using namespace std;
class Base{
    public:
        void display(){
            cout<<"display base class"<<endl;
        }
        virtual void show(){
            cout<<"show base class"<<endl;
        }
};
class Derived : public Base{
    public:
        void display(){
            cout<<"display derived class"<<endl;
        }
        void show(){
            cout<<"show derived class"<<endl;
        }
};
int main(){
    Base b;
    Derived d;
    Base *bptr;
    bptr = &b;
    bptr->display();
    bptr->show();
    bptr = &d;
    bptr->display();
    bptr->show();
}