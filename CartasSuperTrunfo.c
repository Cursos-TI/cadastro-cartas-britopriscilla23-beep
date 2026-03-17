#include <stdio.h>

int main() {
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    printf("Digite o estado (uma letra): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite numero de pontos turisticos: ");
    scanf("%d", &turismo1);

    printf("\n--- Dados ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", turismo1);

    return 0;
}
