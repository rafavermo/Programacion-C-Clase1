/* Realizar el ejercicio que hemos realizado con while pero usando
 * el bucle for
 */


/* Bibliotecas a incluir */
#include <stdio.h>

void main()
{
	/* Declaración de variables */
	int len; 
	char cadena[10] = "cadena\0";

	/* Código usando condicional for */
	for (len = 0; cadena[len] != '\0'; len++)
	{
		printf("El carácter es: %c", cadena[len]);
			
	} 
	printf("El número de caracteres es: %d", len);
}

