#include<iostream>
using namespace std;
template<class abc>
void perimeter(abc a  , abc b ){
    cout<<"area = "<<2 * a + 2 * b<<endl;
}
template<class abc>
void perimeter(abc r){
    cout<<"area = "<<2* 3.14 *r<<endl;
}
template<class abc>
void perimeter(abc a, abc b, abc c){
    cout<<"area = "<<a+b+c<<endl;
}
int main(){
    cout<<"area of square: ";
    perimeter(10,10);
    cout<<"area of rectangle: ";
    perimeter(10,20);
    cout<<"area of circle: ";
    perimeter(5);
    cout<<"area of triangle: ";
    perimeter(10,20,30);
}