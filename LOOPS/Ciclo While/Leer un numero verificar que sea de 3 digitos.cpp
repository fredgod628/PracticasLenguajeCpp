/*LEER UN NUMERO, VERIFICAR QUE SEA DE TRES DIGITOS Y SUMAR SUS DIGITOS HACERLO CON: DO WHILE*/

#include<iostream>
#include<locale>
#include<conio.h>
#include<iomanip>
using namespace std;

int n, aux=0;
int main() {
setlocale(LC_ALL,"Spanish");

cout<<"\n En este programa debe digitar un número que contenga SÓLO 3 cifras\n\n";

do {


    cout<<"Introduzca un número positvo: "; cin>>n;

    }while(n<100 || n>999);


                while(n>0){
                aux= aux + n%10;
                n= n/10;
                }
cout<<"\n La suma de las últimas tres cifras suministradas es: "<<aux;

getch();
return 0;

}
