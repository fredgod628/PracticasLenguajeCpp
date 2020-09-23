/* Calcular el resultado de cada una de las siguientes formulas
R1= (a+b/2)h
R2= sqrt((x-a)^2 + (y-b)^2)
R3= arcsen[ b(sqrt(a^2-x^2))/sqrt((a^2)(b^2)+x^2(a^2-b^2))]
*/

#include<iostream>
#include<conio.h>
#include<math.h>
#include<locale>

using namespace std;

float a, b, h, x, y, area;

int main() {

setlocale(LC_ALL,"Spanish");

printf("Escoja cual de las siguientes fórmulas desea calcular:\n\n");


cout<<"1: Área de un rectángulo\n";
cout<<"2: Distancia entre dos puntos\n";
cout<<"3: Arcoseno de un valor \n";
cout<<"4: Salir\n\n";

int op=0;
cout<<"Escriba un número del 1 al 4: "; cin>>op;


switch(op){
    case 1:
        cout<<"Introduzca base mayor: "; cin>>a;
        cout<<"Introduzca base menor: "; cin>>b;
        cout<<"Introduzca altura: "; cin>>h;

            area=(a+b/2)*h;
            cout<<"El área del rectángulo es: "<<area<<endl;
    break;

    case 2:
        cout<<"Introduzca el valor de x: "; cin>>x;
        cout<<"Introduzca el valor de y: "; cin>>y;
        cout<<"Introduzca el valor de a: "; cin>>a;
        cout<<"Introduzca el valor de b: "; cin>>b;

            area=sqrt(pow((x-a),2) + pow((y-b),2));
            cout<<"La distancia entre los puntos es: "<<area<<endl;
    break;

    case 3:
        cout<<"Introduzca el valor de a: "; cin>>a;
        cout<<"Introduzca el valor de b: "; cin>>b;
        cout<<"Introduzca el valor de x: "; cin>>x;

            area=asin((b*(sqrt(pow(a,2)-pow(x,2))))/(sqrt(pow(a,2)*pow(b,2)+ pow(x,2)*(pow(a,2)-pow(b,2)))));
            cout<<"El arcoseno es: "<<area<<endl;
    break;

    case 4:
        cout<<"Ha escogido salir. BYE BYE...";
        return 0;
        }


getch();
return 0;
}
