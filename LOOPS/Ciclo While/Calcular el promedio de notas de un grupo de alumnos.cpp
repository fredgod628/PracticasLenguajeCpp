        /* PROBLEMA:Calcular el promedio de notas de un grupo de alumnos, cuantos aprobaron y cuantos reprobaron. Considere
        que las notas son válidas si están entre 0 y 20 puntos. Se sabe que la materia tiene al menos un alumno,
        pero no se sabe cuantos alumnos hay en total, por esta razón se debe preguntar al usuario en cada repetición
        del ciclo si ya terminó de sumistrar las notas.*/

#include<iostream>
#include<conio.h>
#include<locale>
#include<stdio.h>
#include<ctype.h>
#include<iomanip>

using namespace std;

float notaAlum, sum, i, promNotas;
int  aprob=0, reprob=0;
char si;

main () {
setlocale(LC_ALL,"Spanish");
printf("        Este programa, calcula el promedio de las notas \n              de los alumnos que desee ingresar, \n     y también indica el número de aprobados y reprobados\n\n");
printf(" Recuerde que las notas deben ser valores comprendidos entre 0 y 20 puntos\n\n");
    sum=0; notaAlum=0; i=0;

    while(notaAlum>=0){


        cout<<"Indique la nota de alumno: "; cin>>notaAlum;


        if (notaAlum<0 | notaAlum>20){
        cout<<"\nLa nota debe ser un número comprendido entre 0 y 20\n";
        continue;
        }
            cout<<"¿Desea ingresar otra nota? s/SI, n/No: "; cin>>si;
            si=tolower(si);

        // CONTEO DE ALUMNOS APROBADOS
            if (notaAlum>=10){
                aprob++;

            }
        // CONTEO DE LOS ALUMNOS REPROBADOS
            if (notaAlum<10){
                reprob++;

            }

            sum=sum+notaAlum; // FRECUENCIA ACUMULADAS DEL CONTEO DE LAS NOTAS
            notaAlum++;       // INCREMENTADOR
            i++;              // CONTADOR O ITERADOR DE LA CANTIDAD DE NOTAS SUMINISTRADAS POR EL USUARIO


                if(si=='n'){  // SALIDA DEL BUCLE CUANDO EL USUARIO YA NO DESEE SUMINISTRAR MAS NOTAS
                        break;
                }
    }

promNotas=sum/i;

printf("\nEl promedio de notas de los alumnos es: %.2f",promNotas);

cout<<"\nNúmero de aprobados: "<<aprob++;

cout<<"\nNúmero de reprobados: "<<reprob++;

cout<<"\n\nPRESIONE CUALQUIER TECLA PARA SALIR...";

getch();
return 0;
}

