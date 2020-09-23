/*SOLICITAR UN CARACTER AL USUARIO Y VERIFICAR SI SE CORRESPONDE CON UNA VOCAL Y CUAL DE ELLAS */
#include<iostream>
#include<locale>
#include<conio.h>
#include<iomanip>
#include<ctype.h>

using namespace std;

char vocal;

int main(){
setlocale(LC_ALL,"Spanish");


cout<<"Escriba una letra: "; cin>>vocal;

vocal=tolower(vocal);


if(vocal=='a' | vocal=='e' | vocal=='i' | vocal=='o' | vocal=='u'){
    cout<<"La letra escrita es la vocal: "<<vocal<<endl;
    }

else {
    cout<<"La letra escrita es una consonante";
     }

getch();
return 0;
}
