#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade[30];
    int codigo;
    int populacao;
    float area;
    float PIB;
    int pts_turisticos;

    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Insira o código da cidade: ");
    scanf("%d", &codigo);

    printf("Insira o tamanho da população: ");
    scanf(" %d", &populacao);

    printf("Insira o tamanho da área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pts_turisticos);

    printf("Cidade: %s\n", cidade);
    printf("Código da cidade: %d\n", codigo);
    printf("Tamanho da população: %d\n", populacao);
    printf("Tamanho da área: %f\n", area);
    printf("PIB da cidade: %f\n", PIB);
    printf("Quantidade de pontos turísticos: %d\n", pts_turisticos);


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
