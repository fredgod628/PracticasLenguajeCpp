// PROBLEMA: Indicar si un número entero dado por el usuario es par o impar, utilizando el operador condicional (? :)

#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

float n1;

int main(){
setlocale(LC_ALL,"Spanish");

cout<<"Escriba un número: "; cin>>n1;

   cout<<"\n"<<(int(n1) % 2==0? "Número PAR":"Número IMPAR");



getch();
return 0;
}
