#include <iostream>

int main()
{
    //usem un for loop per no haver d'iniciar el programa 4 cops
    for (int i = 0; i < 4; i++)
    {
        //com no podem escanejar un valor booleà, hem d'escanejar un valor enter i assignar-lo a una variable booleana
        //a_ es refereix a que és una variable auxiliar 
        bool bonTemps, socFelic, esPerfecte;
        int a_bonTemps, a_socFelic, a_esPerfecte;
        printf("Fa bon temps? ");
        scanf("%i",&a_bonTemps);
        bonTemps = a_bonTemps;
        printf("Ets feliç? ");
        scanf("%i",&a_socFelic);
        socFelic = a_socFelic;

        /*
        Volem fer una porta AND
        Taula de la veritat per una porta AND:
        0+0=0
        0+1=0
        1+0=0
        1+1=1

        if vol dir "si" (condicional) en angles, exemple: si fa sol, anire a la platja
        else vol dir "d'altra banda". Si no hem entrat al loop if, entrarem al loop else
        */

        //en aquest cas usem el loop if per:
        //si bonTemps i socFelic son true (1), entrem al loop if
        if (bonTemps && socFelic)
        {
            //assignem el valor a una variable en cas de voler usar-la
            esPerfecte = 1;
            printf("El dia és perfecte :D\n");
        }
        //si alguna de les dues o les dues son false (0), no entrem a if i entrem al loop else
        else
        {
            esPerfecte = 0;
            printf("El dia no és perfecte :c\n");
        }
    }
    
    return 0;
}
