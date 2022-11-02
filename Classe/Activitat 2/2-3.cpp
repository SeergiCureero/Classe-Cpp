#include <iostream>
#include <cmath> 

float Arrodonament(float n){
    float value = (int)(n * 100 + .5);
    return (float)value/100;
}

int main()
{
    float alumne1, alumne2, alumne3, mitja;
    
    printf("Alçada alumne 1: ");
    scanf("%f", &alumne1);
    printf("Alçada alumne 2: ");
    scanf("%f", &alumne2);
    printf("Alçada alumne 3: ");
    scanf("%f", &alumne3);

    mitja = ((alumne1 + alumne2 + alumne3) / 3);
    
    printf("Mitja arrodonida a 2 decimals de les alçades dels alumnes: %f\n",Arrodonament(mitja));
    return 0;
}
