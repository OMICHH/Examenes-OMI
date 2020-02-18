# URL

https://omegaup.com/arena/problem/Estacion-espacial/#problems

# Descripción

Has llegado a la estación Ceres que es el objeto astronómico más grande del cinturón de asteroides, entre las órbitas de Marte y Júpiter. Este fue el primer lugar donde se conoció la existencia de la proto-molécula. La tripulación necesita estacionar el Karelante en un hangar y en Ceres existen **$N$** hangares disponibles. Los hangares están identificados por un número, para poder estacionarte solo podrás conocer los hangares que están disponibles. Tienes muy poco tiempo para encontrar el hangar adecuado antes de que la nave se impacte en la estación.

# Problema

Encuentra lo más rápido que puedas el hangar que le asignaron al Karelante, antes de que se impacte. La vida de la tripulación depende de ti.

# Entrada

Te enviaran un numero **$N$** de la torre de control que representa la cantidad de hangares disponibles, seguido de los números de hangares disponibles  en un orden aleatorio separados por espacios. Cuando la información sea procesada el Capitán Holden te dirá el numero del hangar en el cual quiere estacionar al karelante.

# Salida

Deberás de ubicar lo antes posible la posición en la que se encuentra el hangar y mostrar la **$Q$** cantidad de pasos que realizaste para encontrar el hangar correcto.

# Ejemplo

| input      | output   |
|------------|----------|
|6           | 2        |
|2 4 3 5 6 1 |          |
|5           |          |
|7           | 3        |
|6 5 7 3 1 4 2|         | 
|1           |          |
|10          | 3        |
|10 5 8 9 4 3 1 7 2 6|  | 
|6           |          |

# Límites

* **$1 ≤ N ≤ 100000$**