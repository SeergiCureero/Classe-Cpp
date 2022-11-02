#include <iostream>

int main()
{
    int kilo = 1024;    
    long long mega = kilo * kilo;
    long long giga = mega * kilo;
    long long tera = giga*kilo;

    printf("Un byte té 8 bits.\n");
    printf("Un kilobyte té 2 elevat a 10 bytes. (1kb = 1024bytes)\n");
    printf("       Per tant un kB té %i*8 bits. (8192 bits)\n", kilo);
    printf("Un megabyte són %lli bytes.\n", mega);
    printf("Un gigabyte són %lli bytes.\n", giga);
    printf("Un terabyte són %lli bytes.\n", tera);
    return 0;
}
