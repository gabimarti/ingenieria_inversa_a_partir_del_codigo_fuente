#include <stdio.h>
#include <stdlib.h>
/*
 * prog_c_004
 * Calculo de factorial de n.
 */
long int factorial( long int n ) {
    unsigned long int f = 1;
    while (n>1) {
        f *= n;
        n--;
    }
    return f;
}

int main(int argc, char **argv)
{
    unsigned long int n, f; 
    
    // Pedimos numero a calcular
    printf("Introduce un numero para calcular el factorial: ");
    scanf(" %ld", &n);
    
    // Validamos por para poner un limite
    if (n<0) {
        printf("No acepto numeros negativos\n");
    } else if (n>23) {
        printf("No acepto numeros superiores a 23\n");
    } else {    
        f = factorial(n);
        printf("El Factorial de %lu es %lu\n",n,f);
    }
	return 0;
}
