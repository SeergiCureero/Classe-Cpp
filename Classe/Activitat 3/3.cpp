/*
El programa  ens demana un número n (número de alumnes).
Cada alumne ens introdueix els seus diners (euros) de butxaca.
Al final del programa mostra per pantalla la suma total de euros. 
Al final del programa has de demanar “Vols sortir del programa?”. 
Només si introduïm ‘s’ o ‘S’ sortim del programa.
La suma total no es va acumulant.
*/
#include <iostream>
using namespace std;
int main()
{   
    //bool sortir = false;
    char resposta;
    int alumnes;
    float euros, suma = 0;
    while (true)
    {
        printf("Numero d'alumnes: ");
        scanf("%i",&alumnes);
        for (int i = 0; i < alumnes; i++)
        {
            printf("Alumne %i introdueix els teus diners: ", i+1);
            scanf("%f", &euros);
            suma+=euros;
        }
        printf("Suma total: %f\n", suma);
        printf("Desitja sortir del programa? ");
        scanf("%s", &resposta);
        if (resposta == 's' || resposta == 'S')
        {
            return 0;
        }
    }    
}
