# Descripción
Se está desarrollando un robot de rescate para incendios. Tu misión es programarlo para que pueda escapar de un edificio evitando las llamas. Tu robot, solo se puede mover en direcciones adyacentes en las que no haya fuego o una pared. El edificio se representa como una cuadrícula de $N x M$ donde cada celda puede ser una pared (**#**), un espacio libre (**.**), el inicio del robot (**S**), la salida del edificio (**E**) o una llama (**F**). Las llamas se expanden en cada turno a las celdas adyacentes que no son paredes. El robot puede moverse en cada turno a las celdas adyacentes que no son paredes ni están en llamas.

# Problema
Tu tarea es determinar el número mínimo de pasos que el robot debe tomar para llegar a la salida. Si es imposible, se debe imprimir $-1$.

# Entrada
Dos enteros $N, M$ que representan las dimensiones del edificio, seguido de una matriz de enteros de $N \times M$ los cuales representan el edificio.

# Salida
Un entero que representa la cantidad mínima de pasos que necesita dar el robot para salir del edificio, en caso de que no pueda salir, se debe de imprimir el entero $-1$


# Ejemplo

||input
5 5
S . . . E
# # # . #
. . . . #
. # # . #
F . . . .

||output
4
||description
El robot sí puede salir del edificio, necesita dar 4 pasos para salir.

||input
4 4
S . . E
. F . .
. . . .
. . . .

||output
-1
||description
El fuego termina bloqueando el paso del robot, por eso no puede salir.
||end

#Clarificaciones
* El fuego siempre se expande primero que el turno del robot

# Límites

* $1 \leq N, M \leq 1000$
