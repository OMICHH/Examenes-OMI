# URL

https://omegaup.com/arena/problem/mario_galaxy

# Descripción

Hay un juego llamado "Mario Galaxy" que consiste en **n** niveles. Santiago y su pequeño hermano César son adictos al juego. Cada uno de ellos quieren pasar el juego completo.

# Problema

Santiago puede pasar sólo **p** niveles del juego. Y el pequeño César puede pasar sólo **q** niveles del juego. Se te darán los índices de los niveles que Santiago puede pasar y los índices de los niveles que César puede pasar. Podrá Santiago y el pequeño César pasar el juego completo, si cooperan entre si?

# Entrada

La primer línea contiene un sólo entero **n** (**1 ≤ n ≤ 100**)

La siguiente línea contiene un entero **p** (**0 ≤p ≤ n**), le siguen **p** enteros distintos a<sub>1</sub>,a<sub>2</sub>,...,a<sub>p</sub> (**1 ≤ a<sub>i</sub> ≤ n**) Estos enteros indican los índices de los niveles que Santiago puede pasar. La siguiente línea contiene los niveles que el pequeño César puede pasar, en el mismo formato. Asuma que los niveles están numerados de **1** a **n**.

# Salida

Si ellos pueden pasar todos los niveles, muestre *Me convertire en campeon.*, si es imposible muestre *Oh, el control no funciona!*

# Ejemplos

|input|output|
|-----|------|
|4    |Me convertire en campeon.|
|3 1 2 3|
|2 2 4|
	
*Santiago puede pasar los niveles [1 2 3], y el pequeño César los niveles [2 4], así que ambos pueden pasar todos los niveles.*

|input|output|
|-----|------|
|4    |Oh, el control no funciona!|
|3 1 2 3|
|2 2 3  |
	
*Nadie puede pasar el nivel 4.*

# Límites

* **1 ≤ n ≤ 100**
