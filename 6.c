#include <stdio.h>

int main()
{
    int mes;
    //Bloque de declarativa constante

    printf("Introduzca mes del año: \n");
    scanf("%d", &mes);

    //Bloque de instrucciones

    switch (mes)
    {
    case 1:
        printf("el numero corresponde a Enero\n");
        break;
    case 2:
        printf("el numero corresponde a Febrero\n");
        break;
    case 3:
        printf("el numero corresponde a Marzo\n");
        break;
    case 4:
        printf("el numero corresponde a Abril\n");
        break;
    case 5:
        printf("el numero corresponde a Mayo\n");
        break;
    case 6:
        printf("el numero corresponde a Junio\n");
        break;
    case 7:
        printf("el numero corresponde a Julio\n");
        break;
    case 8:
        printf("el numero corresponde a Agosto\n");
        break;
    case 9:
        printf("el numero corresponde a Septiembre\n");
        break;
    case 10:
        printf("el numero corresponde a Octubre\n");
        break;
    case 11:
        printf("el numero corresponde a Noviembre\n");
        break;
    case 12:
        printf("el numero corresponde a Diciembre\n");
        break;
    }

    return 0;
}
