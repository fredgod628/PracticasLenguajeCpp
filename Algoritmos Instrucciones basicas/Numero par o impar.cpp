// PROBLEMA: Indicar si un n�mero entero dado por el usuario es par o impar, utilizando el operador condicional (? :)

#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

float n1;

int main(){
setlocale(LC_ALL,"Spanish");

cout<<"Escriba un n�mero: "; cin>>n1;

   cout<<"\n"<<(int(n1) % 2==0? "N�mero PAR":"N�mero IMPAR");



getch();
return 0;
}
