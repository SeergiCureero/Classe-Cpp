//demanar radi de circumferencia de l'esfera
//donar superficie de l'esfera
//donar longitut (perimetre?) de l'esfera
//donar volum de l'esfera

#include <cmath>
#include <iostream>


float Area(float r){
    return 4*M_PI*r*r;
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

    printf("Perimetre: %f cm\n", Perimetre(radi));
    printf("Area: %f cm²\n", Area(radi));
    printf("Volum: %f cm³\252\n", Volum(radi));

    printf("---VALORS ARRODONITS---\n");

    printf("Perimetre: ~%f cm\n", round(Perimetre(radi)));
    printf("Area: ~%f cm²\n", round(Area(radi)));
    printf("Volum: ~%f cm³\252\n", round(Volum(radi)));
    return 0;
}
