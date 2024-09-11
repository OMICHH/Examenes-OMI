#include "tienda.h"
#include <iostream>
  
int red = 0, green = 0, blue = 0;
int leftRed = 0, leftGreen = 0, leftBlue = 0, rightRed = 10000000, rightBlue = 10000000, rightGreen = 10000000;
int respuesta = -1;

void atenderCliente() {
  
  while (respuesta != 0){
    
    respuesta = checarColor(red, green, blue);
    if (respuesta == 1) {
      leftRed = red + 1;
      red = (leftRed + rightRed)/2;
    } else if (respuesta == -1) {
      rightRed = red - 1;
      red = (leftRed + rightRed)/2;

    } else if (respuesta == 2) {
      leftGreen = green + 1;
      green = (leftGreen + rightGreen)/2;
    } else if (respuesta == -2) {
      rightGreen = green - 1;
      green = (leftGreen + rightGreen)/2;

    } else if (respuesta == 3) {
      leftBlue = blue + 1;
      blue = (leftBlue + rightBlue)/2;
    } else if (respuesta == -3) {
      rightBlue = blue - 1;
      blue = (leftBlue + rightBlue)/2;
    }
  }
  
}