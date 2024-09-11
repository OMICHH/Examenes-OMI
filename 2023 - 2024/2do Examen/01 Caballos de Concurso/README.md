# Descripción del Problema

Tu amigo Woody, un apasionado de los caballos, ha solicitado tu ayuda para optimizar la compra de caballos con un presupuesto específico. Cada caballo tiene un precio y una calidad promedio, que se evalúa en cinco características: velocidad, resistencia, temperamento, agilidad y apariencia. El objetivo es maximizar la calidad acumulada de los caballos que puedes comprar sin exceder el presupuesto disponible. 

La calidad promedio de cada caballo se calcula como el promedio de estas cinco características. Dado el presupuesto, debes seleccionar los caballos que te proporcionen la mayor calidad acumulada posible. Si un solo caballo consume todo el presupuesto y su calidad es la más alta, este caballo debe ser la opción preferida.

## Entrada

- Un entero `N` que representa la cantidad de caballos disponibles para compra.
- Un entero `K` que representa el presupuesto disponible.
- `N` líneas, cada una con un entero que indica el precio del caballo seguido de cinco números enteros que reflejan las características del caballo: velocidad, resistencia, temperamento, agilidad y apariencia.

## Salida

- La máxima calidad acumulada que puedes obtener con el presupuesto dado, con un decimal (por ejemplo, 5.0). Si no es posible comprar ningún caballo, imprime `-1`.

## Lógica de la Solución

La solución a este problema se basa en un enfoque **greedy** (codicioso). A continuación se describen los pasos para resolverlo:

1. **Inicialización de Variables**:
   - Se leen el número de caballos (`N`) y el presupuesto (`K`).
   - Se crea una estructura para almacenar la información de cada caballo, que incluye su precio y su calidad promedio.

2. **Cálculo de la Calidad Promedio**:
   - Para cada caballo, se calcula la calidad promedio sumando las cinco características y dividiendo por 5.

3. **Ordenamiento por Calidad**:
   - Se ordenan los caballos en orden descendente según su calidad promedio. Esto permite que se prioricen los caballos con mayor calidad en la selección.

4. **Selección de Caballos**:
   - Se recorre la lista de caballos ordenada, tratando de comprar los caballos más caros primero para maximizar la calidad acumulada dentro del presupuesto disponible.
   - Si un caballo tiene un precio igual al presupuesto restante y no se ha realizado ninguna compra, se considera como una opción preferida si su calidad es la más alta posible.

5. **Evaluación Final**:
   - Si se logra gastar el presupuesto comprando varios caballos, se calcula la calidad acumulada.
   - Se compara la calidad máxima de los caballos que pueden comprarse por completo con el presupuesto restante, y se elige la opción con mayor calidad.

6. **Salida**:
   - Se imprime la calidad máxima acumulada obtenida dentro del presupuesto, o `-1` si no se puede comprar ningún caballo.

### Enfoque Greedy

El enfoque codicioso se basa en seleccionar los caballos con la mayor calidad primero para maximizar la calidad total acumulada dentro del presupuesto. Esta estrategia es efectiva porque asegura que, al priorizar la calidad, se obtienen los mejores resultados posibles con el presupuesto disponible, sin necesidad de revisar todas las combinaciones posibles de caballos.
