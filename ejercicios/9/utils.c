
/* Zona para incluir las bibliotecas o cabeceras */
#include <stdio.h>
#include <string.h>
#include "utils.h"



/* Declaracion de la funcion */

int cuenta_numero_letras(char cadena[], char letra)
{
	int contador = 0;
	int i = 0;

	while (cadena[i] != '\0') 
	{
		if (cadena[i] == letra)
			contador++;
		i++;
	}
	return contador;
}

int compara_cadena(char *cadena1, char *cadena2)
{
	int i = 1;

	if (strlen(cadena1) == strlen(cadena2))
		for (i = strlen(cadena1); (cadena1[i] == cadena2[i]) && i >= 0; i--);
	return (i+1 == 0);
}

int tipo_de_letra(char letra)
{
	switch (letra) 
	{
	case 'a':
		return 1;
		break;
	case 'c':
		return 2;
		break;
	case 'e':
		return 3;
		break;
	default:
		return 0;
		break;
	}
}

int primera_letra(char * cadena, char letra)
{
	int i = -1;

	if (strlen(cadena) != 0) {
		for (i = 0; (i < strlen(cadena)) && cadena[i] != letra; i++);
		if (i == strlen(cadena) && cadena[i] != letra)
			i = -1;
	}
	return i;
}

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int contador = 0;
	int pos = 0;

	pos = primera_letra(cadena, letraoriginal);
	while (pos != -1) 
	{
		cadena[pos] = letracambiar;
		contador++;
		pos = primera_letra(cadena, letraoriginal);
	}
	return contador;
}

int suma_numeros(int n, int m)
{
	return n+m;
}

int resta_numeros(int n, int m)
{
	return n-m;
}

int multiplica_numero(int n, int m)
{
	return n*m;
}
