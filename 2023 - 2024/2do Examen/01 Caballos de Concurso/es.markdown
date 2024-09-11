# Descripción
Tu amigo Woody, un apasionado de los caballos, te ha pedido que desarrolles un sistema para determinar cuál es la mejor compra de caballos, obteniendo la máxima calidad con un presupuesto específico. Cada caballo tiene un precio y una calidad promedio, evaluada en cinco características distintas: velocidad, resistencia, temperamento, agilidad y apariencia. La calidad promedio del caballo se calcula tomando el promedio de estas cinco características.

Tu objetivo es maximizar la calidad acumulada de los caballos que puedes comprar sin exceder el presupuesto disponible. Para lograr esto, debes seleccionar los caballos con la mayor calidad promedio dentro del presupuesto asignado. Si un solo caballo consume todo el presupuesto y no has realizado ninguna compra aún, ese caballo debe ser la opción preferida, siempre y cuando su calidad sea la más alta posible.

# Entrada

Un entero $N$ que representa la cantidad de caballos disponibles para compra, un entero $K$ que representa el presupuesto y por último $N$ lineas, representando los caballos. Cada línea incluye un entero que representa el precio del caballo, seguido por cinco números enteros que reflejan las características del caballo: velocidad, resistencia, temperamento, agilidad y apariencia.

# Salida

Imprime la máxima calidad acumulada que puedes obtener con el presupuesto dado con un decimal (no importa si es número entero, ejemplo 5.0), en caso de que no se pueda comprar ni uno, imprime $-1$.

# Ejemplo

||input
3
10
8 7 7 8 7 8
10 10 10 9 9 10
9 9 9 8 8 9

||output
9.6
||description
La mejor opción es comprar el caballo más caro con valor de 10, ya que su calidad es de 9.6.


||input
3
400
400 4 4 4 4 4
300 3 3 3 3 3
100 2 2 2 2 2
||output
5.0
||description
La mejor opción es comprar los caballos de 300 y 100.

||input
9
117
41 14 7 15 15 16
35 11 7 11 8 2
17 4 3 1 5 0
11 7 0 2 2 3
40 12 13 7 12 12
25 6 10 11 1 11
50 20 15 18 15 13
13 0 4 3 3 9
42 13 16 13 10 10
||output
37.4
||description
Los caballos a comprar son los que valen 50, 41 y 25

||input
9
73
487 16 16 11 11 8
500 11 20 18 11 10
477 9 12 14 7 4
465 7 0 9 7 7
491 15 13 9 17 13
495 10 18 14 12 13
475 11 12 10 4 6
472 7 9 4 3 5
473 8 7 5 9 7
||output
-1
||description
A Woody no le alcanza para ningún caballo.
||end

# Límites

* $1 \leq N \leq100000$
