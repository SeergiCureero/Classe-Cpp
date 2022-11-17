#include <iostream>
using namespace std;
int main(){
    int n, m, mult;
    char resposta;
    bool continua = true;

    while(continua){
        printf("n: ");
        scanf("%i", &n);
        printf("m: ");
        scanf("%i", &m);
        mult = 1;
        for (int i = n; i <= m; i++)
        {
            mult*=i;
        }
        printf("El resultat de la multiplicació dels numeros entre %i i %i (ambdos inclosos) és %i\n", n, m, mult);
        printf("Vols seguir calculant? ");
        scanf("%s", &resposta);
        if (resposta !='s' && resposta != 'S')
        {
            //si resposta és diferent a s i S, no continua
            continua = false;
        }
    } 
    return 0;   
} 
