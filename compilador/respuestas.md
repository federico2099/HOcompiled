Respuestas a preguntas de "compilador"

1. El primer paso (Pre-procesador) espero que agregue al "main" (calculator.c) todos los macros y archivos que 
están en los #includes. El segundo paso (Compilacion I) espero que transforme el código a lenguaje Assembler el 
cual es un  lenguaje intermedio entre el de escitura del código y el lenguaje de máquina. El tercer paso 
(Compilacion II) espero que transforme el código en lenguaje assembler a lenguaje de máquina. El cuarto y último 
paso (Linkeo) espero que, por un lado, relacione ("linkee") todos los objetos de compilación (archivos.o) para 
generar el archivo ejecutable (binario), y, por otro lado, que llene los vacíos que están hasta este momento como 
por ejemplo, de qué manera va a relacionar las librerías, si lo va a hacer de manera estática copiando los archivos
 ".a" y cargándolos al ejecutable junto con los objetos de compilación ".o" de mi programa, o si lo va a hacer de 
manera dinámica, es decir, cargando las librerías en algún espacio de memoria reservado para tenerlas disponibles 
cada vez que el programa las necesite (la gestión del espacio en RAM para cargar la librería no lo hace mi programa sino el linker).

2. El preprocesador agrega todos los includes y macros que tiene el main. En este caso el main tiene 
un solo include para incorporar la informacion del archivo calculator.h. Sin embargo este último, 
tiene otro include con el archivo "stdio.h". Entonces luego del preprocesador el main contará con toda 
la info del stdio.h y la declaración de la función add_numbers. Todo esto lo guarda en el archivo calculator.pp.c.

3. El assembler tiene 3 funciones, dos definidas dentro que son "main" y "add_numbers", y "printf" que está definida 
por fuera.

4. Los símbolos (o descriptores) creados en el objeto son iguales a "T" tanto para main como para add_numbers 
y a "U" para printf. La T significa que la entrada correspondiente es de texto, y el hecho de que sea mayúscula 
a que esa entrada es accesible desde "afuera". Por otro lado,la U significa que esa entrada no está definida.

5. En el ejecutable aparecen muchos más simbolos que provienen de las librerías crt"n" que son las librerías que 
necesita el programa para ejecutarse, además en el caso de la entrada "printf", si bien el símbolo sigue siendo U 
porque no está definido, pero la entrada printf cambió a printf@@GLIBC_2.2.5 puesto que se linkearon de manera 
dinámica las librerías. Entonces a pesar de que sigue sin estar definido, "ya sabe" quien lo va a correr.
