# URL

https://omegaup.com/arena/problem/Material-Genetico/#problems

# Descripción

A bordo del Karelante existen varias muestras de proto-molécula, el Dr. Meng se encuentra trabajando en ella para poder descifrarla. La proto-molécula se conforma de cadenas de ARN muy similar a un virus y para poder desarrollarse necesita una cantidad mínima de **$K$** material genético que se encuentre unido uno del otro (consecutivos) dentro de la cadena. Las cadenas de ARN varían su tamaño dependiendo de la muestra y pueden ser de tamaño **$1$** hasta **$N$**.

# Problema

El Dr. Meng necesita ayuda para saber cual es la cantidad mínima de **$K$** material genético necesario para que la proto-molécula pueda desarrollarse. Dependerá mucho de que muestra te proporcione el Dr. Meng. Recuerda verificar las **$Q$** muestras.

# Entrada

El Dr. Meng te ha dejado una lista de las muestras a verificar para ello te envió un correo donde especifica el número **$Q$** de muestras pendientes. Las muestras se componen de la siguiente manera, un número **$N$** que representa el largo de la cadena de ARN seguido de **$K$** que es el tamaño de la muestra a verificar. En la siguiente línea los **$N$** números que representan la cantidad de material genético separados por espacios.

# Salida

Para realizar tu reporte debes indicar el número **$Q$** de la muestra correspondiente seguido de la cantidad mínima de material genético necesario para cada una.

# Ejemplo

|input      |output  |
|-----------|--------|
|3          | 1 3    |
|6 3        | 2 30   |
|7 8 9 1 1 1| 3 15   |
|4 4 | |
|6 7 8 9 | |
|10 5 | |
|1 2 3 4 5 6 7 8 9 10 | |

|input         |output  |
|--------------|--------|
|2             | 1 2    |
|5 2           | 2 38   |
|1 1 1 1 1     |        |
|7 6           |        |
|7 6 6 7 7 6 6 |        |

|input         | output |
|--------------|--------|
|5             | 1 5    |
|2 1           | 2 12   |
|5 6           | 3 14   |
|3 2           | 4 16   |
|8 7 5         | 5 15   |
|4 3           |        |
|8 7 2 5       |        |
|5 4           |        |
|8 2 5 4 5     |        |
|6 5           |        |
|1 2 3 4 5 6   |        |

# Límites

* **$1 ≤ Q ≤ 100$**
* **$1 ≤ N,K ≤ 10000$**
* La cantidad de material genético puede tener un valor de hasta **$1x10^9$**