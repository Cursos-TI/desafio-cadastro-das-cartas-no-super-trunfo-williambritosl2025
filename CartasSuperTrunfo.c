#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Declarando as variaveis

    char estado, estado2, codigodacarta[4], codigodacarta2[4], nomecidade[20], nomecidade2[20];
    int populacao, populacao2, pontosturisticos, pontosturisticos2;
    float area, area2, densidadepopulacional, densidadepopulacional2;
    float pib, pib2, pibpercapita, pibpercapita2;

    // Inserindo os dados da carta 1

    printf("Insira o Estado: ");
    scanf("%c", &estado);

    printf("Insira o código da carta: ");
    scanf("%s", &codigodacarta);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Insira a população: ");
    scanf("%d", &populacao);

    printf("Insira a área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    // Calculo de densidade populacional da carta 1
    densidadepopulacional = (float)populacao / area;
    // Calculo de PIB per CApita da carta 1
    pibpercapita = (float)(pib * 1000000000) / populacao;

    // Apresentando os dados inseridos da carta 1

    printf("------------------ \n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigodacarta);
    printf("Nome da Cidade: %s \n", nomecidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional);
    printf("PIB per Capita: %.2f reais \n", pibpercapita);

    printf("------------------ \n");

    // Inserindo os dados da carta 2

    printf("Insira o Estado: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: ");
    scanf("%s", &codigodacarta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nomecidade2);

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Calculo de densidade populacional da carta 2
    densidadepopulacional2 = (float)populacao2 / area2;
    // Calculo de PIB per CApita da carta 2
    pibpercapita2 = (float)(pib2 * 1000000000) / populacao2;

    // Apresentando os dados inserido da carta 2

    printf("------------------ \n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigodacarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);

    return 0;

}
