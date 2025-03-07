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

    int resultado;

    // Informações Da Primeira Carta
    printf("Estado: %s\n", Estado1);
    printf("Codigo Da Carta: %s\n", Codigo_Da_Carta1);
    printf("Nome Da Cidade: %s\n", Nome_Da_Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB Per Capita: %.2f\n", PIB_Per_Capita1);

    // Informações Da Segunda Carta
    printf("Estado: %s\n", Estado2);
    printf("Codigo Da Carta: %s\n", Codigo_Da_Carta2);
    printf("Nome Da Cidade: %s\n", Nome_Da_Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB Per Capita: %.2f\n", PIB_Per_Capita2);


    // Comparação e exibição dos resultados para a população
    printf("Comparacao Entre As Populacoes\n");
    
    if (Populacao1 > Populacao2) {
        printf("A cidade de %s tem a maior populacao\n", Nome_Da_Cidade1);
    } else {
        printf("A cidade de %s tem a maior populacao\n", Nome_Da_Cidade2);
    }
    printf(" SAO PAULO possui 5000000 habitantes\n ");


    // Comparação e exibição dos resultados para a área
    printf("Comparacao Entre As Areas\n");

    if (Area1 > Area2) {
        printf("A cidade de %s tem a maior area\n", Nome_Da_Cidade1);
    } else {
        printf("A cidade de %s tem a maior area\n", Nome_Da_Cidade2);
    }
    printf(" SAO PAULO possui 2000 km²\n ");


    // Comparação e exibição dos resultados para o PIB
    printf("Comparacao Entre Os PIBs\n");

    if (PIB1 > PIB2) {
        printf("A cidade de %s tem o maior PIB\n", Nome_Da_Cidade1);
    } else {
        printf("A cidade de %s tem o maior PIB\n", Nome_Da_Cidade2);
    }
    printf(" SAO PAULO possui 2000000 de PIB \n ");


    // Comparação e exibição dos resultados para o número de pontos turísticos
    printf("Comparacao Entre Os Numeros De Pontos Turisticos\n");

    if (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) {
        printf("A cidade de %s tem o maior numero de pontos turisticos\n", Nome_Da_Cidade1);
    } else {
        printf("A cidade de %s tem o maior numero de pontos turisticos\n", Nome_Da_Cidade2);
    }
    printf(" SAO PAULO possui 20 pontos turisticos\n ");


    // Comparação e exibição dos resultados para a densidade populacional
    printf("Comparacao Entre As Densidades Populacionais\n");

    if (Densidade_Populacional1 > Densidade_Populacional2) {
        printf("A cidade de %s tem a menor densidade populacional\n", Nome_Da_Cidade1);
    } else {
        printf("A cidade de %s tem a maior densidade populacional\n", Nome_Da_Cidade2);
    }
    printf(" SALVADOR possui 3000 habitantes por km²\n ");


    // Comparação e exibição dos resultados para o PIB per capita
    printf("Comparacao Entre Os PIBs Per Capita\n"); 

    if (PIB_Per_Capita1 > PIB_Per_Capita2) {
        printf("A cidade de %s tem o maior PIB per capita\n", Nome_Da_Cidade1);
    } else {
        printf("A cidade de %s tem o maior PIB per capita\n", Nome_Da_Cidade2);
    }
    printf(" SAO PAULO possui 400 de PIB per capita\n ");


    // Resultado Final
    printf("Resultado Final\n");
    printf("A cidade de SAO PAULO ganhou em todos os quesitos, exceto na densidade populacional!\n");

    return 0;
}
