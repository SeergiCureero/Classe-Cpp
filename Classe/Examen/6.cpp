#include <iostream>
int main(){
    const int V = 1;
    const int F = 0;
    printf("Taula NOT\n");
    printf("A|Q\n");
    printf("-+-\n");
    printf("%i|%i\n", F, !F);
    printf("%i|%i\n", V, !V);
    printf("Taula AND\n");
    printf("A|B|Q\n");
    printf("-+-+-\n");
    printf("%i|%i|%i\n", F, F, (F&&F));
    printf("%i|%i|%i\n", F, V, (F&&V));
    printf("%i|%i|%i\n", V, F, (V&&F));
    printf("%i|%i|%i\n", V, V, (V&&V));
    printf("Taula OR\n");
    printf("A|B|Q\n");
    printf("-+-+-\n");
    printf("%i|%i|%i\n", F, F, (F||F));
    printf("%i|%i|%i\n", F, V, (F||V));
    printf("%i|%i|%i\n", V, F, (V||F));
    printf("%i|%i|%i\n", V, V, (V||V));
    return 0;
}