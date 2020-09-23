/* CALCULAR LAS POSIBLES RAICES REALES PARA UNA ECUACIÓN DE 2DO GRADO ax^2 +bx + c = 0 PARA COEFICIENTES a, b y c */

#include<iostream>
#include<conio.h>
#include<locale>
#include<math.h>

using namespace std;

float a,b,c,det;
char caracter;

int main(){
setlocale(LC_ALL,"Spanish");
do {
cout<<"Introduzca el coeficiente a: "; cin>>a;
    cout<<"Introduzca el coeficiente b: "; cin>>b;
        cout<<"Introduzca el coeficiente c: "; cin>>c;

            det=sqrt(pow(b,2)-4*a*c);

            if (det>0){
                double x1 = (-b+det)/(2*a);
                double x2 = (-b-det)/(2*a);
                cout<<"El determinante es POSITIVO, las raices son: "<<x1<<" y "<<x2<<"\n";
            }
            else {
                cout<<"El determinante es NEGATIVO, la solución no pertenece a los números reales\n\n"<<endl;
                 }
                 printf("¿Desea volver a calcular otros valores s/n?\n");


                 cout<<"Marque en teclado s para SI y n par a NO\n"; cin>>caracter;
                 caracter=toupper(caracter);
    }
    while(caracter!='N');
    cout<<"Haz salido del sistema...";

getch ();
return 0;

}
