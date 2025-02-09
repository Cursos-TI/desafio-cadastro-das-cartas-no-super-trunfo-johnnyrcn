#include <stdio.h>

//Área onde variáveis utilizadas serão definidas
int main() {
    char cidade1[30], cidade2[30];
    int codigo1, codigo2, pts_turisticos1, pts_turisticos2;
    long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2, densidade1, densidade2, PIBperCapita1, PIBperCapita2;

//Área para o usuário inserir os dados da carta 1
    printf("Insira os dados referentes à Carta 1\n");

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("Insira o código da cidade: ");
    scanf("%d", &codigo1);

    printf("Insira o tamanho da população: ");
    scanf(" %ld", &populacao1);

    printf("Insira o tamanho da área em metros quadrados: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos1);

//Área onde será exibido na tela os dados da carta 1 que o usuário inseriu
    printf("\nDados referentes à Carta 1\n");
    printf("Cidade: %s\n", cidade1);
    printf("Código da cidade: %d\n", codigo1);
    printf("Tamanho da população: %ld pessoas\n", populacao1);
    printf("Tamanho da área: %.2f m²\n", area1);
    printf("PIB da cidade: R$ %.2f\n", PIB1);
    printf("Quantidade de pontos turísticos: %d pontos\n", pts_turisticos1);


//Área onde os cálculos referentes aos dados inseridos da carta 1 anteriormente serão mostrados
    densidade1 = (float)populacao1 / area1;
    printf("A densidade populacional é: %.2f hab/m²\n", densidade1);

    PIBperCapita1 = (float)PIB1 / populacao1;
    printf("O PIB per capita é: R$ %.2f\n", PIBperCapita1);

//Cálculo do Super Poder da Carta 1 (Soma de todas as propriedades)
    float poder1 = populacao1 + pts_turisticos1 + area1 + PIB1 + densidade1 + PIBperCapita1;
    printf("Super Poder desta carta: %.2f\n", poder1);


//Área para o usuário inserir os dados da carta 2
    printf("\nInsira os dados referentes à Carta 2\n");

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Insira o código da cidade: ");
    scanf("%d", &codigo2);

    printf("Insira o tamanho da população: ");
    scanf(" %ld", &populacao2);

    printf("Insira o tamanho da área em metros quadrados: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos2);

//Área onde será exibido na tela os dados da carta 1 que o usuário inseriu
    printf("\nDados referentes à Carta 2\n");
    printf("Cidade: %s\n", cidade2);
    printf("Código da cidade: %d\n", codigo2);
    printf("Tamanho da população: %ld pessoas\n", populacao2);
    printf("Tamanho da área: %.2f m²\n", area2);
    printf("PIB da cidade: R$ %.2f\n", PIB2);
    printf("Quantidade de pontos turísticos: %d pontos\n", pts_turisticos2);


//Área onde os cálculos referentes aos dados inseridos da carta 1 anteriormente serão mostrados
    densidade2 = (float)populacao2 / area2;
    printf("A densidade populacional é: %.2f hab/m²\n", densidade2);

    PIBperCapita2 = (float)PIB2 / populacao2;
    printf("O PIB per capita é: R$ %.2f\n", PIBperCapita2);


//Cálculo do Super Poder da Carta 2 (Soma de todas as propriedades)
    float poder2 = populacao2 + pts_turisticos2 + area2 + PIB2 + densidade2 + PIBperCapita2;
    printf("Super Poder desta carta: %.2f\n", poder2);


//Área onde os dados serão comparados para eleger o vencedor
    printf("\n Carta vencedora em cada categoria, sendo 1 = carta 1 e 0 = carta 2\n");

    printf("População: %d\n", populacao1 > populacao2);
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
         }

    printf("Área: %d\n", area1 > area2);
    if (area1 > area2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n"); 
        }

    printf("Pontos turístico: %d\n", pts_turisticos1 > pts_turisticos2);
    if (pts_turisticos1 > pts_turisticos2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n"); 
        }

    printf("PIB: %d\n", PIB1 > PIB2);
    if (PIB1 > PIB2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n"); 
        }

    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    if (densidade1 > densidade2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n"); 
        }

    printf("PIB per Capita: %d\n", PIBperCapita1 > PIBperCapita2);
    if (PIBperCapita1 > PIBperCapita2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n"); 
        }

    printf("Super Poder: %d\n", poder1 > poder2);
    if (poder1 > poder2) {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
         }



    return 0;
}
