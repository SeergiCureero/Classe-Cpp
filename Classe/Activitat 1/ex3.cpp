#include <iostream>

void EsperaIntro()
{
    char tecla;
    while ((tecla = getchar()) != '\n');
}

int main()
{
    printf("Em dic Pep");
    EsperaIntro();
    printf("Visc a Sabadell");
    EsperaIntro();
    printf("Estudio programació d'informatica de gestió, etc");
    EsperaIntro();

    return 0;
}
