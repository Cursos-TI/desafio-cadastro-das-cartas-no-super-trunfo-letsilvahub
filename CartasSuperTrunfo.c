#include <stdio.h>

// Estrutura para armazenar os atributos das cidades
struct Cidade {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Defina a quantidade de cartas que você deseja cadastrar
    int quantidade_cartas;
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &quantidade_cartas);

    // Array para armazenar as cidades
    struct Cidade cidades[quantidade_cartas];

    // Cadastro das Cartas
    for(int i = 0; i < quantidade_cartas; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);
        
        printf("Código da cidade: ");
        scanf("%d", &cidades[i].codigo);
        
        printf("Nome da cidade: ");
        scanf(" %[^\n]s", cidades[i].nome);  // Captura entrada com espaços
        
        printf("População: ");
        scanf("%d", &cidades[i].populacao);
        
        printf("Área (em km²): ");
        scanf("%f", &cidades[i].area);
        
        printf("PIB (em bilhões): ");
        scanf("%f", &cidades[i].pib);
        
        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    // Exibição dos Dados das Cartas
    printf("\nInformações das cartas cadastradas:\n");
    for(int i = 0; i < quantidade_cartas; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Código: %d\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
