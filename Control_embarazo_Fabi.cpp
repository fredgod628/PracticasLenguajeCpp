#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

int sem, a, d, c;
float sem1, b;

int main(){
setlocale(LC_ALL,"Spanish");

// Subrutina para calcular introducir el # de semanas

cout<<"Introduce el número entero de semanas de embarazo: ";
    cin>>sem;

     a = sem/4;

// Subrutina para calcular el flotante de sem
     sem1=sem;
        b=sem1/4;

// Subrutina regla de tres para calcular los dias

        c=(b-a)*100; // separar el decimal del entero en b

        d=(30*c)/100;  // dias de un mes calculado a 30

// Condicionales para establecer dias segun las semanas

    if (sem>=1);
        cout<<"Tienes: "<<a<<" Mes/es"<<" con "<<d<<" días de embarazo";








getch();
    return 0;
}
