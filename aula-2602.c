#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portugues");

    // 1˚

    // float n1, n2, n3, total;

    // printf("Digite 3 números:\n");
    // scanf("%f", &n1);
    // scanf("%f \n", &n2);
    // scanf("%f", &n3);

    //  total=(n1 + n2) * n3;

    // printf("Total: %.2f", total); 

    // 2˚

    // float b, a, resultado;

    // printf("Digite a base do triangulo: ");
    // scanf("%f", &b);

    // printf("Digite a altura do triangulo: ");
    // scanf("%f", &a);

    // resultado = (b + a) / 2;

    // printf("A area do triangulo é %.3f", resultado);

    float diametro, pi, raio, area;

    printf("Digite o diamentro do circulo: ");
    scanf("%f", &diametro);

    pi = 3,14;

    raio = diametro / 2;

    area = pi * (raio * raio);

    printf("Area do circulo é %.3f", area);


    return 0;
}