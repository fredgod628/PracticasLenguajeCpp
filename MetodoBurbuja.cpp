        // ALGORITMO DE ORDENACIÓN
#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;



int main(){
setlocale(LC_ALL,"Spanish");

    int valores[]={2,4,5,3,1,7,6,9,10,12,15,13,20};
    int i, j, aux;


int tamano=sizeof(valores)/sizeof(*valores); // Este fue un agregado mio para saber el nro de elementos del arreglo
cout<<"El tamaño del arreglo es:"<<tamano<<" elementos"<<endl;

    // ALGORITMO MÉTODO BURBUJA
    for(i=0;i<13;i++){
        for(j=0;j<13;j++){
                if (valores[j]>valores[j+1]){  // Valor actual > Valor siguiente
                    aux=valores[j];            // Usando criterio de la variable auxiliar
                    valores[j]=valores[j+1];
                    valores[j+1]=aux;
                }

        }
    }

            cout<<"Orden Ascendente:"<<endl;
            for(i=0;i<13;i++){           // Para imprimir un arreglo es neserio usar un bucle
                cout<<valores[i];

            }
cout<<"\n\nOrden Descendente:"<<endl;
            for(i=12;i>=0;i--){
                cout<<valores[i];
}


getch();
return 0;
}
