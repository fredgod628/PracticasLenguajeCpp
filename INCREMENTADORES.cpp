#include<iostream>

using namespace std;

int main(){
 int i = 10;

 int NuevoNum= 10 * i++; /*Lo que indica es esta operacion: NuevoNum = 10 * i;
                                                            i = i + 1      */

 cout<<"i es "<<i

 <<", Nuevo Numero es: "<<NuevoNum;


/////////////////// **************** //////////////////////////////////////////////

int s = 10;

 int NuevoNum1= 10 * ++s; /*Lo que indica es esta operacion: s = s + 1;
                                                            NuevoNum = 10 * s      */

 cout<<"\n\ni es "<<s

 <<", Nuevo Numero es: "<<NuevoNum1;


return 0;
}
