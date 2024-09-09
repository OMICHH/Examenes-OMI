# Descripción del Problema

Deadpool y tú están en una misión crucial para localizar a Wolverine, quien se encuentra en una de las posibles ubicaciones de una lista ordenada. La lista contiene todas las ubicaciones posibles en orden ascendente, y dado el tiempo limitado para la misión, es esencial encontrar la ubicación de Wolverine de manera eficiente.

El objetivo es buscar un valor específico en una lista ordenada y devolver el índice en el que se encuentra ese valor. Si el valor no se encuentra en la lista, se debe devolver -1.

## Entrada

- Un entero `N`, que representa el número total de ubicaciones posibles.
- Un entero `K`, que es la ubicación exacta donde se encuentra Wolverine.
- Una lista de `N` enteros, ordenados de forma ascendente, que representan las ubicaciones posibles.

## Salida

- Un entero que representa el índice de la ubicación donde se encuentra Wolverine. Si Wolverine no está en la lista, devolver -1.

## Lógica de la Solución

La solución se basa en el uso de **búsqueda binaria**, una técnica eficiente para encontrar elementos en una lista ordenada. La búsqueda binaria divide repetidamente el espacio de búsqueda a la mitad, lo que reduce significativamente el número de comparaciones necesarias en comparación con una búsqueda lineal.

### Procedimiento de la Búsqueda Binaria

1. **Inicialización de Variables**:
   - `start` se establece en el índice inicial de la lista (0).
   - `final` se establece en el índice final de la lista (n - 1).

2. **Búsqueda Binaria**:
   - Mientras `start` sea menor o igual a `final`, se calcula el punto medio `mid` de la lista.
   - Se compara el valor en el índice `mid` con el valor `K` que estamos buscando:
     - Si el valor en `mid` es igual a `K`, se imprime el índice `mid` y se termina la búsqueda.
     - Si el valor en `mid` es mayor que `K`, se ajusta el índice `final` para buscar en la mitad inferior de la lista.
     - Si el valor en `mid` es menor que `K`, se ajusta el índice `start` para buscar en la mitad superior de la lista.
   
3. **Finalización**:
   - Si `start` supera a `final`, significa que el valor no se encontró en la lista. En este caso, se imprime -1.
   