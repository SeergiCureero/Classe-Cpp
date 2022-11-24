#include <iostream>
 
int main()
{
    int bonTemps, socFelic;
    printf("Fa bon temps? ");
    scanf("%i",&bonTemps);
    printf("Ets feliç? ");
    scanf("%i",&socFelic);
 
    printf("El dia és perfecte (%i)\n", bonTemps&&socFelic);
 
    return 0;
}
