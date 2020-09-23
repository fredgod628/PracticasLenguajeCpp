/* CALCULAR LA SUMA DE LOS DIGITOS PARES Y DE LOS DIGITOS IMPARES DE UN NUMERO N ENTERO */

#include<iostream>
#include<conio.h>
#include<locale>
#include<iomanip>

using namespace std;
int D,d=0;
int main(){
setlocale(LC_ALL,"Spanish");

cout<<"Introduzca un número positivo: "; cin>>D;


    while(D>0){
       d= d + D%10;
       D=D/10;
    }

    cout<<"La suma de los dígitos pares e impares es: "<<d;

getch();
return 0;
}
