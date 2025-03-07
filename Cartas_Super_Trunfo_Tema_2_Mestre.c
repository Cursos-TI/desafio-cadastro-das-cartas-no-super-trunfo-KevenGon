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

    int atributo1, atributo2;
    int escolha_valida = 0;
    float valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2, soma_carta1, soma_carta2;

    // Menu Principal
    printf("*** SUPER TRUNFO ***\n");
    printf("Escolha o primeiro atributo para comparar as cartas: \n");
    printf("1: Populacao\n");
    printf("2: Area\n");
    printf("3: PIB\n");
    printf("4: Numero de Pontos Turisticos\n");
    printf("5: Densidade Populacional\n");
    printf("6: PIB Per Capita\n");
    printf("Escolha uma opcao: \n");
    scanf("%d", &atributo1);

    // Menu para o segundo atributo
    while (!escolha_valida) {
        printf("Escolha o segundo atributo para comparar as cartas: \n");
        switch (atributo1) {
            case 1:
                printf("2: Area\n3: PIB\n4: Numero de Pontos Turisticos\n5: Densidade Populacional\n6: PIB Per Capita\n");
                break;
            case 2:
                printf("1: Populacao\n3: PIB\n4: Numero de Pontos Turisticos\n5: Densidade Populacional\n6: PIB Per Capita\n");
                break;
            case 3:
                printf("1: Populacao\n2: Area\n4: Numero de Pontos Turisticos\n5: Densidade Populacional\n6: PIB Per Capita\n");
                break;
            case 4:
                printf("1: Populacao\n2: Area\n3: PIB\n5: Densidade Populacional\n6: PIB Per Capita\n");
                break;
            case 5:
                printf("1: Populacao\n2: Area\n3: PIB\n4: Numero de Pontos Turisticos\n6: PIB Per Capita\n");
                break;
            case 6:
                printf("1: Populacao\n2: Area\n3: PIB\n4: Numero de Pontos Turisticos\n5: Densidade Populacional\n");
                break;
        }
        printf("Escolha uma opcao: \n");
        scanf("%d", &atributo2);
        if (atributo2 != atributo1) {
            escolha_valida = 1;
        } else {
            printf("Atributo ja escolhido. Escolha um atributo diferente.\n");
        }
    }

    // Atribuindo valores dos atributos escolhidos às variáveis
    switch (atributo1) {
        case 1:
            valor1_carta1 = Populacao1;
            valor1_carta2 = Populacao2;
            break;
        case 2:
            valor1_carta1 = Area1;
            valor1_carta2 = Area2;
            break;
        case 3:
            valor1_carta1 = PIB1;
            valor1_carta2 = PIB2;
            break;
        case 4:
            valor1_carta1 = Numero_de_pontos_turisticos1;
            valor1_carta2 = Numero_de_pontos_turisticos2;
            break;
        case 5:
            valor1_carta1 = Densidade_Populacional1;
            valor1_carta2 = Densidade_Populacional2;
            break;
        case 6:
            valor1_carta1 = PIB_Per_Capita1;
            valor1_carta2 = PIB_Per_Capita2;
            break;
    }

    switch (atributo2) {
        case 1:
            valor2_carta1 = Populacao1;
            valor2_carta2 = Populacao2;
            break;
        case 2:
            valor2_carta1 = Area1;
            valor2_carta2 = Area2;
            break;
        case 3:
            valor2_carta1 = PIB1;
            valor2_carta2 = PIB2;
            break;
        case 4:
            valor2_carta1 = Numero_de_pontos_turisticos1;
            valor2_carta2 = Numero_de_pontos_turisticos2;
            break;
        case 5:
            valor2_carta1 = Densidade_Populacional1;
            valor2_carta2 = Densidade_Populacional2;
            break;
        case 6:
            valor2_carta1 = PIB_Per_Capita1;
            valor2_carta2 = PIB_Per_Capita2;
            break;
    }

    // Comparação dos atributos
    printf("\nComparando os atributos:\n");

    if (atributo1 == 5) { // Exceção: Densidade Demográfica
        if (valor1_carta1 > valor1_carta2) {
            printf("SALVADOR vence em Densidade Populacional\n");
        } else if (valor1_carta1 < valor1_carta2) {
            printf("SAO PAULO vence em Densidade Populacional\n");
        } else {
            printf("Empate em Densidade Populacional\n");
        }
    } else {
        if (valor1_carta1 > valor1_carta2) {
            printf("SALVADOR vence em %d\n", atributo1);
        } else if (valor1_carta1 < valor1_carta2) {
            printf("SAO PAULO vence em %d\n", atributo1);
        } else {
            printf("Empate em %d\n", atributo1);
        }
    }

    if (atributo2 == 5) { // Exceção: Densidade Demográfica
        if (valor2_carta1 > valor2_carta2) {
            printf("SALVADOR vence em Densidade Populacional\n");
        } else if (valor2_carta1 < valor2_carta2) {
            printf("SAO PAULO vence em Densidade Populacional\n");
        } else {
            printf("Empate em Densidade Populacional\n");
        }
    } else {
        if (valor2_carta1 > valor2_carta2) {
            printf("SALVADOR vence em %d\n", atributo2);
        } else if (valor2_carta1 < valor2_carta2) {
            printf("SAO PAULO vence em %d\n", atributo2);
        } else {
            printf("Empate em %d\n", atributo2);
        }
    }

    // Soma dos atributos
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\nResultado da Comparacao:\n");
    printf("Cidade: SALVADOR\n");
    printf("Atributo 1 (%d): %.2f\n", atributo1, valor1_carta1);
    printf("Atributo 2 (%d): %.2f\n", atributo2, valor2_carta1);
    printf("Soma dos Atributos: %.2f\n", soma_carta1);

    printf("\nCidade: SAO PAULO\n");
    printf("Atributo 1 (%d): %.2f\n", atributo1, valor1_carta2);
    printf("Atributo 2 (%d): %.2f\n", atributo2, valor2_carta2);
    printf("Soma dos Atributos: %.2f\n", soma_carta2);

    // Determinação do vencedor
    if (soma_carta1 > soma_carta2) {
        printf("\nSALVADOR vence a rodada!\n");
    } else if (soma_carta1 < soma_carta2) {
        printf("\nSAO PAULO vence a rodada!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}