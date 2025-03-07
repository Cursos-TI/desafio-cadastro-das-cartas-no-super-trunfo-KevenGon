#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char Estado1[30] = "BAHIA";
    char Codigo_Da_Carta1[30] = "001";
    char Nome_Da_Cidade1[30] = "SALVADOR";
    int Populacao1 = 3000000;
    float Area1 = 1000.0;
    float PIB1 = 1000000.0;
    int Numero_de_pontos_turisticos1 = 10;
    float Densidade_Populacional1 = Populacao1 / Area1;
    float PIB_Per_Capita1 = PIB1 / Populacao1;

    // Variáveis para a segunda carta
    char Estado2[30] = "SAO PAULO";
    char Codigo_Da_Carta2[30] = "002";
    char Nome_Da_Cidade2[30] = "SAO PAULO";
    int Populacao2 = 5000000;
    float Area2 = 2000.0;
    float PIB2 = 2000000.0;
    int Numero_de_pontos_turisticos2 = 20;
    float Densidade_Populacional2 = Populacao2 / Area2;
    float PIB_Per_Capita2 = PIB2 / Populacao2;

    char atributo[30];

    // Menu Principal
    printf("*** SUPER TRUNFO ***\n");
    printf("Escolha um atributo para comparar as cartas: \n");
    printf("1: Populacao\n");
    printf("2: Area\n");
    printf("3: PIB\n");
    printf("4: Numero de Pontos Turisticos\n");
    printf("5: Densidade Populacional\n");
    printf("6: PIB Per Capita\n");
    printf("7: Sair\n");
    printf("Escolha uma opcao: \n");
    scanf("%s", atributo);


    // Comparando os atributos
    if (strcmp(atributo, "1") == 0) {
        if (Populacao1 > Populacao2) {
            printf("SALVADOR vence em Populacao\n");
        } else if (Populacao1 < Populacao2) {
            printf("SAO PAULO vence em Populacao\n");
        } else {
            printf("Empate em Populacao\n");
        }
    } else if (strcmp(atributo, "2") == 0) {
        if (Area1 > Area2) {
            printf("SALVADOR vence em Area\n");
        } else if (Area1 < Area2) {
            printf("SAO PAULO vence em Area\n");
        } else {
            printf("Empate em Area\n");
        }
    } else if (strcmp(atributo, "3") == 0) {
        if (PIB1 > PIB2) {
            printf("SALVADOR vence em PIB\n");
        } else if (PIB1 < PIB2) {
            printf("SAO PAULO vence em PIB\n");
        } else {
            printf("Empate em PIB\n");
        }
    } else if (strcmp(atributo, "4") == 0) {
        if (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) {
            printf("SALVADOR vence em Numero de Pontos Turisticos\n");
        } else if (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) {
            printf("SAO PAULO vence em Numero de Pontos Turisticos\n");
        } else {
            printf("Empate em Numero de Pontos Turisticos\n");
        }
    } else if (strcmp(atributo, "5") == 0) {
        if (Densidade_Populacional1 > Densidade_Populacional2) {
            printf("SALVADOR vence em Densidade Populacional\n");
        } else if (Densidade_Populacional1 < Densidade_Populacional2) {
            printf("SAO PAULO vence em Densidade Populacional\n");
        } else {
            printf("Empate em Densidade Populacional\n");
        }
    } else if (strcmp(atributo, "6") == 0) {
        if (PIB_Per_Capita1 > PIB_Per_Capita2) {
            printf("SALVADOR vence em PIB Per Capita\n");
        } else if (PIB_Per_Capita1 < PIB_Per_Capita2) {
            printf("SAO PAULO vence em PIB Per Capita\n");
        } else {
            printf("Empate em PIB Per Capita\n");
        }    
    } else if (strcmp(atributo, "7") == 0) {
            printf("Saindo...\n");
    }
    
    return 0;
}