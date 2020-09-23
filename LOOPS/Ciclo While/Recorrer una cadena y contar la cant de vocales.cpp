/*RECORRER UNA CADENA Y CONTAR LA CANTIDAD DE VOCALES Y CONSONANTES QUR TIENE,
  INDICAR LUEGO LA FRECUENCIA DE LAS VOCALES Y DE LAS CONSONANTES SOBRE EL TO-
  TAL DE CARACTERES DE LA CADENA*/

  #include<iostream>
  #include<conio.h>
  #include<stdio.h>
  #include<string.h>

  using namespace std;

char p[]="";
char c;
int tam, i=0, contV=0, contC=0;


int main(){

setlocale(LC_ALL,"Spanish");

cout<<"Introduzca cualquier palabra: "; cin>>p;

printf("\nLa palabra %s, tiene %d caracteres",p,strlen(p)); //ESTO ES UNA FORMA DE RECORRER UNA CADENA USANDO CHAR*/
tam=strlen(p);


    while(i<tam){

            c=p[i];
            if((c=='a')|(c=='e')|(c=='i')|(c=='o')|(c=='u')){
            contV++;
            }
            else {
                contC++;
            }
            i++;
          }

cout<<"\n\nTu palabra tiene: "<<contV<<" Vocale(s)";
cout<<"\n\nTu palabra tiene: "<<contC<<" Consonante(s)";
cout<<"\n\nLa frecuencia de vocales es de: "<<(contV/float(tam));
cout<<"\n\nLa frecuencia de consonates es de: "<<(contC/float(tam));

  getch();
  return 0;
  }
