# Descripción

Deadpool y tú están en una misión muy importante, encontrar a Wolverine. Sabes que Wolverine se esconde en una ubicación secreta dentro de una lista ordenada de posibles ubicaciones. Debido a la naturaleza sigilosa de Wolverine y la cantidad limitada de tiempo que tienes, necesitas encontrar su paradero lo más rápido posible utilizando la mejor estrategia de búsqueda.

# Entrada

Un entero $N$ que representa el número de ubicaciones posibles, seguido de un entero $K$ que representa la ubicación exacta donde se esconde Wolverine, por último una lista de $N$ enteros ordenados de forma ascendente, que representan las ubicaciones posibles.

# Salida

Debes devolver un entero que represente el índice de la ubicación donde se encuentra Wolverine. Si Wolverine no se encuentra en la lista, devuelve -1.

# Ejemplo

||input
5
3
1 3 5 7 9

||output
1

||description
La ubicación de Wolverine es 3,
se encuentra en el indice 1

||input
6
7
2 4 6 8 10 12

||output
-1

||description
La ubicación de Wolverine es 7,
no se encuentra en la lista
||end

# Límites

* $1\leq N \leq 10^6$
