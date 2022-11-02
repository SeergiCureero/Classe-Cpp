//demanar radi de circumferencia de l'esfera
//donar superficie de l'esfera
//donar longitut (perimetre?) de l'esfera
//donar volum de l'esfera


//incloem llibreries
/*
cmath (C Mathematics) ens proporciona valors i operacions per estalviar temps. 
D'aquesta llibreria nomes usarem el valor constant M_PI per obtenir π i la funció round() per arrodonir uns numeros
L'excercici del Jordi no necessita que li arrodonim numeros, així que si no voleu cridar la funcio no passa res
*/
#include <cmath>
#include <iostream>

//creem la funció Area
/*
Area és una funció de tipus float. Agafa un float (r) com argument. La r es refereix a radi
Area retorna l'operació matematica 4·π·r², és a dir, l'àrea o superfície de la circumferència 
*/
float Area(float r){
    return 4*M_PI*r*r;
}

//creem la funció Perimetre
/*
Perimetre és una funció de tipus float. Agafa un float (r) com argument 
i ens retorna el valor de la operació matematica corresponent per a saber 
el perimetre d'una circumferencia o cercle donat el seu radi
*/
float Perimetre(float r){
    return 2*M_PI*r;
}

//creem la funció Volum
/*
Volum és una funció de tipus float. Agafa un float (r) com argument 
i ens retorna el volum de la circumferencia de radi donat. En aquest cas, els parentesi estan per establir un ordre d'operacions
Si no posem parentesi es faria igualment be, pero sempre és millor assegurar
*/
float Volum(float r){
    return (4*M_PI*r*r*r)/3;
}

int main()
{
    //float radi és una variable de tipus float que de moment no te cap valor
    float radi;

    //imprimim "Radi (cm): " per demanar a l'usuari que ens doni un input
    printf("Radi (cm): ");
    //Escanegem aquest input i l'assignem a la variable radi (ara radi té un valor, el que li doni l'usuari).
    //És important que radi tingui un & davant ja que si no no va bé (no se perque, crec que te algo a veure amb punters pero ni idea)
    scanf("%f", &radi);

    /*
    printf començara a imprimir el text. Al trobarse amb %f (o %s, %i, %d, %lli, etc) buscara despres
    de la coma i, per ordre, assignara el que hi hagi a %f. Com en aquest cas el que hi ha despres de la coma son funcions
    el que farà el programa serà cridar les funcions i esperar que els hi retorni algo
    */
    //Com la funció Perimetre() ens demana un float, li donem el radi
    printf("Perimetre: %f cm\n", Perimetre(radi));
    printf("Area: %f cm²\n", Area(radi));
    printf("Volum: %f cm³\252\n", Volum(radi));

    //aqui imprimeixo els mateixos valors pero passats per la funció round() de <cmath>
    //si no voleu arrodonir simplement esborreu aquesta part del programa
    printf("---VALORS ARRODONITS---\n");

    printf("Perimetre: ~%f cm\n", round(Perimetre(radi)));
    printf("Area: ~%f cm²\n", round(Area(radi)));
    printf("Volum: ~%f cm³\252\n", round(Volum(radi)));
    
    return 0;
}
