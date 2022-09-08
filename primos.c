#include <stdio.h>
#include "primo.h"

int main() {
    int num, n1=20,n2=30;

    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    printf("\nEl numero %d %p", num, &num);

    if (primo(num))
        printf("es primo.\n");
    else
        printf(" no es primo.\n");

    int r = suma(n1,n2);
    
	printf(" Resultado %i.\n", r);
	
	return 0;
    
    
}
