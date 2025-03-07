#include <stdio.h>

int main() {
    char Estado[30] = " BAHIA ";
    char Codigo_Da_Carta[30] = " 001 ";
    char Nome_Da_Cidade[30] = " SALVADOR ";
    int Populacao = 3000000;
    float Area = 1000;
    float PIB = 1000000;
    int Numero_de_pontos_turisticos = 10;

    printf("Estado: %s\n", Estado);
    printf("Codigo Da Carta: %s\n", Codigo_Da_Carta);
    printf("Nome Da Cidade: %s\n", Nome_Da_Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos);

    return 0;
}
