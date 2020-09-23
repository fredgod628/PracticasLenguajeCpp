
#include<iostream>
#include<conio.h>
#include<locale>
#include<stdio.h> //Esta biblioteca permite hacer lo que se indica con la funcion fprint
using namespace std;
//int n;
int main(){
setlocale(LC_ALL,"Spanish");

float num = 15;
char cadena[]="peso";
char cadena2[]="Kg";
printf("El %s es de %.2f %s",cadena,num,cadena2);


getch();
return 0;
}
