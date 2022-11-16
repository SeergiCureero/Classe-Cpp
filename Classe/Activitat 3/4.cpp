#include <iostream>

int Funcio(int n, int m){
    //si n és major o igual a m ens sortim de la funció doncs hem assumit que n<m
    if (n>=m)   
    {
        return 0;
    }
    // resultat (res) ha de ser = 1 perque si no estaria multiplicant per 0 o per un valor desconegut
    int res = 1;
    for (int i = n; i < m; i++)
    {
        //imprimim l'operació per pantalla
        printf("(%i + %i)", i, i+1);
        if (i < m)
        {
            printf(" * ");
        }

        res *= (i+(i+1));
    }
    //imprimim " = " al final de l'operació per completar-la
    printf(" = ");
    //retornem el resultat
    return res; 
}

int main()
{
    int n, m;
    printf("n: ");
    scanf("%i",&n);
    printf("m: ");
    scanf("%i",&m);

    printf("%i\n", Funcio(n,m));
    return 0;
}