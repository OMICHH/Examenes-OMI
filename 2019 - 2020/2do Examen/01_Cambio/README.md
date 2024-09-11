# URL

https://omegaup.com/arena/problem/cambio_rapido/

# Descripción

La tienda de Seven-Eleven de la esquina siempre ha pagado muy poco a los cajeros. Los cajeros que contrata, por lo general estudiantes de prepa, tienen seguido errores al dar cambio a los clientes. El encargado del Seven-Eleven Oxxo se ha dado cuenta que está perdiendo dinero por estos errores; es decir, los empelados dan más cambio al cliente del que deberían.

# Problema

El encargado desea escribir un programa para que calcule el número de quartes (0.25), dimes ((0.10), nickels (0.05) y pennies (0.01) que el cliente debe recibir. El encargado siempre da cambio si la cantidad es menor a $5.00 dólares. El encargado desea dar la más pequeña cantidad de monedas. Por ejemplo, si el cambio es 1.24, el cliente recibirá 4 quartes, 2 dimes, 0 nickels y 4 pennies.

# Entrada

La única línea de entrada contiene un entero que indica que indica el cambio a dar, en centavos, **C** (**1≤C≤500**).

# Salida

Deberás escribir una cadena:

**Q QUARTER(S), D DIME(S) n NICKEL(S), P PENNY(S)**

Donde **Q** es el número de quarters, **D** el número de dimes, **n** el número de nickels y **P** el número de pennies.

# Ejemplos

| input  | output  |
|--------|---------|
|124     |4 QUARTER(S), 2 DIME(S), 0 NICKEL(S), 4 PENNY(S)|

| input  | output  |
|--------|---------|
|25      |1 QUARTER(S), 0 DIME(S), 0 NICKEL(S), 0 PENNY(S)|

| input  | output  |
|--------|---------|
|194     |7 QUARTER(S), 1 DIME(S), 1 NICKEL(S), 4 PENNY(S)|

# Límites

* **1 ≤ C ≤ 500**
