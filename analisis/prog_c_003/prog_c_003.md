# prog_c_003


## El programa (Código Fuente)

En este caso vamos a hacer una función que sume los primeros **"n"** numeros pasados como parámetro y nos devuelva el resultado de esta suma.

Para ello usaremos un bucle **for** para ver como lo implementa en ensamblador.

![img_001](img/img_001.png "main") 

Aqui vemos el resultado de la ejecución.

![img_002](img/img_002.png "ejecución") 


## Análisis estático con Ghidra

Pasamos a ver el código en **Ghidra**:


### Main

Iremos directamente a la función **main()** a ver que nos encontramos.

![img_003](img/img_003.png "main")

El primer paso, como siempre, vamos a renombrar algunas variables para identificarlas mejor.

En el descompilado de Ghidra, como es habitual, simplifica el código y solo crea la variable que guarda el resultado de la suma, y la variable **n** no la crea, sinó que pone directamente el valor como parámetro de la función. 

Esta diferencia se ve reflejada en el código en ensamblador donde se ve la creación de la variable **n** y posteriormente el movimiento a la pila donde se pasa como parámetro (indicado en color naranja).

![img_004](img/img_004.png "variables")

### Suma n enteros

Pasamos a ver ahora la función de la suma, pero mostraré directamente las funciones con las variables renombradas, pues llegados a este punto creo que ya se entiende el procedimiento.

![img_005](img/img_005.png "suma n enteros")

Podemos comprobar que Ghidra no ha hecho un bucle **for**, sino lo ha convertido en un **while**, aunque ya sabemos que en ensamblador todos los bucles serán iguales por que serán todos compuestos por una comparación **CMP** seguida de un salto condicional, **JLE** en este caso. 
 

## Análisis estático con Cutter

### Main

El punto de entrada se descompila de manera similar y no nos ofrece nada nuevo.

![img_006](img/img_006.png "main")

La función **fcn.004011a0** también nos muestra claramente la llamada a la función **_main()** que es en la que nos centraremos a partir de ahora en los siguientes programas.

![img_013](img/img_013.png "fcn.004011a0")

### Main

Aqui tenemos la función **main** antes de renombrar algunas variables, donde se puede apreciar bastante la mezcla de nomenclatura assembler con el C.

![img_014](img/img_014.png "main")

### Original vs descompilado

Pongamos de lado el codigo fuente original con el descompilado.

![img_015](img/img_015.png "src vs src")

Así, en un primera vista rápida, podemos identificar las variables **a**, **b**, y **c**.

### Renombrado de variables

Vayamos a renombrar estas variables para ver que movimientos hace.

![img_016](img/img_016.png "renombrado variables")

Podemos identificar en los grupos numerados con 1 (en amarillo) como se asignan los valores inciales a las variables, y los resultados de las llamadas a las funciones.

Y en los grupos numerados con 2 (en rojo) como se asignan los valores a los diferentes parámetros que recibirán las funciones.

Aún así, el descompilado queda algo confuso, con movimientos entre variables y registros que se podrian simplificar en algun caso, o que son incongruentes en otros. De la misma manera que interpreta la llamada a la función de la **suma()** con cuatro parámetros en lugar de dos.

![img_017](img/img_017.png "descompilado")

### Funciones

En el caso de la **suma**, al ser una función muy corta quedan bastante claros los pasos y las respectivas variables, aunque en el descompilado usa los registros **edx** y **eax** para representar la operación de la suma en lugar de las variables.

![img_018](img/img_018.png "suma")

Y con la **resta** el caso es similar a la suma pero claramente comprensible la operación.

![img_019](img/img_019.png "resta")

### fin prog_c_002

[<<== **ANTERIOR** prog_c_002](../prog_c_002/prog_c_002.md)

