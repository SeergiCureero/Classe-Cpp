#include <iostream>

int main()
{
    //creem una variable de tipus char (character en angles o caracter en catala) sense valor
    char caracter;
    //demanem input
    printf("Caracter: ");
    //assignem el caracter que ens han donat a l'input a la variable caracter
    scanf("%c", &caracter);
    //%c ens imprimeix el caracter tal cual pq %c es refereix a char,
    //pero %i ens donara el valor ascii del caracter perque %i es referix a int
    printf("Codi ASCII del caracter %c: %i\n", caracter, caracter);
    
    return 0;
}
