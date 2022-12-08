#include <iostream>

int kilo = 1000;
long long int mega = kilo*kilo, giga = mega * kilo, tera = giga * kilo;

int main()
{
    printf("Un kHz son %i Hz\n", kilo);
    printf("Un MHz son %lli Hz\n", mega);
    printf("Un GHz son %lli Hz\n", giga);
    printf("Un THz son %lli Hz\n", tera);
    
    return 0;
}
