/*TRADUCIR LA SIGUINETE EXPRESION MATEMATICA (n/x)*SUM:inf(i=k):sup(n)(ik-nx)^2 Y CALCULAR SU RESULTADO PARA VALORES N, K, X SUMINISTRADOS POR EL USUARIO.
DEBE SUMINISTRAR LAS VALIDACIONES NECESARIAS SOBRE LOS VALORES DE N Y X (USAR EL CICLO FOR)*/

#include<iostream>
#include<locale>
#include<conio.h>

using namespace std;

int i, n, x;
double k;
int main() {
setlocale(LC_ALL,"Spanish");

//#############VALIDACION DE N ###########################
do {
    cout<<"Introduzca valor n: "; cin>>n;
if (n<0){
        cout<<"\nEl valor (n) NO puede ser negativo\n";
        }

   }
while(n<0);

//############### VALIDACION DE X ###########################
do {
    cout<<"Introduzca valor x: "; cin>>x;
if (x<0 | x==0){
        cout<<"\n El valor (x) NO puede ser CERO ni NEGATIVO\n";
        }

   }
while(x<0 | x==0);

//############### VALIDACION DE K ###########################
/*
do {
    cout<<"Introduzca valor k: "; cin>>k;
if (k==0){
        cout<<"\n El valor (k) NO puede ser CERO\n";
        }

   }
while(k==0);

//###########################################################
*/

cout<<"Introduzca valor k: "; cin>>k;

int sum=0;

for(i=k;i<=n;i++){
    cout<<i<<endl;

    sum+=i;
}
cout<<"SUMA "<<sum<<endl;
getch();
return 0;

}

