# Descripción
Deadpool y tú están atrapados en la ATV. Él quiere salvar su universo de la destrucción que planea la ATV, pero para lograrlo, necesita derrotar a todos los enemigos en el lugar. Deadpool tiene un número limitado de balas y quiere saber si le alcanzan para derrotar a todos los enemigos. Como Deadpool no es muy bueno con los números, decide pedirte ayuda para calcular si la cantidad de balas que tiene es suficiente para vencer a todos los enemigos.
# Entrada

Un entero $N$ que representa el número de balas con las que cuenta Deadpool, un entero $M$  que representa el número de enemigos que tiene que enfrentar Deadpool y seguido de una lista de $M$ enteros que indica la cantidad de balas necesarias para derrotar a cada enemigo.


# Salida

Una cadena con la palabra “si” en caso de que las balas sean suficientes, junto con el número de balas sobrantes. En caso de que las balas no sean suficientes, se debe mostrar una cadena con la palabra “no”, seguida del número de balas faltantes.

# Ejemplo

||input
5
3
1 1 1
||output
si 2

||description
Sí puede derrotar a los enemigos
y le sobran 2 balas

||input
3
4
2 1 2 2
||output
no 4
||description
No puede derrotar a los enemigos
y le faltan 4 balas
||end

# Límites

* $1  \leq N$
* $0 \leq M$
