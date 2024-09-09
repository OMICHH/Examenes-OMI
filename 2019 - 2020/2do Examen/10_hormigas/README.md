# URL

https://omegaup.com/arena/problem/hormigas

# Descripción

Cuando se mueve las hormigas, forman filas tal que cada una de ellas está detrás de otra, excepto la primera. No se conoce mucho de que pasaría si dos filas de hormigas, moviéndose en dirección opuesta, se encontraran en un camino tan estrecho donde ambas filas no podrían pasar al mismo tiempo. Una teoría dice que, en tal situación, las hormigas saltarán unas sobre las otras.

Desde que se topan las filas, cada segundo una hormiga salta sobre otra (o deja que la salten, al ponerse de acuerdo) a la que está enfrente de ella; de tal manera que dos hormigas intercambian lugares, pero solo si la otra hormiga se mueve en dirección opuesta.

# Problema

Encuentra el orden de las hormigas después de **T** segundos.

# Entrada

La primera línea contiene dos enteros **N1** y **N2**, (**1 ≤ N1, N2≤26**), el número de hormigas de la primera y segunda fila, respectivamente.

Los siguientes dos renglones contienen el orden de las hormigas de la primera y segunda fila (de la primera a la última). Cada hormiga está determinada de forma única por una letra mayúscula del alfabeto inglés (esta letra es única entre ambas filas).

La última línea contiene el entero **T** (**0 ≤ T ≤500**).

# Salida

Imprime el orden de las hormigas después de **T** segundos en una sóla línea. Desde nuestro punto de vista tal cual que la primera fila de hormigas vengan desde nuestra izquierda y la otra venga desde nuestra derecha.

# Ejemplos

|input|output|
|-----|------|
|3 3  |CBADEF|
|ABC  |      |
|DEF  |      |
|0    |      |

|input|output|
|-----|------|
|3 3  |CDBEAF|
|ABC  |      |
|DEF  |      |
|2    |      |
	
|input|output|
|-----|-------|
|3 4  |CARLUJO|
|JLA  |       |
|CRUO |       |
|3    |       |
