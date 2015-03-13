
/* Zona para incluir las bibliotecas o cabeceras */
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "utils.h"



/* Cabeceras de funciones */
static int test1(void)
{
    char  cadena1[] = "";
    char cadena2[] = "Prueba de cadenas";
	char cadena4[] = "Prueba de cadenas";
	char cadena3[] = "z";
	char letra1 = 'a';
	char letra2 = 'e';
	char letra3 = 'z';

	assert(0 == cuenta_numero_letras(cadena1,letra1));
	assert(1 == cuenta_numero_letras(cadena3,letra3));
	assert(3 == cuenta_numero_letras(cadena2,letra2));
	assert(1 == compara_cadena(cadena2,cadena4));
	assert(1 == tipo_de_letra(letra1));
	assert(3 == tipo_de_letra(letra2));
	assert(0 == tipo_de_letra(letra3));
}

int test2(void)
{
	char cadena[10] = "cbbbaaaa";
	char cadena2[10] = "bbbbaaaaa";
	char cadena3[10] = "c";
	char cadena4[10] = "cbb";
	char cadena5[10] = "";

	assert(-1 == primera_letra("", 'b'));
	assert(0 == primera_letra("a", 'a'));
	assert(4 == primera_letra("bbbbabb", 'a'));
	assert(0 == primera_letra("aa", 'a'));
	assert(3 == primera_letra("bbba", 'a'));
	assert(0 == primera_letra("abbbba", 'a'));
	assert(-1 == primera_letra("bbbbbbc", 'a'));

	assert(3 == cambia_letras(cadena, 'b', 'a'));
	assert(0 == strcmp(cadena,"caaaaaaa"));
	assert(5 == cambia_letras(cadena2, 'a', 'b'));
	assert(0 == strcmp(cadena2,"bbbbbbbbb"));
	assert(1 == cambia_letras(cadena3, 'c', 'a'));
	assert(0 == strcmp(cadena3,"a"));
	assert(1 == cambia_letras(cadena4, 'c', 'X'));
	assert(0 == strcmp(cadena4,"Xbb"));
	assert(0 == cambia_letras(cadena5, 'c', 'X'));
	assert(0 == strcmp(cadena5,""));
}

static test3(void)
{
	assert(22 == suma_numeros(14,8));
	assert(23 == resta_numeros(25,2));
	assert(-5 == resta_numeros(5,10));
	assert(20 == multiplica_numero(5,4));
}

/* Programa principal */
void main(void)
{
	printf("\n------TESTEO DE FUNCIONES-------");
	printf("\n Ejecutando TEST1...");
	test1();
	printf("\nEl test 1 se ejecutó correctamente");
	printf("\n Ejecutando TEST2...");
	test2();
	printf("\nEl test 2 se ejecutó correctamente");
	printf("\n Ejecutando TEST3...");
	test3();
	printf("\nEl test 3 se ejecutó correctamente");
}
