#include <stdio.h>

int main() {
    int População;
    float Área;
    float PIB;
    int Número_de_pontos_turísticos;

    printf("Digite a População: \n");
    scanf("%d", &População);

    printf("Digite a Área: \n");
    scanf("%f", &Área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &Número_de_pontos_turísticos);

    printf("População: %d - Área: %f\n", População, Área);
    printf("Pib: %f - Quantidade de pontos turisticos: %d\n", PIB, Número_de_pontos_turísticos);

    return 0;
}