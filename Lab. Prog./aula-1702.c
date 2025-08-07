#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char name[100] = "Luiz";
    int idade = 19;
    float altura = 1.80;
    char raca[100] = "Branco";
    char genero = 'M';

    printf("Nome: %s \n", name );
    printf("Idade: %d \n", idade );
    printf("Altura: %.2f \n", altura );
    printf("Raça: %s \n", raca );
    printf("Gênero: %c \n\n\n", genero );


    printf("Olá, meu nome é %s", name);

    return 0;
}