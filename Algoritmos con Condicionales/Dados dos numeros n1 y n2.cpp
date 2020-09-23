/* DADOS DOS NUMEROS N1 Y N2, INDICAR SI N1 ES MULTIPLO DE N2 */

#include <iostream>
#include<conio.h>
#include<locale>

using namespace std;

int n1, n2;

int main(){
    setlocale(LC_ALL,"Spanish");

cout<<"Introduzca primer valor entero: "; cin>>n1;
cout<<"Introduzca segundo valor entero: "; cin>>n2;

    if (n1%n2==0){
        cout<<n1<<" Múltiplo de "<< n2<<endl;
        }
    else{
        cout<<n1<<" NO es Múltiplo de "<< n2<<endl;
    }


getch();
return 0;
}
