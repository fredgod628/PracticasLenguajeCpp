#include <iostream>

#include<conio.h>
using namespace std;

int main(){

char a='Z'; int n1; float n2, n3;

cout<<"Por favor, suministre valor entero: "<< endl; cin>>n1;

cout<<"Suministre un valor real: "<<endl; cin>>n2;

cout<<"El valor del caracter (a) es:"<<endl;

n3=n1+n2+a;

cout<<"convertido a int n3=n1+n2+a: "<<int(n3)<<endl;

getch();
return 0;

}
