#include <stdio.h>
/*
 * prog_c_002
 */

// Devuelve la resta de dos enteros
int resta(int a, int b) {
    int r;
    r = a - b;
    return r;
} 
 
// Devuelve la suma dos enteros 
int suma(int a, int b) {
    int s;
    s = a + b;
    return s;
}

// main
int main(int argc, char **argv)
{
    int a = 100;
    int b = 13;
    int c;
    c = suma(a,b);
	printf("La suma de a(%d) + b(%d) es = (%d)\n",a,b,c);
    c = resta(a,b);
    printf("La resta de a(%d) - b(%d) es = (%d)\n",a,b,c);
	return 0;
}
