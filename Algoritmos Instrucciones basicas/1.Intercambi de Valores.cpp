// PROBLEMA: INTERCAMBIAR LOS VALORES DE DOS VARIABLES REALES

#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

float r1, r2, aux;
int main(){

setlocale(LC_ALL,"Spanish");

cout<<"Introduzca un número: "; cin>>r1;

    cout<<"Introduzca otro número: "; cin>>r2;

        aux=r1;
        r1=r2;
        r2=aux;

cout<<"\n\nEl orden de los números intercambiando sus posiciones son: "<<r1<< " y " <<r2;




getch();
return 0;
}
