/*
Programa 2

*/
#include <stdio.h>
//En esta funcion leo e imprimo los datos
void tiposdedatos()
{
	int numero;
	float cantidad;
	char nombre[20];
	
	printf("Escribe un nombre ");
	scanf("%s", &nombre);
	
	printf("Escribe el numero ");
	scanf("%i", &numero);
	
	printf("Escribe una cantidad ");
	scanf("%i", &cantidad);
	
	printf("Hola %s ", nombre);
}

int main()
{
	tiposdedatos();
	return 0;
}
