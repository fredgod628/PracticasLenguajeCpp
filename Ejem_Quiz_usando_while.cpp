#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {

//1. GENRENADO DOS NUMEROS SIMPLES DE UN DIGITO ALEATORIOS ENTEROS

srand(time(0));  // ESTA ES LA SEMILLA PARA QUE SE INICIALIZE LA ALEATORIEDAD
int numero1=rand() % 10;
int numero2=rand() % 10;

//2. CON UN CONDICIONAL ALMACENAMOS LAS VARIABLES PARA EL QUIZ

if (numero1<numero2){

    int temp=numero1;
    numero1=numero2;
    numero2=temp;
}

//3. PREGUNTAS AL ESTUDIANTE SOBRE LA SUSTRACCION DE NUMERO1 CON MUMERO2
 cout<<"Indique el resultado: "<<numero1<<"-"<<numero2<<"?";
 int resp;
 cin>>resp;

 //4. CREANDO CICLO PARA CUANDO LA RESPUESTA NO ES CORRECTA

 while(numero1-numero2 !=resp){
    cout<<"Respuesta incorrecta. Vuelva a intentarlo. Indique el resultado: "
    <<numero1<<"-"<<numero2<<"?";
    cin>>resp;
 }

 cout<<"Respuesta Correcta";


getch();
return 0;
}
