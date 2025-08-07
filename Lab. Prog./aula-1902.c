#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // printf("-----------------------------\n");
    // printf("-\t\t\tMENU\t\t\t-\n");
    // printf("-----------------------------\n");

    // printf("1- Home\n");
    // printf("1- Sair\n");

    char name[100];
    int idade;
    char sexo;
    float altura;

    // printf("Nome: %s\n", name);
    // printf("Idade: %d\n", idade);
    // printf("Genero: %c\n", sexo);
    // printf("Altura: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s \n", name);

    printf("Digite sua idade: ");
    scanf("%d \n", &idade);

    printf("Digite seu genero: ");
    scanf(" %c \n", &sexo);

    printf("Digite sua altura: ");
    scanf("%f \n", &altura);


    return 0;
}