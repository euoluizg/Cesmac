#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;

    while (i = 50; i <= 100; i++){
        printf("%d", i);
    }
    
    
    

    return 0;
}