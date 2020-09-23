/* Calcular el precio de un producto luego de aplicarle el 5%
 y un IVA del 12% */

 #include<iostream>
 #include<conio.h>
 #include<locale>

 using namespace std;

float p, p_desc, p_iva, desc=0.05, IVA=0.12;

 int main(){
 setlocale(LC_ALL,"Spanish");

    cout<<"Introduzca el precio del producto: "; cin>>p;

        p_desc=p-(p*desc);

    cout<<"\n\nEl precio con el descuento del 5% es de: "<<p_desc<<"UM";

        p_iva= (p_desc*IVA) + p_desc;

    cout<<"\n\nEl precio final del producto con IVA luego del primer descuento:"<<p_iva<<"UM\n\n\n";






 return 0;
 getch();
 }
