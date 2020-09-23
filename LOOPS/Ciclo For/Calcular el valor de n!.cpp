/* CALCULAR EL VALOR DE N! PARA UN VALOR N SUMINISTRADO POR EL USUARIO*/

#include<iostream>
#include<conio.h>
#include<math.h>
#include<locale>
#include<iomanip>
using namespace std;

int n,i;
double fact=1;
int main(){
setlocale(LC_ALL,"Spanish");

printf("ESTE PROGRAMA CALCULA EL FACTORIAL DE UN NÚMERO\n\n");

    cout<<"Introduzca un entero positivo:"; cin>>n;

    for(i=n;i>=1;i--){
           cout<<setw(3)<<i;
           fact=fact*i;
           }
        cout<<" = "<<fact;
getch();
return 0;
}
