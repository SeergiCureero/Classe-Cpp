#include <cmath>
#include <stdio.h>
 
float Area(float r){
    return M_PI*r*r;
}

float Perimetre(float r){
    return 2*M_PI*r;
}

float Volum(float r){
    return (4*M_PI*r*r*r)/3;
}

int main()
{  
    float radi;
    printf("Radi (cm): ");
    scanf("%f", &radi);
 
    printf("Perimetre: %.12f cm\n", Perimetre(radi));
    printf("Area: %.12f cm²\n", Area(radi));
    printf("Volum: %.12f cm³\n", Volum(radi));
    return 0;
}