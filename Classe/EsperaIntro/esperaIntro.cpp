#include <iostream>

void EsperaIntro()
{
    char tecla;
    printf("Prem la tecla <intro> i continua el programa\n");
    while ((tecla = getchar()) != '\n'); 
    printf("Hola");

}

int main()
{
    EsperaIntro();
    return 0;
}
