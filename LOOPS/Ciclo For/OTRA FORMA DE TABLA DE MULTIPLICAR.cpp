#include<iostream>
#include<locale>
#include<conio.h>
#include<iomanip>

using namespace std;

int num, i;
int main(){
setlocale(LC_ALL,"Spanish");

printf("ESTA TABLA DE MULTIPLICAR LLEGA HASTA EL 12\n\n");

cout<<"Introduzca el factor por el cual multiplicar: "; cin>>num;

/* EL ENDL; ES IMPORTANTE YA QUE TE MUESTRA LA INFORMACION EN COLUMNA
MIENTRAS QUE SI NO LO COLOCAS LA INFORMACION SE MUESTRA EL RENGLONES*/
for (i=1; i<=12;i++){
        cout<<setw(3)<<i<<" x "<<num<<" = "<<i*num<<endl;
        }

getch();
return 0;
}
