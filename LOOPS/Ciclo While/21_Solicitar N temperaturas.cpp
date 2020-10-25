/*PROBLEMA: Soliciar N temperaturas en grados Farenheit, transformarlas a grados Celcius e indicar su promedio.  C= (5*(F-32))/9
USAR CICLO HACER MIENTRAS */

#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

//Variables
float F, C, promedio;
int cont=0,top=0;

int main(){

    setlocale(LC_ALL,"Spanish");

cout<<"NRO DE TEMPERATURAS A INCLUIR: "; cin>>top;

int i=1;
do {

    cout<<"\nINTRODUZCA TEMPERATURAS EN FARENHEIT:  "; cin>>F;
    C=(5*(F-32))/9;

    cout<<"\nLa temperatura en grados Celsius es: "<<C<<endl;
    cont=C+cont;

i++;
}
while(i<=top);



//promedio = static_cast<double>(cont)/top;

cout<<"\n\nEl promedio es "<<static_cast<double>(cont)/top<<" Grados Celsius"<<endl;

getch();
return 0;
}
