## Descripción del Problema

Este problema está diseñado para ser resuelto utilizando ciclos y condiciones. Vamos a analizar la entrada y salida:

### Entrada:
- Un entero `N`, que representa las balas que tenemos.
- Un entero `M`, que representa los enemigos a derrotar.
- Una lista de `M` enteros, que representan las balas necesarias para derrotar a cada enemigo.

### Salida:
- La palabra `"si"` en caso de que podamos eliminar a todos los enemigos, o la palabra `"no"` en caso de que esto no sea posible.
- Un entero que represente las balas sobrantes en caso de que sí se pueda eliminar a los enemigos, o las balas faltantes para derrotar a todos los enemigos en caso contrario.

## Lógica de la Solución

Para resolver el problema, seguimos los siguientes pasos:

1. **Inicialización de Variables**:
   - Una variable `balas` que almacenará la cantidad de balas disponibles (`N`).
   - Una variable `n` que representará la cantidad de enemigos (`M`).

2. **Lectura de Datos**:
   - Leer el valor de `balas` y `n`.
   - Crear un acumulador para sumar las balas necesarias para derrotar a todos los enemigos.

3. **Iteración**:
   - Utilizar un ciclo `for` para iterar exactamente `n` veces, es decir, una vez por cada enemigo.
   - Dentro del ciclo, leer el número de balas necesarias para derrotar a cada enemigo y sumar esta cantidad al acumulador.

4. **Verificación**:
   - Después de completar el ciclo `for`, comprobar si `balas` es mayor o igual al acumulador de balas necesarias.
   - Si `balas` es suficiente, imprimir `"si"` junto con la diferencia entre `balas` y el acumulador.
   - En caso contrario, imprimir `"no"` y la cantidad de balas que faltan (acumulador menos `balas`).

