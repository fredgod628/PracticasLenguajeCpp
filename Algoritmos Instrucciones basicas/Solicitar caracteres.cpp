//Solicitar tres caracteres y mostrarlos en orden Ascendente

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

char letra1, letra2, letra3;
int main(){

cout<<"Ingrese primer caracter: "; cin>>letra1;
cout<<"\nIngrese segundo caracter: ";cin>>letra2;
cout<<"\nIngrese tercer caracter: ";cin>>letra3;

////***ESTA LINEAS DE CODIGO LAS CREÉ EN EL CASO DE QUERER SABER CUALES SON SUS VALORES ASCII CORRESPONDIENTES\\\\***
/*
cout<<"\n El valor ASCII de "<<letra1<<" es: "<<int(letra1);
cout<<"\n El valor ASCII de "<<letra2<<" es: "<<int(letra2);
cout<<"\n El valor ASCII de "<<letra3<<" es: "<<int(letra3);
*/

//ORDENANDO LOS VALORES DE LOS CARACTERES

char letras[]={letra1,letra2,letra3};
int i,j,aux;

printf("\n\nOrdenado de forma Ascendente queda: ");

    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(letras[j]>letras[j+1]){
                    aux=letras[j];
                    letras[j]=letras[j+1];
                    letras[j+1]=aux;
                                        }
                            }

                    }

    for(i=0;i<3;i++){
            cout<<"\t"<<letras[i]<<"\t";
    }

getch();
return 0;
}

