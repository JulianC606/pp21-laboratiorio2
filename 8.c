#include <stdio.h>
int main ()
{
	//Bloque de variables
	int NUMERO;
	printf("\nIntroduzca su numero del 1 al 12 - > ");
	scanf("%d", &NUMERO);
	//Bloque de elecciones
	if (NUMERO==1){
		printf("\nEl numero es -> I\n");
	}
	else if (NUMERO==2){
		printf("\nEl numero es -> II\n");
	}
	else if (NUMERO==3){
		printf("\nEl numero es -> III\n");
	}
	else if (NUMERO==4){
		printf("\nEl numero es -> IV\n");
	}
	else if (NUMERO==5){
		printf("\nEl numero es -> V\n");
	}
	else if (NUMERO==6){
		printf("\nEl numero es -> VI\n");
	}
	else if(NUMERO==7){
		printf("\nEl numero es -> VII\n");
	}
	else if(NUMERO==8){
		printf("\nEl numero es -> VIII\n");
	}
	else if(NUMERO==9){
		printf("\nEl numero es -> IX\n");
	}
	else if(NUMERO==10){
		printf("\nEl numero es -> X\n");
	}
	else if(NUMERO==11){
		printf("\nEl numero es -> XI\n");
	}
	else if(NUMERO==12){
		printf("\nEl numero es -> XII\n");
	}
	else {
		printf("\nError\n");
	}
	return 0;
}
