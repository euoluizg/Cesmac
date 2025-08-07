#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portugues");

    int resultado = ((10 + 5) * 2 - 1 ) * 7;

    printf("O resultado é %d ", resultado);
    
    return 0;
}