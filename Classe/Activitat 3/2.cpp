#include <iostream>

int MultiplicaNumsEntre(int n, int m){
    //si n és major o igual a m ens sortim de la funció doncs hem assumit que n<m
    if (n>=m)   
    {
        return 0;
    }
    // resultat (res) ha de ser = 1 perque si no estaria multiplicant per 0 o per un valor desconegut
    int res = 1, i = n;
    char* resposta = "s";
    while (resposta == "s" || resposta == "S")     
    {
        if (i<=m)
        {
            res*=i;
            i++;
        }
        else
        {
            return res;
        }
        printf("Vols seguir calculant? ");
        scanf("%s", &resposta);
    }
    return res;
    
}

int main()
{
    int n, m;
    printf("n: ");
    scanf("%i",&n);
    printf("m: ");
    scanf("%i",&m);

    printf("%i\n", MultiplicaNumsEntre(n,m));
    return 0;
}