# prog_c_001

Tenemos aquí un primer programa, muy sencillo, que nos muestra el texto **"hola mundo"** en una linea y después la suma de dos variables. 

![img_001](img/img_001.png "main") 

Para ello definimos un array de caracteres con el texto **"hola mundo"**, después dos enteros que inicializamos con unos valores arbitrarios y un tercer entero con la suma de los dos anteriores.

Seguidamente mostramos por pantalla el texto y los valores.

Compilamos y vemos el resultado que nos muestra ...

![img_002](img/img_002.png "ejecución") 

En el análisis de este programa me voy a detener con mas detalle en algunos pasos previos, que en los siguientes análisis omitiré, con el único objetivo de ver donde se sitúa exactamente la función **main()** del programa.

Veamos que nos muestra **Ghidra**:

Si buscamos el **"entry"** (punto de entrada) vemos que nos lleva a **_mainCRTStartup** que establece el tipo de aplicación con **__set_app_type()** según sea de Consola (**CLI**) o ventanas de Windows (**GUI**) y a continuación llama a la función **FUN_004011a0**.

![img_003](img/img_003.png "grafico")

Dentro de esta función, no vamos a profundizar en todas las instrucciones que ejecuta, pero si podremos identificar la función **main()** que nos interesa, que es el **_main()** que recibe como parámetros los argumentos de la linea de comandos (aunque no los usemos en el programa), y al finalizar esta, se ejecutan las funciones de salida del programa, **__cexit()** y **_ExitProcess@4**.

 ![img_004](img/img_004.png "FUN_004011a0")

Detalle de la llamada a **_main()**

 ![img_005](img/img_005.png "FUN_004011a0 call _main")
 
Si hacemos **doble click** o pulsamos **enter** sobre **__main()** entraremos en la función y veremos que nos muestra Ghidra. 
 
Y podemos comprobar que el Descompilado se acerca bastante a nuestro código original. A partir de este punto tratare de vincular el fuente en C con las diferentes partes en assembler para identificar los diferentes bloques de código que genera el compilador.
 
![img_006](img/img_006.png "main")
  
Aquí vemos en el lado izquierdo el código original y en el derecho la reconstrucción hecha por Ghidra.
  
![img_007](img/img_007.png "real main vs ghidra main")

El primer paso será renombrar las diferentes variables generadas por Ghidra y veremos si nos crea alguna de más en la interpretación del código assembler.

![img_008](img/img_008.png "renombrando variables")

La primera cosa curiosa es que la cadena "hola mundo" la divide en tres movimientos con las direcciones a cada parte de la cadena: "hola", " mun", "do\n\null", que curiosamente son 4 caracteres cada grupo. 

Después se puede identificar como asigna los valores de las variables **a** y **b**, seguidamente las suma y asigna el valor a **c**, aunque en el descompilado no se refleja esta suma, sino que se pone directamente el valor final. 

Tras hacer las operaciones, vemos como prepara el paso de parametros para imprimir el texto, pasando únicamente la dirección del inicio de la cadena "hola mundo"






### fin prog_c_001

