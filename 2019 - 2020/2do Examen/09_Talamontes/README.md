# URL

https://omegaup.com/arena/problem/talamontes

# Descripción

El Gobierno de la República desea ser más ecológico y preservar los árboles, talando menos y sembrando más; como uno de sus compromisos de campaña. Se ha adquirido una máquina que corta los árboles estando en fila. La máquina trabaja especificándole una altura **h** en metros en que la sierra se eleva, y luego corta todos los árboles que son más altos que **h** (claro que los árboles que no son más altos de **h** metros, no se tocan). Luego las partes de los árboles que han sido cortadas, se llevan al camión de carga.

Por ejemplo, si hay una fila de árboles de altura 20, 15, 10 y 17 metros, y la sierra de la máquina se eleva 15 metros, la alturas de los árboles después de cortarlos sería 15, 15, 10 y 15 metros, respectivamente; así se tomará un tronco cortado de 5 metros del primer árbol y otro de 2 metros del cuarto árbol (7 metros de madera en total)

# Problema

La Secretaría del Medio Ambiente no desea cortar más árboles ni madera de la necesaria. Es por eso que desean que la sierra esté lo más alto posible. Ayuda a la Secretaría a encontrar la altura entera máxima en que la sierra permita cortar a lo más mm metros de madera.

# Entrada

Dos números positivos **n** (número de árboles, **1 ≤ n ≤ 1 000 000**) y **m** (la cantidad de madera necesaria, **1 ≤m ≤ 2 000 000 000**). La segunda línea de la entrada contendrá **n** enteros positivos separados por un espacio menor a 1 000 000 000, la altura de cada árbol en metros. La suma de todas las alturas no excederá a **m**, así que siempre será posible obtener la cantidad de madera necesaria.

# Salida

Solamente indicar la altura requerida

# Ejemplos

|input|output|
|-----|------|
|4 7|15    |
|20 15 10 17|

|input|output|
|-----|------|
|5 20|36    |
|4 42 40 26 46|
