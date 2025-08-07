#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portugues");

//     int mes;

//    printf("Digite o mês desejado: ");
//    scanf("%d", &mes);
    
//     switch (mes)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7: 
//     case 8:
//     case 10:
//     case 12:
//         printf("Esses meses tem 31 dias.");
//         break;
//     case 2:
//         printf("Esse mês tem 28 dias.");
//         break;

//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf("Esse mês tem 30 dias.");
//         break;
//     default:
//         printf("Esse mês não existe.");
//         break;
//     }

    char letra;

    char vogal[] = {"a", "e", "i", "o", "u"};

    char consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    printf("Digite uma letra: ");
    scanf("%c", letra);

    if ( letra == vogal[])
    {
        printf("Essa letra é uma vogal.");
    } else {
        printf("Essa letra é uma consoante.");
    }
    

    return 0;
}