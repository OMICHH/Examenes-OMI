Estás trabajando en la implementación de un sistema automatizado para una tienda de pinturas. El objetivo es ayudar a los clientes a encontrar el color perfecto mediante propuestas de combinaciones en formato RGB (tres enteros que representan los componentes rojo, verde y azul). El cliente, a través de un juez interactivo, proporcionará retroalimentación para que el sistema ajuste los valores de color hasta encontrar la combinación adecuada.

# Problema

Este es un problema interactivo en el que deberás implementar la función `void atenderCliente()`. Tu sistema propondrá colores en formato RGB utilizando la función `int checarColor(int R, int G, int B)`.

# Implementación

A continuación, se detallan las funciones que debes implementar o utilizar:

## Tu función `void atenderCliente()`

Se llama cada vez que un cliente llega a la tienda y es responsable de proponer colores al cliente y ajustar las propuestas basándose en la retroalimentación recibida. Debe iterar hasta que el cliente esté satisfecho con el color propuesto.

##La función del cliente (juez interactivo) `void checarColor(int R, int G, int B)`

Esta función es utilizada por el cliente (juez interactivo) para verificar la propuesta de color del robot. Toma como entrada los valores actuales de los componentes rojo, verde y azul, y compara cada uno con los valores deseados por el cliente. Devuelve un valor que indica cómo ajustar cada componente:

- Incrementar el componente rojo: `1`.
- Disminuir el componente rojo: `-1`.
- Incrementar el componente verde: `2`.
- Disminuir el componente verde: `-2`.
- Incrementar el componente azul: `3`.
- Disminuir el componente azul: `-3`.
- Los valores propuestos son correctos: `0`.

# Ejemplo

||input
Función llamada
||output
Valor devuelto
||description
Explicación

||input
atenderCliente()
||output
-
||description
El evaluador mandó a llamar a tu función `atenderCliente()`

||input
checarColor(100, 100, 100)
||output
+1
||description
Llamamos a tu función `checarColor()` con los valores 100, 100, 100
El cliente dice que quiere que tenga más rojo

||input
checarColor(150, 100, 100)
||output
-2
||description
Llamamos a tu función `checarColor()` con los valores 150, 100, 100
El cliente dice que quiere que tenga menos verde

||input
checarColor(150, 50, 100)
||output
+3
||description
Llamamos a tu función `checarColor()` con los valores 150, 50, 100
El cliente dice que quiere que tenga más azul

||input
checarColor(150, 50, 150)
||output
0
||description
El cliente está satisfecho con el color

||end

# Límites

* Para un grupo de el 18.18%  de casos, los limites del valor de los colores es de 0 a 250 y podrás llamar la función `checarColor()` como máximo 750 veces.
* Para un grupo de el 27.27%  de casos, los limites del valor de los colores es de 0 a 500 y podrás llamar la función `checarColor()` como máximo 150 veces.
* Para un grupo de el 54.54%  de casos, los limites del valor de los colores es de 0 a 10000000 y podrás llamar la función `checarColor()` como máximo 75
veces.

{{libinteractive:download}}
