#include<iostream>

using namespace std;

int main(){

    for(int i=1;i<11;++i){ // Asi cuenta hasta 10

        cout<<i<<" Esta es una prueba de ciclo FOR\n\n"<<endl;
    }

    int sum=0;
    for (int k=0; k<10;++k){
    sum +=k;
    cout<<sum<<"\n\n";
    }


    for (int s=0; s<10; s++){
        for (int f=0; f<s; f++)
        cout<< s+f <<endl;
        }

    return 0;
}
