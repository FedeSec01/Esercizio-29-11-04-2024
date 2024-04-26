#include <stdio.h>
int main() {
    char buffer[10]; //E' sufficiente cambiare l'indice del vettore da 10 ad un numero negativo

    printf("Si prefa di inserire il nome utente");
    scanf("%s", buffer);

    printf("Nome utente inserito: %s\n", buffer);

    return 0;
}