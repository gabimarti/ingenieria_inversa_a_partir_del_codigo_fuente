#include <stdio.h>
/*
 * prog_c_003
 * Función con bucle for que suma los n primeros numeros.
 */

int suma_n_enteros( int n ) {
    int suma = 0;
    for (int i=1; i<=n; i++) {
        suma += i;
    }
    return suma;
}

int main(int argc, char **argv)
{
    int  n = 50;
    int suma = suma_n_enteros(n);
	printf("La suma de los %d primeros enteros es %d\n",n,suma);
	return 0;
}
