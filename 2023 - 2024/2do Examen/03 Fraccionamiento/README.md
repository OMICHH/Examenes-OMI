# Descripción del Problema

En Chihuahua se están preparando nuevas áreas para fraccionamientos, y tú, como inversionista en bienes raíces, tienes la oportunidad de comprar terrenos. El área disponible está representada por una matriz de tamaño $N \times M$, donde cada celda de la matriz indica el costo de ese terreno. Los terrenos están delimitados por calles (celdas con valor `0`), y los terrenos adyacentes (conectados por celdas arriba, abajo, izquierda o derecha) deben comprarse como un conjunto indivisible.

Tu objetivo es adquirir la mayor cantidad de terrenos posible, sin exceder el presupuesto disponible.

## Entrada

- Un entero $N$ que representa el número de filas de la matriz.
- Un entero $M$ que representa el número de columnas de la matriz.
- Un entero $K$ que representa el presupuesto total disponible para la compra de terrenos.
- Una matriz de $N \times M$ donde cada valor representa el costo del terreno en esa celda. Las celdas con valor `0` representan calles y no pueden ser compradas.

## Salida

- Un entero que representa la cantidad máxima de terrenos que puedes comprar sin exceder el presupuesto.

## Lógica de la Solución

### Búsqueda en Profundidad (DFS)

El problema se puede resolver utilizando un algoritmo de **búsqueda en profundidad (DFS)**. A continuación se explica el enfoque paso a paso:

1. **Recorrido de la Matriz**:
   - Se recorre la matriz de tamaño $N \times M$. Para cada celda que no haya sido visitada y no sea una calle (`0`), se lanza una búsqueda en profundidad (DFS) para encontrar el terreno completo al que pertenece esa celda.

2. **Búsqueda en Profundidad (DFS)**:
   - La DFS explora todas las celdas conectadas de forma adyacente (arriba, abajo, izquierda, derecha) y suma el valor del terreno correspondiente. Cada celda visitada se marca para evitar contarla más de una vez.
   
3. **Almacenamiento de Terrenos**:
   - Cada vez que se identifica un terreno, se guarda su costo total. Así, obtenemos una lista con los costos de todos los terrenos identificados.

4. **Selección de Terrenos**:
   - Ordenamos los terrenos según su costo total de menor a mayor. Luego, se seleccionan los terrenos en ese orden hasta que el presupuesto se agote o no sea posible comprar más.

5. **Resultado**:
   - Se cuenta la cantidad de terrenos comprados sin exceder el presupuesto y se imprime este valor como el resultado final.

### ¿Qué es DFS?

La **búsqueda en profundidad (DFS)** es un algoritmo de recorrido que explora todos los nodos o celdas de una estructura, como una matriz o un grafo, partiendo de un nodo inicial. En el caso de este problema, DFS se utiliza para explorar todas las celdas adyacentes que forman un terreno, sumando sus valores y marcándolas como visitadas para evitar contarlas nuevamente. La DFS es útil cuando queremos explorar completamente una región antes de pasar a otra, lo que es ideal para este tipo de problemas en los que las celdas adyacentes deben considerarse como un único terreno.