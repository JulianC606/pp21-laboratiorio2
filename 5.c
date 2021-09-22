#include <stdio.h>

int main(){

	//Bloque Declarativas de Constantes
	#define DESCUENTO  0.20
	#define ITBM 0.07
	//Bloque Declarativas de Variables
	float precio1, precio2, descuentoAplicado, precio3, total, totalDescontado, impuesto, precioFinal;
    
    //Bloque de Instrucciones
	printf("Introduzca el precio del producto:");
	scanf("%f", &precio1);
	scanf("%f", &precio2);
    scanf("%f", &precio3);
	total = precio1 + precio2 + precio3;
    printf("Precio inicial:%.2f\n", total);

	if (total>=100){
	descuentoAplicado = (total*DESCUENTO);
    printf("Descuento:%.2f\n", descuentoAplicado);
    totalDescontado = total - descuentoAplicado;
    impuesto = totalDescontado*ITBM;
    precioFinal = totalDescontado + impuesto;
    printf("Impuesto:%.2f\n", impuesto);
	printf("Precio final:%.2f\n", precioFinal);
	}
    else{
        impuesto = total*ITBM;
    precioFinal = total + impuesto;
	printf("Impuesto:%.2f\n", impuesto);
	printf("Precio final:%.2f\n", precioFinal);

    }
	
	return 0;
}