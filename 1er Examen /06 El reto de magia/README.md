# URL

https://omegaup.com/arena/problem/El-reto-de-Magia/#problems

# Descripción

Bienvenido al reto del gran *MAGO JOKER* el mago mas poderoso de Karelopolis, el reto consiste en adivinar en qué posición terminará una carta después de que el mago baraje las cartas *K* veces. Pero no es tan simple como eso, el mago es un experto, por lo cual tiene la capacidad de barajar las cartas una sobre otra en cada ocasión y siempre partirá el mazo de cartas exactamente por la mitad. Se te asegura que el mazo siempre tendrá un número par *N* de cartas y siempre la primer carta en caer es de la mitad del lado derecho del mazo.

# Problema

Vence al mago en su juego de cartas y conviértete en el dueño y soberano de las cartas diciendo exactamente donde terminará la carta seleccionada.

# Entrada

Leerás de teclado el valor *N* de cartas que existen, la *C* carta de la cual tienes que adivinar su posición final y el número *K* de veces que las cartas serán barajadas.

# Salida

La posición final de la carta *C*

# Ejemplo

A continuación se muestran un ejemplo.

| input | output | description |
|-------|--------|-------------|
| 6 3 2 | 5      | Se lee la entrada y las cartas quedan ordenadas de la siguiente manera: `1 2 3 4 5 6` |
| | | Se parten las cartas exactamente por la mitad `1 2 3 | 4 5 6` |
| | | Se barajan una vez y se parten por la mitad de nuevo. `4 1 5 | 2 6 3` |
| | | Se barajan de nuevo, terminan acomodados los números de la siguiente forma. Y la carta tres terminó en la posición 5. `2 4 6 1 3 5` |

# Límites

* *2 ≤ N ≤ 52*
* *0 ≤ K ≤ 1000*