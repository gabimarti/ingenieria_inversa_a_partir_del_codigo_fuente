# Ingeniería inversa a partir del Código Fuente

Esto es un recopilatorio de sencillos programas escritos principalmente en **lenguaje C** (en entorno **Windows**) que he ido haciendo para posteriormente realizar un análisis estático de ingeniería inversa (**reversing**) usando **Ghidra**, mayoritariamente, y también **Cutter / Radare2**, con el objetivo de mejorar mi comprensión y aprendizaje. 

Cedo esta información también con licencia **GPL** con el objetivo de ayudar y compartir a quien esté interesado en el reversing y quiera comentar, complementar, contribuir o corregir mis posibles errores de interpretación y/o análisis. 


## Repositorios relacionados 
Tengo otros repositorios con análisis realizados, tanto estáticos como dinámicos que he ido haciendo anteriormente o paralelamente a este o con temas relacionados.

* [crackmes-solutions](https://github.com/gabimarti/crackmes-solutions) Soluciones a algunos crackmes. 
* [ghidra_scripts](https://github.com/gabimarti/ghidra_scripts) Scripts para usar en Ghidra.

Los otros repositorios de **crackmes** están redactados en Inglés por que también me sirven para practicar en un idioma que no es el mio nativo. Este repositorio esta redactado en Castellano por diversificar, y también por que creo que no hay tanta información disponible en Castellano.


## Herramientas Usadas

Para desarrollar y analizar los programas he usado las siguientes herramientas:

* IDE [Codelite](https://codelite.org/)
* Compilador de C/C++ [MinGW](http://www.mingw.org/)
* Compilador de Free Pascal / Object Pascal [Lazarus](https://www.lazarus-ide.org/)
* Reversing [Ghidra](https://ghidra-sre.org/)
* Reversing [Cutter + Radare2](https://cutter.re/)


## Lista de Programas y su análisis

Iré ampliando esta lista de programas a medida que el tiempo me lo permita.

### Programas en C 

* [prog_c_001](analisis/prog_c_001/prog_c_001.md) Sencillo programa de consola con un "hola mundo" y suma de dos variables.
* [prog_c_002](analisis/prog_c_002/prog_c_002.md) Suma y resta dentro de funciones.
* [prog_c_003](analisis/prog_c_003/prog_c_003.md) Función de suma de enteros dentro de bucle for.
* [prog_c_004](analisis/prog_c_004/prog_c_004.md) Cálculo del Factorial de un entero.

### Programas en Free Pascal / Object Pascal

* [prog_vp_001](analisis/prog_vp_001/prog_vp_001.md) Sencillo programa de consola con un "hola mundo" y suma de dos variables. Versión en Pascal de su homólogo en C [prog_c_001](analisis/prog_c_001/prog_c_001.md).
* [prog_vp_002](analisis/prog_vp_002/prog_vp_002.md) Función de suma de enteros dentro de bucle for. Versión en Pascal de [prog_c_003](analisis/prog_c_003/prog_c_003.md).

## Descargo de responsabilidad

Toda la información vertida aquí ha sido única y exclusivamente con objeto de aprender. Intento ser escrupuloso en mis conclusiones, pero existe la posibilidad de que algunas afirmaciones mías sean erróneas puesto que no soy experto en ingeniería inversa, ni lenguaje ensamblador. Cualquier ayuda, comentario o corrección serán bienvenidos. No me hago responsable de errores de concepto que puedan llevar al lector a un uso incorrecto en programación o análisis en entornos profesionales o de producción.


## Contacto

Siéntete libre de contactar conmigo si quieres hacer cualquier comentario, sugerencia o contribución.

Twitter: [**@310hkc41b**](https://twitter.com/310hkc41b)
