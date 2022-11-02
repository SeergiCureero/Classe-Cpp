#include <iostream>

//Aquesta funció no és necessaria pero fa algo similar al round de la llibreria <cmath> que hem vist abans
//no es important saber que fa aquesta funció perque no es necessaria per a fer l'excercici
float Arrodonament(float n){
    float value = (int)(n * 100 + .5);
    return (float)value/100;
}

int main()
{
    //creem les variables 
    float alumne1, alumne2, alumne3, mitja;
    
    //demanem inputs i els emmagatzemem a les variables corresponents
    printf("Alçada alumne 1: ");
    scanf("%f", &alumne1);
    printf("Alçada alumne 2: ");
    scanf("%f", &alumne2);
    printf("Alçada alumne 3: ");
    scanf("%f", &alumne3);

    //calculem la mitja aritmètica
    mitja = ((alumne1 + alumne2 + alumne3) / 3);
    
    //si no arrodonim, en comptes de fer això, podem escriure 
    //printf("Mitja alumnes: %f\n", mitja);
    //i el codi funcionaria perfectament i l'excercici estaria fet
    //Si volem arrodonir, usem això
    printf("Mitja arrodonida a 2 decimals de les alçades dels alumnes: %f\n",Arrodonament(mitja));

    return 0;
}
