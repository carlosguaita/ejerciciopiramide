#include <stdio.h>
#include "funciones.h"


int main (int argc, char *argv[]) {

    float puntos[4][3];
    for (int i = 0; i < 4; i++) {
        puntos[i][0]=ingresarValor('X',i);
        puntos[i][1]=ingresarValor('Y',i);
        puntos[i][2]=ingresarValor('Z',i);
    }

    float areaSuperficial = calcularAreaSuperficial(puntos);

    printf("El area superficial de la piramide es: %f",areaSuperficial);

    return 0;
}

