#include<iostream>
#include<iomanip>

using namespace std;

int main() {

cout<<"             TABLA DE MULTIPLICACION\n";
cout<<"-----------------------------------------\n";

// MOSTRANDO LA FILA NUMERICA TITULO
cout<<"   | ";
for(int j=1; j<=9;j++)
    cout<<setw(3)<<j;

cout<< "\n";

// MOSTRANDO EL CUERPO DE LA TABLA

for(int i=1;i<=9;i++)
 {
    cout<<i<<"  | ";
    for(int j=1; j<=9;j++)
    {
// MOSTRANDO EL PRODUCTO Y ALINEANDO LA PROPIEDAD
    cout<<setw(3)<<i*j;
    }
cout<<"\n";
 }
return 0;
}
