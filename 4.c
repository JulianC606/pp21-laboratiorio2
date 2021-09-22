#include<stdio.h>

int main(){
	//bloques de declarativas de variables
    //variables de entrada
    float ladoA;
    float ladoB;
    float ladoC;
    //bloque de instrucciones
    printf("Introduzca el lado A del triangulo: ");
    scanf("%f",&ladoA);
    printf("Introduzca el lado B del triangulo: ");
    scanf("%f",&ladoB);
    printf("Introduzca el lado C del triangulo: ");
    scanf("%f",&ladoC);
    if(ladoA==ladoB && ladoB==ladoC){
    printf("El triangulo es Equilatero");
	}
    else if (ladoA==ladoB||ladoA==ladoC||ladoB==ladoC){
    printf("El triangulo es Isosceles");
	}
    else{
    printf("El triangulo es Escaleno");
	}
 }
