#include <iostream>

float Periode(float frequencia){
    return 1.0/frequencia;
}

float kilo = 1000, mega = kilo*kilo, giga = mega * kilo, tera = giga * kilo; 

int main(){
    printf("El temps d'instrucció de Khz és %.3fs\n",Periode(kilo));
    printf("El temps d'instrucció de Mhz és %.6fs\n",Periode(mega));
    printf("El temps d'instrucció de Ghz és %.9fs\n",Periode(giga));
    printf("El temps d'instrucció de Thz és %.12fs\n",Periode(tera));
    
    return 0;
}