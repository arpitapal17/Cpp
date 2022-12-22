#include <iostream>
#include <string.h>
using namespace std ;
class concatenation{
    char *str ;
    int length ;
    public: 
        concatenation(){
            length = 0;
            str = new char [length + 1];
            str = (char*)"abc";
        }
        concatenation(char *p){
            length = strlen(p);
            str = new char[length + 1];
            str = p ;
        }
        void compute(concatenation a11 , concatenation a22){
            length = a11.length + a22.length ;
            str = new char[length + 1];
            strcpy(str , a11.str);
            strcat(str , a22.str);
            cout<<"string after concatenation : "<<str;
        }
};
int main(){
    //char s[] = "def";
    concatenation a;
    concatenation b ((char*)"def");
    a.compute(a,b);
}