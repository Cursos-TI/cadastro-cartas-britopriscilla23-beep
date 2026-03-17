#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turismo1, turismo2;

    // Cadastro 1
    printf("Digite o estado 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB 1: ");
    scanf("%f", &pib1);

    printf("Digite numero de pontos turisticos 1: ");
    scanf("%d", &turismo1);

    // Cadastro 2
    printf("\nDigite o estado 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos 2: ");
    scanf("%d", &turismo2);

    // Exibição
    printf("\n--- Dados Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Turismo: %d\n", turismo1);

    printf("\n--- Dados Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Turismo: %d\n", turismo2);

    return 0;
}
