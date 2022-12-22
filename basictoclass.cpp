//BASIC TO CLASSTYPE
#include<iostream>
using namespace std;
// class abc{
//     int a;
//     public:
//         abc(){
//             a = 0;
//         }
//         void operator =(int p){
//             a = p;
//             cout<<a<<endl;
//         }
// };
// int main(){
//     abc a;
//     a = 7;
//     a = 5.5;
//     a = 'A';
// }
class abc{
    int a;
    public:
        abc(int k){
            a = k+1;
            cout<<a<<endl;
        }
};
int main(){
    abc a = 20;
    abc b = 3.5;
    abc c = 'B';
}