#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char Estado1[30] = " BAHIA ";
    char Codigo_Da_Carta1[30] = " 001 ";
    char Nome_Da_Cidade1[30] = " SALVADOR ";
    int Populacao1 = 3000000;
    float Area1 = 1000;
    float PIB1 = 1000000;
    int Numero_de_pontos_turisticos1 = 10;
    float Densidade_Populacional1 = Populacao1 / Area1;
    float PIB_Per_Capita1 = PIB1 / Populacao1;

    // Variáveis para a segunda carta
    char Estado2[30] = " SAO PAULO ";
    char Codigo_Da_Carta2[30] = " 002 ";
    char Nome_Da_Cidade2[30] = " SAO PAULO ";
    int Populacao2 = 5000000;
    float Area2 = 2000;
    float PIB2 = 2000000;
    int Numero_de_pontos_turisticos2 = 20;
    float Densidade_Populacional2 = Populacao2 / Area2;
    float PIB_Per_Capita2 = PIB2 / Populacao2;

    
    printf(" Estado: %s\n", Estado1);
    printf(" Codigo Da Carta: %s\n", Codigo_Da_Carta1);
    printf(" Nome Da Cidade: %s\n", Nome_Da_Cidade1);
    printf(" Populacao: %d\n", Populacao1);
    printf(" Area: %.2f\n", Area1);
    printf(" PIB: %.2f\n", PIB1);
    printf(" Quantidade De Pontos Turisticos: %d\n", Numero_de_pontos_turisticos1);
    printf(" Densidade Populacional: %.2f\n", Densidade_Populacional1);
    printf(" PIB Per Capita: %.2f\n", PIB_Per_Capita1);

    printf(" Estado: %s\n", Estado2);
    printf(" Codigo Da Carta: %s\n", Codigo_Da_Carta2);
    printf(" Nome Da Cidade: %s\n", Nome_Da_Cidade2);
    printf(" Populacao: %d\n", Populacao2);
    printf(" Area: %.2f\n", Area2);
    printf(" PIB: %.2f\n", PIB2);
    printf(" Quantidade De Pontos Turisticos: %d\n", Numero_de_pontos_turisticos2);
    printf(" Densidade Populacional: %.2f\n", Densidade_Populacional2);
    printf(" PIB Per Capita: %.2f\n", PIB_Per_Capita2);

    return 0;
}
