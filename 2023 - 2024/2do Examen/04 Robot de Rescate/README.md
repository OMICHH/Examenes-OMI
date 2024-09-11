# Descripción del Problema
Se está desarrollando un robot de rescate que debe escapar de un edificio en llamas. El edificio es una cuadrícula de dimensiones $N \times M$ donde cada celda puede ser una pared, espacio libre, el inicio del robot, la salida o fuego que se propaga. El objetivo es encontrar el número mínimo de pasos para que el robot llegue a la salida. Si no es posible escapar, se debe imprimir `-1`.

## Entrada
- Dos enteros $N$ y $M$ que representan las dimensiones de la cuadrícula.
- Una matriz de $N \times M$ que describe el edificio con las celdas:
  - `S`: inicio del robot.
  - `E`: salida.
  - `#`: paredes.
  - `.`: espacios libres.
  - `F`: fuego.

## Salida
Un entero que indica el número mínimo de pasos que el robot necesita para salir o `-1` si es imposible.

# Lógica de la Solución

## Búsqueda en Amplitud (BFS)
La solución utiliza la técnica de **búsqueda en amplitud (BFS)**, tanto para la propagación del fuego como para los movimientos del robot. La razón de usar BFS es que garantiza encontrar el camino más corto en problemas de laberintos o cuadrículas, lo cual es ideal para este tipo de problemas donde se necesita minimizar los pasos.

### Propagación del Fuego
1. **Inicialización del Fuego**: 
   - Se crea una cola para almacenar las posiciones iniciales del fuego. Usando BFS, el fuego se expande a las celdas adyacentes (arriba, abajo, izquierda y derecha) en cada turno, siempre que la celda no sea una pared.
   - Cada celda alcanzada por el fuego se marca como visitada para evitar que el fuego vuelva a expandirse a esa celda.
   - Esto simula la expansión del fuego a lo largo del tiempo.

### Movimiento del Robot
2. **Inicialización del Robot**:
   - Se crea otra cola para almacenar la posición del robot. Usando BFS, el robot se mueve a las celdas adyacentes que no sean paredes ni estén en llamas.
   - Cada celda visitada por el robot se marca para evitar que vuelva a pasar por ella. El robot intenta alcanzar la salida en el menor número de pasos.
   
3. **Simulación por Turnos**:
   - La expansión del fuego y el movimiento del robot ocurren en turnos alternados. Primero, se simula la expansión del fuego, seguido por el movimiento del robot. Esto asegura que el fuego siempre se propague antes de que el robot pueda moverse.
   - Si el robot llega a la salida antes de ser atrapado por el fuego, se imprime el número de pasos. Si no puede llegar a la salida, se imprime `-1`.

### Explicación del Código

El código se organiza en dos funciones clave:

1. **`bfsFireStep()`**: 
   - Se encarga de expandir el fuego a las celdas adyacentes. Se procesan todas las posiciones en la cola del fuego, marcando las celdas alcanzadas y añadiendo nuevas posiciones a la cola para el siguiente turno.

2. **`bfsPlayerStep()`**: 
   - Se encarga de mover al robot. En cada turno, se procesan todas las posiciones del robot en la cola y se verifican las celdas adyacentes. Si el robot llega a la salida, se devuelve el número de pasos. Si no hay más movimientos posibles, se imprime `-1`.

Finalmente, un bucle controla la alternancia entre la expansión del fuego y los movimientos del robot, hasta que el robot encuentra la salida o se determina que no puede escapar.

# ¿Qué es BFS?
La búsqueda en amplitud (BFS) es un algoritmo utilizado para recorrer o buscar en estructuras de datos como grafos o matrices. A diferencia de la búsqueda en profundidad (DFS), BFS explora todos los nodos o celdas a una misma distancia antes de pasar a la siguiente. En este problema, BFS es ideal porque permite encontrar el camino más corto para que el robot alcance la salida, mientras que también simula la expansión del fuego de manera eficiente.
