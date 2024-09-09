# URL

https://omegaup.com/arena/problem/Oxigeno-por-Agua/#problems

# Descripción

La vida en el espacio es complicada si piensas las cosas un poco, no tienes un punto de orientación, todo esta en oscuridad y sobre todo no hay oxígeno que es vital para los seres humanos. El Dr. Meng (Botánico) creo un espacio en la nave donde cultiva diferentes tipos de plantas, que ayudan al karelante manteniendo los niveles de oxígeno óptimos para que la tripulación sobreviva de la mejor manera. Pero hay un problema, estas plantas requieren de una **$Q$** cantidad de agua para generar una **$O$** cantidad de oxígeno. Como sabrás en el espacio, el agua es un bien demasiado preciado. El Dr. Meng te ha pedido ayuda para poder conservar las plantas que requieren menos agua y producen más oxígeno.

# Problema

El Dr. Meng tiene colocadas las plantas en un rack horizontal desde la planta **$1$** a la planta **$N$** y quiere saber cuanto oxígeno puede producir el subconjunto consecutivo de **$K$** plantas, que a su vez consumen menos agua. Si una planta genera una unidad de oxígeno pero requiere una unidad de agua no existe ganancia alguna, al contrario es un desperdicio de agua.

# Entrada

El Dr. Meng dejó un archivo donde viene cuantas **$N$** plantas existen en el rack, seguido de la cantidad de oxígeno que genera cada planta separado por espacios y en la siguiente línea la cantidad de agua necesaria para cada planta para sobrevivir, de igual manera separada por espacios. Y finalmente el número **$K$** que representa el subconjunto de plantas que desea investigar el Dr.

# Salida

Deberás indicarle al Dr. Meng cuánto es la mayor cantidad de oxígeno que se puede generar con la menor cantidad de agua en el subconjunto consecutivo de **$K$** plantas.

# Ejemplo

| input | output |
|-------|--------|
|10     | 11     |
|3 4 7 8 9 2 1 9 3 7| |
|1 2 3 6 7 9 6 5 2 1| |
|3 | |

| input | output |
|-------|--------|
|10 | 9 |
|3 3 3 4 4 4 5 5 5 6| |
|2 2 2 1 1 1 3 3 3 4| |
|3| |

| input | output |
|-------|--------|
|10     |  32    |
|9 9 9 9 9 9 9 9 9 9| |
|8 8 8 1 1 1 1 1 8 8| |
|4| |

# Límites

* **$1 ≤ N,K ≤ 1x10^6$**
* **$1 ≤ Q ≤ O ≤ 1000$**