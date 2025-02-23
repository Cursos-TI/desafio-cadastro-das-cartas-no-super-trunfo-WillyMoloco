#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Entrada de dados para a primeira carta
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar(); // Consumir o newline pendente
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigo1);
    getchar(); // Consumir o newline pendente
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("Digite a população: ");
    scanf(" %d", &populacao1);
    printf("Digite a área em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    getchar(); // Consumir o newline pendente
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar(); // Consumir o newline pendente
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigo2);
    getchar(); // Consumir o newline pendente
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("Digite a área em km²: ");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    
    // Exibição das informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
