/* DADOS DOS VALORES REALES A Y B, CONSTRUIR UN ALGORITMO QUE EVALUE LAS SIGUIENTES FUNCIONES MATEMATICAS
res= 8X^3 +3X, si x>1  res=-3X+1, si x<=1 */

#include<iostream>
#include<conio.h>
#include<locale>
#include<math.h>
using namespace std;

float a, b, resp,respb;

int main(){
setlocale(LC_ALL,"Spanish");

cout<<"Introduzca primer valor: "; cin>>a;
cout<<"Introduzca segundo valor: "; cin>>b;

if (a>1){
    resp=8*pow(a,3)+3*a;
    cout<<"\nEl valor evaluado para "<< a << " siendo mayor que 1 es: "<<resp;

        }

else if (a<=1) {
    resp=-3*a+1;
    cout<<"\nEl valor evaluado para "<< a << " siendo menor o igual que 1 es: "<<resp;
        }

if (b>1) {
    respb=8*pow(b,3)+3*b;
    cout<<"\nEl valor evaluado para "<< b << " siendo mayor que 1 es: "<<respb;

              }

else if (b<=1) {
    respb=-3*b+1;
    cout<<"\nEl valor evaluado para "<< b << " siendo menor o igual que 1 es: "<<respb;
               }

getch();
return 0;
}
