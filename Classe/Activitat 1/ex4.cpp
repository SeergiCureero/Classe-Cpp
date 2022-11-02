#include <iostream>

int Quadrat(int x){
    return x*x;
}

int Cub(int x){
    return x*x*x;
}

int main()
{
    int x;
    x = Quadrat(3);

    printf("%i\n", Quadrat(5));
    printf("%i\n", Quadrat(2));
    printf("%i\n", Cub(5));
    printf("%i\n", Cub(2));
    return 0;
}
