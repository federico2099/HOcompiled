Respuestas a preguntas de "compilador"

1. El preprocesador agrega todos los includes y macros que tiene el main. En este caso el main tiene 
un solo include para incorporar la informacion del archivo calculator.h. Sin embargo este último, 
tiene otro include con el archivo "stdio.h". Entonces luego del preprocesador el main contará con toda 
la info del stdio.h y la declaración de la función add_numbers. Todo esto lo guarda en el archivo calculator.pp.c.

2.   
