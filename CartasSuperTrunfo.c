#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char codigo[4];  // Código da cidade (ex: A01)
    int numero, pontos_turisticos;
    float populacao, area, pib;
    char nome[50]; 

    // Entrada do código da cidade
    printf("Digite o número da cidade (ex: 1 para A01, 2 para A02): ");
    while (scanf("%d", &numero) != 1 || numero < 1 || numero > 99) {
        printf("Número inválido! Digite um número entre 1 e 99: ");
        limpar_buffer();
    }
    limpar_buffer(); // Evita problemas no próximo input

    // Formata o código da cidade no estilo A01, A02, ..., A99
    sprintf(codigo, "A%02d", numero);

    // Entrada do nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove a quebra de linha do fgets

    // Entrada da população (em milhões)
    printf("Digite a população da cidade (em milhões): ");
    while (scanf("%f", &populacao) != 1 || populacao < 0) {
        printf("Valor inválido! Digite um número positivo: ");
        limpar_buffer();
    }
    limpar_buffer();

    // Entrada da área da cidade
    printf("Digite a área da cidade (em km²): ");
    while (scanf("%f", &area) != 1 || area < 0) {
        printf("Valor inválido! Digite um número positivo: ");
        limpar_buffer();
    }
    limpar_buffer();

    // Entrada do PIB da cidade
    printf("Digite o PIB da cidade (em bilhões): ");
    while (scanf("%f", &pib) != 1 || pib < 0) {
        printf("Valor inválido! Digite um número positivo: ");
        limpar_buffer();
    }
    limpar_buffer();

    // Entrada do número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    while (scanf("%d", &pontos_turisticos) != 1 || pontos_turisticos < 0) {
        printf("Valor inválido! Digite um número inteiro positivo: ");
        limpar_buffer();
    }

    // Saída formatada
    printf("\n----- Cidade Cadastrada -----\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %.2f milhões de habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
