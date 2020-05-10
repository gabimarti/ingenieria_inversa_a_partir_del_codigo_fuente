#include <stdio.h>
/*
 * prog_c_001
 * impresion texto "hola mundo" y suma de dos enteros.
 */
int main(int argc, char **argv)
{
    char str[] = "hola mundo\n";
    int a = 65;
    int b = 66;
    int c = a + b;
	printf("%s", str);
    printf("La suma de a(%d) + b(%d) es = c(%d)\n", a, b, c);
	return 0;
}
