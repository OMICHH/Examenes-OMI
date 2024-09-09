# Descripción del Problema

Estás desarrollando un sistema automatizado para una tienda de pinturas. El objetivo es ayudar a los clientes a encontrar el color perfecto mediante propuestas de combinaciones en formato RGB (rojo, verde y azul). Utilizando un sistema interactivo, debes ajustar los valores propuestos en función de la retroalimentación del cliente hasta encontrar el color adecuado.

## Implementación

### Función `void atenderCliente()`

Esta función es llamada cada vez que un cliente llega a la tienda y es responsable de hacer propuestas de color y ajustarlas en función de la retroalimentación del cliente. Debe iterar hasta que el cliente esté satisfecho con el color propuesto. La lógica utilizada para ajustar los valores de color se basa en la búsqueda binaria para cada componente del color (rojo, verde y azul).

### Función del Cliente (Juez Interactivo) `int checarColor(int R, int G, int B)`

Esta función es utilizada para verificar la propuesta de color del sistema. Toma como entrada los valores actuales de los componentes rojo, verde y azul, y devuelve un valor que indica cómo ajustar cada componente:
- Incrementar el componente rojo: `1`.
- Disminuir el componente rojo: `-1`.
- Incrementar el componente verde: `2`.
- Disminuir el componente verde: `-2`.
- Incrementar el componente azul: `3`.
- Disminuir el componente azul: `-3`.
- Los valores propuestos son correctos: `0`.

## Lógica de la Solución

1. **Inicialización de Variables**:
   - Inicializa los valores de los componentes del color (rojo, verde y azul) a `0`.
   - Establece los límites de búsqueda binaria para cada componente del color:
     - `leftRed` y `rightRed` para el componente rojo.
     - `leftGreen` y `rightGreen` para el componente verde.
     - `leftBlue` y `rightBlue` para el componente azul.

2. **Búsqueda Binaria**:
   - Para cada componente del color (rojo, verde y azul), realiza una búsqueda binaria:
     - Calcula el punto medio entre los límites actuales.
     - Envía la propuesta de color al cliente utilizando `checarColor()`.
     - Ajusta los límites (`left` y `right`) basándote en la respuesta de `checarColor()`:
       - Incrementa o disminuye el componente según la retroalimentación.
       - Actualiza los límites para la próxima propuesta.

3. **Iteración**:
   - Repite el proceso de ajuste hasta que la respuesta de `checarColor()` sea `0`, indicando que el color propuesto es el correcto.

4. **Finalización**:
   - La función `atenderCliente()` termina cuando el cliente está satisfecho con el color propuesto, es decir, cuando `checarColor()` devuelve `0`.
