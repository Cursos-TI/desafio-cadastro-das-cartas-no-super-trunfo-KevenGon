#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char Estado1[30];
    char Codigo_Da_Carta1[30];
    char Nome_Da_Cidade1[30];
    int Populacao1;
    float Area1;
    float PIB1;
    int Numero_de_pontos_turisticos1;
    float Densidade_Populacional1;
    float PIB_Per_Capita1;

    // Variáveis para a segunda carta
    char Estado2[30];
    char Codigo_Da_Carta2[30];
    char Nome_Da_Cidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_Populacional2;
    float PIB_Per_Capita2;

    // Entrada de dados para a primeira carta
    printf("Digite o Nome do Estado da Primeira Carta: \n");
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = '\0';  

    printf("Digite o Código da Primeira Carta: \n");
    fgets(Codigo_Da_Carta1, sizeof(Codigo_Da_Carta1), stdin);
    Codigo_Da_Carta1[strcspn(Codigo_Da_Carta1, "\n")] = '\0';  

    printf("Digite o Nome da Cidade da Primeira Carta: \n");
    fgets(Nome_Da_Cidade1, sizeof(Nome_Da_Cidade1), stdin);
    Nome_Da_Cidade1[strcspn(Nome_Da_Cidade1, "\n")] = '\0';  

    printf("Digite a População da Primeira Carta: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área da Primeira Carta: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da Primeira Carta: \n");
    scanf("%f", &PIB1);

    printf("Quantidade de pontos turísticos da Primeira Carta: \n");
    scanf("%d", &Numero_de_pontos_turisticos1);

    Densidade_Populacional1 = Populacao1 / Area1;
    PIB_Per_Capita1 = PIB1 / Populacao1;

    // Limpar o buffer do stdin
    getchar();

    // Entrada de dados para a segunda carta
    printf("Digite o Nome do Estado da Segunda Carta: \n");
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = '\0';  

    printf("Digite o Código da Segunda Carta: \n");
    fgets(Codigo_Da_Carta2, sizeof(Codigo_Da_Carta2), stdin);
    Codigo_Da_Carta2[strcspn(Codigo_Da_Carta2, "\n")] = '\0';  

    printf("Digite o Nome da Cidade da Segunda Carta: \n");
    fgets(Nome_Da_Cidade2, sizeof(Nome_Da_Cidade2), stdin);
    Nome_Da_Cidade2[strcspn(Nome_Da_Cidade2, "\n")] = '\0';  

    printf("Digite a População da Segunda Carta: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área da Segunda Carta: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da Segunda Carta: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turísticos da Segunda Carta: \n");
    scanf("%d", &Numero_de_pontos_turisticos2);

    Densidade_Populacional2 = Populacao2 / Area2;
    PIB_Per_Capita2 = PIB2 / Populacao2;

    // Exibição dos dados da primeira carta
    printf("\nDados da Primeira Carta:\n");
    printf("O Estado é: %s\n", Estado1);
    printf("O Código da Carta é: %s\n", Codigo_Da_Carta1);
    printf("O Nome da Cidade é: %s\n", Nome_Da_Cidade1);
    printf("População: %d - Área: %.2f\n", Populacao1, Area1);
    printf("PIB: %.2f - Quantidade de pontos turísticos: %d\n", PIB1, Numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB Per Capita: %.2f\n", PIB_Per_Capita1);

    // Exibição dos dados da segunda carta
    printf("\nDados da Segunda Carta:\n");
    printf("O Estado é: %s\n", Estado2);
    printf("O Código da Carta é: %s\n", Codigo_Da_Carta2);
    printf("O Nome da Cidade é: %s\n", Nome_Da_Cidade2);
    printf("População: %d - Área: %.2f\n", Populacao2, Area2);
    printf("PIB: %.2f - Quantidade de pontos turísticos: %d\n", PIB2, Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB Per Capita: %.2f\n", PIB_Per_Capita2);

    return 0;
}