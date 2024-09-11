# Descripción

Deadpool está en medio de una misión de saqueo y se ha infiltrado en una base enemiga con el objetivo de recolectar la mayor cantidad de recursos posible antes de que se acabe el tiempo. Sin embargo, el espacio en su equipo es limitado, y solo puede llevar una cantidad específica de lotes de recursos a la vez. Dado que está a contrarreloj, necesita optimizar su saqueo, asegurándose de que todos los recursos que lleva sean de lotes consecutivos.

Para complicar aún más las cosas, solo puede llevar consigo recursos que estén agrupados en una secuencia continua. Es decir, no puede seleccionar lotes de recursos dispersos, sino que debe llevar todos los lotes que se encuentren seguidos.

Ayuda a Deadpool a determinar la cantidad máxima de recursos que puede saquear, recuerda que los lotes de recursos que Deadpool saqueará deben de ser seguidos.



# Entrada

Un entero $N$ que representa la cantidad de lotes de recursos que Deadpool encuentra, en la siguiente linea,un entero $K$ que representa el número máximo de lotes de recursos que puede llevar en una sola escapada. Y finalmente una lista de $N$ enteros, representando el valor de cada lote


# Salida

Un solo entero que representa la máxima cantidad de recursos que Deadpool puede llevar

# Ejemplo

||input
5
4
3 9 6 9 6
||output
30
||description
Solo puede llevar 4 lotes
La suma mayor es de: 9 + 6 + 9 + 6 = 30
||input
7
2
7 4 1 6 5 1 10

||output
11

||description
Solo puede llevar 2 lotes
La suma mayor es de: 1 + 10

||end

# Límites

* $1 \leq N, K \leq 1 000 000$

