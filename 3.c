#include<stdio.h>

int main(){
	//bloques de declarativas de variables
    //variables de entradas
    int edad1, edad2;
    //variables de salida
    int diferencia;
    //bloque de instrucciones
    printf("Introduzca la edad de uno de los hermanos:");
    scanf("%i",&edad1);
    printf("Introduzca la edad del otro hermano:");
    scanf("%i",&edad2);
    if(edad1==edad2){
    printf("Los hermanos tienen la misma edad");
	}
    	else if(edad1>edad2){
    	diferencia= edad1-edad2;
   	    printf("El hermano mayor tiene  %i", edad1);
   		printf("\nLa diferencia con el menor es de %i", diferencia,  "años");
		}
    		else if(edad2>edad1){
   			 diferencia= edad2-edad1;
   			 printf("El hermano mayor tiene %i", edad2);
   			 printf("\nLa diferencia con el menor es de %i", diferencia, "años");
	}	
}	
