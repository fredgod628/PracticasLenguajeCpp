// Solicitar tres valores enteros e indicar cual es el mayor

#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

int n1,n2,n3;

int main(){
setlocale(LC_ALL,"Spanish");

cout<<"Ingresa primer valor entero: "; cin>>n1;
cout<<"Ingresa segundo valor entero: "; cin>>n2;
cout<<"Ingresa tercer valor entero: "; cin>>n3;

    if (n1>n2 & n1>n3){
        cout<<"\n"<<n1<<" Es el mayor"<<endl;
    }
    else if (n2>n1 & n2>n3){
            cout<<"\n"<<n2<<" Es el mayor"<<endl;

    }
    else{
        cout<<"\n"<<n3<<" Es el mayor"<<endl;

    }

getch();
return 0;
}
