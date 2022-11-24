#include <iostream>
using namespace std;
int main()
{   
    char resposta;
    int alumnes;
    float euros, suma = 0;
    while (true)
    {
        printf("Numero d'alumnes: ");
        scanf("%i",&alumnes);
        for (int i = 0; i < alumnes; i++)
        {
            printf("Alumne %i introdueix els teus diners (€): ", i+1); //i++ no funciona i fa que el for augmenti de 2 en 2
            scanf("%f", &euros);
            suma+=euros;
        }
        printf("Suma total: %f€\n", suma);
        printf("Desitja sortir del programa? ");
        scanf("%s", &resposta);
        if (resposta == 's' || resposta == 'S')
        {
            return 0;
        }
    }    
}
