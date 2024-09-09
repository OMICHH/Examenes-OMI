# Descripción del Problema

Deadpool posee un vasto arsenal de armas que necesita mantener en orden. Cada tipo de arma en su inventario se identifica con una letra única. Deadpool desea un sistema que le permita realizar tres operaciones principales de manera eficiente: añadir una cantidad específica de un arma a su inventario, eliminar una cierta cantidad de un arma, y consultar cuántas unidades de una arma específica tiene en su inventario.

Este problema tiene dos enfoques diferentes para su solución, ambos optimizados para manejar el inventario de Deadpool de manera rápida y eficiente.

## Solución 1: Usando un Arreglo y código ASCII

Esta solución aprovecha el hecho de que las armas se identifican por una única letra, lo cual nos permite utilizar un arreglo para almacenar y gestionar las cantidades de cada arma. Como las letras se pueden mapear a índices de un arreglo, esto permite que las operaciones de acceso y actualización sean extremadamente rápidas.

### Lógica de la Solución

1. **Inicialización**:
   - Se declara un arreglo de tamaño 128, ya que el rango de códigos ASCII para letras (tanto mayúsculas como minúsculas) cabe cómodamente en este espacio. Cada posición del arreglo representará una letra específica, y su valor almacenará la cantidad de ese tipo de arma.


2. **Procesamiento de Operaciones**:

   - Se comienza leyendo el número total de operaciones `N` que se deben procesar.
   - Para cada operación, se lee el tipo de operación (`add`, `remove`, `query`) y el identificador de arma (una letra).
     - **Operación `add`**: Se incrementa la cantidad almacenada en el arreglo para la letra correspondiente.
     - **Operación `remove`**: Se decrementa la cantidad almacenada, asegurando que no baje de cero.
     - **Operación `query`**: Se imprime la cantidad actual de esa arma consultada.

## Solución 2: Usando un Map

En esta segunda solución, se utiliza una estructura de datos más flexible: un `map` que permite gestionar dinámicamente las cantidades de armas en el inventario. Este enfoque es especialmente útil cuando se tiene un gran número de datos o cuando los identificadores pueden variar más allá de un conjunto fijo.

### Lógica de la Solución

1. **Inicialización**:
   - Se declara un `map` donde la clave es una letra (el tipo de arma) y el valor es un entero (la cantidad de esa arma en el inventario).

2. **Procesamiento de Operaciones**:
   - Se lee el número total de operaciones `N` que se van a procesar.
   - Para cada operación, se analiza el tipo (`add`, `remove`, `query`) y el identificador de arma.
     - **Operación `add`**: Se añade la cantidad especificada al valor asociado a la letra en el `map`.
     - **Operación `remove`**: Se resta la cantidad especificada, asegurando que no se reduzca a menos de cero.
     - **Operación `query`**: Se consulta y se imprime la cantidad almacenada en el `map` para la letra correspondiente.
