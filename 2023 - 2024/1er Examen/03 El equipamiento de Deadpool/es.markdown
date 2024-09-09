# Descripción

Deadpool posee un vasto arsenal de armas que necesita mantener en orden. Dado que su arsenal es tan grande y dinámico, Deadpool requiere un sistema que le permita gestionar eficientemente las cantidades de sus armas, asegurando accesos y actualizaciones rápidos.

Cada arma en su inventario se identifica con una letra, lo que significa que cada tipo de arma se denota por una única letra. Deadpool desea un programa que le permita realizar tres operaciones principales: añadir un arma con su cantidad correspondiente, eliminar una cierta cantidad de un tipo de arma, y consultar cuántas unidades de una arma específica tiene en su inventario.

Como Deadpool maneja un inventario con muchos tipos de armas, es crucial que las consultas y actualizaciones sean lo más rápidas posible, sin importar la cantidad de armas que haya en su inventario.
# Entrada

Un entero $N$ que representa el número de operaciones.
Cada una de las siguientes $N$ líneas contiene una operación en uno de los siguientes formatos: "add arma cantidad", para añadir la cantidad especificada de un arma al inventario (si el arma ya existe, se suma la cantidad a la existente); "remove arma cantidad", para eliminar la cantidad especificada de un arma del inventario (si la cantidad a eliminar es mayor que la disponible, la cantidad de esa arma se establece en 0); y "query arma", para devolver la cantidad de esa arma en el inventario.
# Salida

Para cada operación de tipo "query", imprime el número de unidades de la arma correspondiente.

# Ejemplo

||input
6
add A 15
add B 30
remove A 5
query A
remove B 40
query B

||output
10
0
||description
Se llama dos veces
a la operación query

||input
4
add C 25
remove C 10
add D 5
query C

||output
15
||description
Se llama una vez
a la operación query
||end

# Límites

* $1 \leq N \leq 10^4$
