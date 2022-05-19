/*AUTOR: OSCAR VIVALDI PARTIDO RAMIREZ, REALIZADO EL DIA 10/02/2022

programa para una tiernda de Arduinos, dicha tienda existe una promocion

si se lleva minimo 5 arduinos , se le hace el 20% de descuento

cada arduino tiene un costo de $350.00

El programa pedira la cantidad de ARDUINOS Y CALCULARA el total a pagar

*/

#include <stdio.h>

int main(){

//declarar variables

int arduinos;

float total, descuento=0;

printf("ingresa la cantidad de arduinos: ");

scanf("%d", &arduinos);

//proceso

total=arduinos*350.00;

if(arduinos>=5){

descuento=total*0.2;

}

printf("subtotal:\t $%10.2f\n",total);

printf("descuento:\t-$%10.2f\n",descuento);

printf("\t\t---------\n");

printf("total:\t\t $%10.2f", total-descuento);

return 0;

}
