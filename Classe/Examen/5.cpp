#include <iostream>
#include <math.h>

int main(){
    double a,b,c,disc,x1,x2;
    printf("Introduiu coeficient a: ");
    scanf("%lf",&a);
    printf("Introduiu coeficient b: ");
    scanf("%lf",&b);
    printf("Introduiu coeficient c: ");
    scanf("%lf",&c);
    if (a!=0)
    {
        disc = b*b-4*a*c;
        if (disc>0)
        {
            x1 = (-b+sqrt(disc))/(2*a);
            x2 = (-b-sqrt(disc))/(2*a);
            printf("x1: %lf\nx2: %lf", x1, x2);
        }
        else
        {
            printf("Solucio no real");
        }       
    }
    else
    {
        printf("Divisió per 0");
    }
    return 0;
}
