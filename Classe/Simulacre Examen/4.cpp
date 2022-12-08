#include <iostream>
#include <math.h>

int main(){
    double a,b,c;   //coeficients
    double disc;    //discriminant de la equació
    double x1,x2;   //solucions de l'equació
    printf("Introdueix el coeficient a: ");
    scanf("%lf", &a);
    printf("Introdueix el coeficient b: ");
    scanf("%lf", &b);
    printf("Introdueix el coeficient c: ");
    scanf("%lf", &c);
    disc = b*b-4*a*c;
    x1 = (-b+sqrt(disc))/(2*a);
    x2 = (-b-sqrt(disc))/(2*a);

    //imprimint les solucions
    printf("x1: %lf\nx2: %lf", x1, x2);
}