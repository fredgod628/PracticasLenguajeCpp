/* Dado un valor entero y positivo S, que representa una cantidad en segundos, se quiere
hallar su equivalente en dias, horas, minutos y segundos restantes*/

#include<iostream>
#include<conio.h>
#include<math.h>
#include<locale>
#include<iomanip>
using namespace std;

unsigned int S, segundos=3600, minutos,dias, S_res;

float horas;

int main(){
setlocale(LC_ALL,"Spanish");

cout<<"Introduzca la cantidad de segundos: "; cin>>S;

dias= S/86400;
horas = S/segundos;
minutos=(S%segundos)/60;
S_res=(S%segundos)%60;


    cout<<"El valor es equivalente a: "<<dias<<"  Dias  "<<horas<<"  hora(s) "<<minutos<<" minutos "<<double(S_res)<<" Segundos Restantes";


getch();
return 0;
}
