#include <stdio.h>

int main(){

    //Bloque Declarativa de Variables
    float a, b, c, max, min;

    //Bloque de Instrucciones
     printf("Introduzca tres numeros:\n");
    scanf("%f%f%f", &a, &b, &c);

    max = a;
    if (b>max){
        max=b;
    }
    if (c>max){
        max=c;
    }
    printf("El numero maximo es: %.1f\n", max);

    min = a;
    if (b<min){
        min=b;
    }
    if (c<min){
        min=c;
    }
    printf("El numero minimo es: %.1f", min);

    return 0;
}