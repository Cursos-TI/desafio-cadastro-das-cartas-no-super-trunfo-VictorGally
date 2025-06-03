#include <stdio.h>

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

    int cidade; 
    char nome[20]; 
    int populacao; 
    float area; 
    float PIB; 
    int pontos;

    printf("Digite o código da cidade: \n");
    scanf("%d", &cidade);
    printf("Código da cidade é: %d\n", cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%d", &nome);
    printf("A altura é: %d\n", nome);

    printf("Digite a população da cidade: \n");
    scanf("%f", populacao);
    printf("A população é: %f\n", populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("A área da cidade é: %f\n", area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);
    printf("O PIB é: %f\n", PIB);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%s", pontos);
    printf("A quantidade de pontos turísticos é: %s\n", pontos);



    return 0;
}
