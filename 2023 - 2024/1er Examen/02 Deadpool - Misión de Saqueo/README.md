## Descripción del Problema

Este problema requiere maximizar la cantidad de recursos que Deadpool puede saquear de una base enemiga, considerando que solo puede llevar una cantidad limitada de lotes consecutivos de recursos en una sola escapada.

### Entrada:
- Un entero `N`, que representa la cantidad de lotes de recursos que Deadpool encuentra.
- Un entero `K`, que representa el número máximo de lotes de recursos que puede llevar en una sola escapada.
- Una lista de `N` enteros, donde cada entero representa el valor de cada lote de recursos.

### Salida:
- Un solo entero que representa la cantidad máxima de recursos que Deadpool puede llevar en una sola escapada.

## Lógica de la Solución

Para resolver este problema, utilizaremos un enfoque de **barrido** o **ventana deslizante**, que es ideal para encontrar sumas máximas en subarrays consecutivos de tamaño fijo.

1. **Inicialización de Variables**:
   - Se declara un arreglo `arr` que almacena los valores de los lotes de recursos.
   - Variables como `suma` y `sumamax` se inicializan para manejar las sumas parciales y la suma máxima encontrada, respectivamente.

2. **Lectura de Datos**:
   - Se leen los valores de `N` y `K`.
   - Luego, se llenan los primeros `K` lotes de la lista `arr` y se calcula la suma inicial de estos lotes.

3. **Cálculo de la Suma Inicial**:
   - Se calcula la suma de los primeros `K` lotes de recursos y se asigna esta suma a `sumamax`, que inicialmente es la suma máxima posible.

4. **Barrido con Ventana Deslizante**:
   - Se inicia un ciclo que comienza desde el segundo lote y continúa hasta que el tamaño de la ventana de lotes alcance `N - K`.
   - En cada iteración, se ajusta la suma restando el valor del lote que sale de la ventana y sumando el valor del lote que entra en la ventana.
   - Se actualiza `sumamax` si la suma actual de la ventana es mayor que la suma máxima anterior.

5. **Salida del Resultado**:
   - Después de recorrer toda la lista, el valor de `sumamax` representa la cantidad máxima de recursos que Deadpool puede llevar en una sola escapada.
   - Este valor se imprime como el resultado final.
