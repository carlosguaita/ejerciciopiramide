#include <stdio.h>
#include <math.h>
#include "funciones.h"


float ingresarValor(char componente, int i){
    float a;
    printf("Ingrese la componente %c del punto %d ",componente,i);
    scanf("%f",&a);
    return a;
}

float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2){
    float d;
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return d;
}

float calcularArea(float a, float b, float c){
    float s=(a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

float calcularAreaSuperficial(float puntos[4][3]){
    float a = calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2]);
    float b = calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    float c = calcularDistancias(puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    float area1 = calcularArea(a,b,c);


    float d = calcularDistancias(puntos[0][0],puntos[0][1],puntos[0][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float e = calcularDistancias(puntos[1][0],puntos[1][1],puntos[1][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float area2 = calcularArea(a,d,e);

    float f = calcularDistancias(puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float area3 = calcularArea(b,d,f);

    float area4 = calcularArea(c,e,f);

    float areaSuperficial = area1+area2+area3+area4;

    return areaSuperficial;


}