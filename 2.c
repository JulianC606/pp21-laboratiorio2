#include <stdio.h>

int main(){
    //Block Variables 
    float nota1, nota2, nota3, nota4, nota5, promedioFinal;
    
    //Block Instructions
    printf("Introduzca las notas del estudiante:");
    scanf ("%f", &nota1);
    scanf ("%f", &nota2);
    scanf ("%f", &nota3);
    scanf ("%f", &nota4);
    scanf ("%f", &nota5);

    promedioFinal=(nota1+nota2+nota3+nota4+nota5)/5;
    if (promedioFinal>=90){
	printf("El promedio da como resultado A");
	}
	else if (promedioFinal>=80){
	printf("El promedio da como resultado B");
	}
	else if (promedioFinal>=70){
	printf("El promedio da como resultado C");
	}
	else if (promedioFinal>=60){
	printf("El promedio da como resultado C");
	}
	else if (promedioFinal<=59){
	printf("El promedio da como resultado C");
	}

    return 0;

}