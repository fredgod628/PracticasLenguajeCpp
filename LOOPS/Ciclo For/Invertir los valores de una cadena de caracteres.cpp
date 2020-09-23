#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<locale>

using namespace std;

string palabra=" ";

int main() {
setlocale(LC_ALL,"Spanish");

cout<<"Escriba una palabra: "; cin>>palabra;

//cout<<palabra.length()<<endl; //SIRVE PARA VER CUANTO ELEMENTOS COMPONEN EL STRING
//cout<<palabra.at(2)<<endl;    // SIRVE PARA ACCEDER AL ELEMENTO QUE OCUPAR ESA POSICION
// palabra[2]                   // OTRA FORMA DE ACCEDER A UN ELEMENTO QUE CONFORMA AL STRING

    cout<<"\nLa palabra invertida es: ";

    for(int i=palabra.length();i>=0;i--){
        cout<<palabra[i];

        //printf("%c",palabra[i]); //Esta es otra forma de imprimir por pantalla el string
    }

getch();
return 0;

}
