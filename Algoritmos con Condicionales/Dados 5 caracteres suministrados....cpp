#include<iostream>
#include<locale>
#include<conio.h>

using namespace std;

float num1,num2,num3,num4,num5;


int main(){
setlocale(LC_ALL,"Spanish");

    cout<<"Introduzca primer n�mero: "; cin>>num1;
    cout<<"\nIntroduzca segundo n�mero: "; cin>>num2;
    cout<<"\nIntroduzca tercer n�mero: "; cin>>num3;
    cout<<"\nIntroduzca cuarto n�mero: "; cin>>num4;
    cout<<"\nIntroduzca quinto n�mero: "; cin>>num5;

if (num1>=num2 & num1>=num3 & num1>=num4 & num1>=num5){
    cout<<"\n"<<num1<<" es el n�mero mayor"<<endl;

}

else if (num2>=num1 & num2>=num3 & num2>=num4 & num2>=num5){
    cout<<"\n"<<num2<<" es el n�mero mayor"<<endl;

}

else if (num3>=num1 & num3>=num2 & num3>=num4 & num3>=num5){
    cout<<"\n"<<num3<<" es el n�mero mayor"<<endl;

}

else if (num4>=num1 & num4>=num2 & num4>=num3 & num4>=num5){
    cout<<"\n"<<num4<<" es el n�mero mayor"<<endl;

}

else if(num5>=num1 & num5>=num2 & num5>=num3 & num5>=num4){
    cout<<"\n"<<num5<<" es el n�mero mayor"<<endl;

}

getch();
return 0;
}
