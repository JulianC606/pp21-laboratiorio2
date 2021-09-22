/**
 * Algoritmo TranslateNumbers
 * A partir de 5 notas dadas por el usuario, obtiene el promedio.
 */
#include <stdio.h>

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  int number;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para traducir un número del 1 al 10 al inglés.\n");
  printf("Para comenzar, ¿cuál es el número que deseas traducir?\n");
  scanf("%d", &number);

  while (number <= 0 || number > 10)
  {
    printf("Lo siento, solo puedo traducir números del 1 al 10 y %d no lo es. Intenta otra vez:\n", number);
    scanf("%d", &number);
  }

  switch (number)
  {
  case 0:
    printf("Perfecto, el %d se escribe Zero en inglés.\n", number);
    break;
  case 1:
    printf("Perfecto, el %d se escribe One en inglés.\n", number);
    break;
  case 2:
    printf("Perfecto, el %d se escribe Two en inglés.\n", number);
    break;
  case 3:
    printf("Perfecto, el %d se escribe Three en inglés.\n", number);
    break;
  case 4:
    printf("Perfecto, el %d se escribe Four en inglés.\n", number);
    break;
  case 5:
    printf("Perfecto, el %d se escribe Five en inglés.\n", number);
    break;
  case 6:
    printf("Perfecto, el %d se escribe Six en inglés.\n", number);
    break;
  case 7:
    printf("Perfecto, el %d se escribe Seven en inglés.\n", number);
    break;
  case 8:
    printf("Perfecto, el %d se escribe Eight en inglés.\n", number);
    break;
  case 9:
    printf("Perfecto, el %d se escribe Nine en inglés.\n", number);
    break;
  case 10:
    printf("Perfecto, el %d se escribe Te en inglés.\n", number);
    break;
  }
  printf("¡Buen día!\n");
  /**
   * Fin
   */
  return 0;
}