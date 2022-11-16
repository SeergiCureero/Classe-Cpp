/*
El programa  ens demana un número n i un número m. 
El programa multiplica els números del n al m i
mostra el resultat per pantalla. 
*/

//Assumim que n<m sempre
#include <iostream>

int MultiplicaNumsEntre(int n, int m){
    //si n és major o igual a m ens sortim de la funció doncs hem assumit que n<m
    if (n>=m)   
    {
        return 0;
    }

    // resultat (res) ha de ser = 1 perque si no estaria multiplicant per 0 o per un valor desconegut
    int res = 1;
    
    /*
    EXEMPLE: 
        n=2 i m=5
        i=2 → (i=n)
        →→→ENTREM←←←
        [0]
        2 <= 5 → (i <= m) // ✅
        res = 1*2 → (res *= i) // 2
        i = 2+1 → (i++) // 3
        [1]
        3 <= 5 → (i <= m) // ✅
        res = 2*3 → (res *= i) // 6
        i = 3+1 → (i++) // 4
        [2]
        4 <= 5 → (i <= m) // ✅
        res = 6*4 → (res *= i) // 24
        i = 4+1 → (i++) // 5
        [3]
        5 <= 5 → (i <= m) // ✅
        res = 24*5 → (res *= i) // 120
        i = 6+1 → (i++) // 6
        [4]
        6 <= 5 → (i <= m) // ❎
        →→→SORTIM←←←
    */
    for (int i = n; i <= m; i++)
    {
        //imprimim l'operació per pantalla
        printf("%i", i);
        if (i < m)
        {
            printf(" * ");
        }

        res *= i;
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

    printf("%i\n", MultiplicaNumsEntre(n,m));
    return 0;
}