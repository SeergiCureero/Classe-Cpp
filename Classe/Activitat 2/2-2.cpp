#include <cmath>
#include <stdio.h>
 
double Area(double r){
    return M_PI*r*r;
}
double Perimetre(double r){
    return 2*M_PI*r;
}
double Volum(double r){
    return (4*M_PI*r*r*r)/3;
}
int main()
{  
    double radi;
    printf("Radi (cm): ");
    scanf("%lf", &radi);
 
    printf("Perimetre: %lf cm\n", Perimetre(radi));
    printf("Area: %lf cm²\n", Area(radi));
    printf("Volum: %lf cm³\n", Volum(radi));
    return 0;
}