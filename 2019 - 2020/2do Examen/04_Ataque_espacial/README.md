# URL

https://omegaup.com/arena/problem/Ataque-espacial/#problems

# Descripción

Te encuentras en una de las lunas de Saturno a bordo del Karelante (una nave marciana de alta tecnología), el Capitán James Holden es quién dirige la nave y esta decidido a destruir a la proto-molécula. Frente a la nave se pueden observar un grupo de asteroides de **$MxN$** (como si fueran casillas). Una fuente confiable del cinturón les mando coordenadas de ciertos asteroides portadores de la proto-molécula. En la nave existen **$K$** proyectiles nucleares que serán lanzados con la finalidad de acabar con este extraño ser que amenaza con destruir a la raza humana en todo el sistema solar. Una vez interpretada la información proporcionada por los cinturoneros el Capitán Holden te dará las coordenadas a donde enviarás los proyectiles.

# Problema

Una vez que la información sea desencriptada se te pasarán las coordenadas donde se encuentran los asteroides infectados con proto-moléculas y cuantas proto-moléculas se encuentran en esa posición. El Capitán Holden te dará **$K$** coordenadas **$X,Y$** a donde se dispararán los proyectiles. Recuerda que estos proyectiles tienen **$+1$** unidad de expansión en todas sus direcciones incluyendo sus diagonales. Tu tarea después de terminado el ataque es indicar cuántas unidades de proto-moléculas fueron destruidas.

# Entrada

Se te informará el tamaño del cuadrante mediante los valores **$M$ y $N$** seguido del contenido del cuadrante. Una vez interpretada esta información se indicará la cantidad **$K$** de proyectiles a utilizar seguido de las **$K$** coordenadas **$X,Y$** a donde se disparará el proyectil.

# Salida

Un único número que representa la cantidad de unidades de proto-molécula destruida.

# Ejemplos

|input|output|
|-----|------|
|3 3  | 9    |
|1 1 1|      |
|1 1 1|      |
|1 1 1|      |
|1    |      |
|2 2  |      |

|input|output|
|-----|------|
|3 3  | 6    |
|1 1 1|      |
|1 1 1|      |
|1 1 1|      |
|1    |      |
|2 3  |      |

|input|output|
|-----|------|
|3 3  | 6    |
|1 1 1|      |
|1 1 1|      |
|1 1 1|      |
|1    |      |
|2 3  |      |

|input      |output  |
|-----------|--------|
|5 6        | 46     |
|0 1 3 1 9 1|        |
|1 0 1 0 0 0|        |
|1 1 0 8 0 2|        |
|2 0 4 5 3 9|        |
|1 7 0 0 0 1|        |
|3          |        |
|1 1        |        |
|4 2        |        |
|4 5        |        |


||end

# Límites

* **$1 ≤ M,N ≤ 1000$**
* **$1 ≤ k ≤ 80 000$**
* El cuadrante comienza en la posición (1,1) empezando de la esquina superior izquierda
* Los proyectiles que son lanzados nunca se disparan lo suficientemente cerca para que sus ondas expansivas se sobrepongan.