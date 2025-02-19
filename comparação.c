#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    char codigo[20];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    // Definição de duas cartas fixas
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.0, 2200000000000.0, 10};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6700000, 1200.0, 1600000000000.0, 8};

    // Cálculo de Densidade Populacional e PIB per capita
    float densidade1 = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    float densidade2 = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    float pibPerCapita1 = calcularPIBPerCapita(carta1.pib, carta1.populacao);
    float pibPerCapita2 = calcularPIBPerCapita(carta2.pib, carta2.populacao);

    // Escolha do atributo pelo usuário
    int escolha;
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - PIB per capita\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &escolha);

    char atributoComparado[30];
    float valor1, valor2;
    
    switch (escolha) {
        case 1:
            strcpy(atributoComparado, "População");
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
            break;
        case 2:
            strcpy(atributoComparado, "Área");
            valor1 = carta1.area;
            valor2 = carta2.area;
            break;
        case 3:
            strcpy(atributoComparado, "PIB");
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            break;
        case 4:
            strcpy(atributoComparado, "Densidade Populacional");
            valor1 = densidade1;
            valor2 = densidade2;
            break;
        case 5:
            strcpy(atributoComparado, "PIB per capita");
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            break;
        default:
            printf("Opção inválida! Usando População como padrão.\n");
            strcpy(atributoComparado, "População");
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
    }

    int vencedor;
    if (strcmp(atributoComparado, "Densidade Populacional") == 0) {
        vencedor = (valor1 < valor2) ? 1 : (valor2 < valor1) ? 2 : 0;
    } else {
        vencedor = (valor1 > valor2) ? 1 : (valor2 > valor1) ? 2 : 0;
    }

    // Exibição do resultado
    printf("\nComparação de cartas (Atributo: %s):\n\n", atributoComparado);
    printf("Carta 1 - %s (%s): %.2f\n", carta1.nome_cidade, carta1.estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n\n", carta2.nome_cidade, carta2.estado, valor2);
    
    if (vencedor == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (vencedor == 2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
