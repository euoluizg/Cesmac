#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float product, juros;

    int parcela;

    int a = 1;

    do {
        printf("Digite o preço do produto: ");
        scanf("%d", &product);

        printf("Digite em quantas parcelas deseja pagar: ");
        scanf("%d", &parcela);
        parcela = product / parcela;
        juros = parcela / 50;
    }while (a != parcela +1){
        printf("\nParcela %d - R$ %.2f", a, parcela);

        parcela += juros;
        a ++;
    }
    


    return 0;
}