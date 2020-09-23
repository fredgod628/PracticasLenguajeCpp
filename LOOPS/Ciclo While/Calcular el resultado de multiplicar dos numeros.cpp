/*CALCULAR EL RESULTADO DE MULTIPLICAR DOS NUMEROS ENTEROS MEDIANTE SUMAS SUCESIVAS*/

#include<iostream>
#include<locale>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;

int n1, n2;
main(){
setlocale(LC_ALL,"Spanish");

    do{
        cout<<"Escriba factor fijo: "; cin>>n1;
        cout<<"Escriba factor variable: "; cin>>n2;


    }while(n1==0 | n2==0);

        cout<<"Las sumas sucesivas son: ";

        for(int i=1;i<=n1;i++){
            cout<<setw(4)<<i*n2;
        }

n2*=n1;
cout<<"\nEl producto final es: "<<n2<<endl;


getch();
return 0;
}
