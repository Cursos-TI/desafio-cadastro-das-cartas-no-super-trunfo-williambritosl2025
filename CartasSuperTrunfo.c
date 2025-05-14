#include <stdio.h>

int main()
{
    // Desafio Super Trunfo - Países

    // Declarando as variaveis

    char estado, estado2, codigodacarta[4], codigodacarta2[4], nomecidade[20], nomecidade2[20];
    unsigned long int populacao, populacao2, superpoder1, superpoder2;
    int pontosturisticos, pontosturisticos2;
    float area, area2, densidadepopulacional, densidadepopulacional2;
    float pib, pib2, pibpercapita, pibpercapita2;
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontosturisticos, resultadodensidade, resultadorpibpercapita;
    int resutadosuperpoder;

    // Inserindo os dados da carta 1
    printf("Insira o Estado: ");
    scanf("%c", &estado);

    printf("Insira o código da carta: ");
    scanf("%s", &codigodacarta);

    printf("Insira o nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Insira a população: ");
    scanf("%lu", &populacao);

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

    // Imprimindo os dados da carta 1

    printf("------------------ \n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigodacarta);
    printf("Nome da Cidade: %s \n", nomecidade);
    printf("População: %lu \n", populacao);
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
    scanf("%lu", &populacao2);

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

    printf("------------------ \n");

    // Imprimindo os dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigodacarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);

    // Calculando o super poder
    superpoder1 = (long double)(populacao + area + pib + pontosturisticos + (densidadepopulacional * -1) + pibpercapita);
    superpoder2 = (long double)(populacao2 + area2 + pib2 + pontosturisticos2 + (densidadepopulacional2 * -1) + pibpercapita2);

    // Comparando as cartas do super trunfo
    resultadopopulacao = populacao > populacao2;
    resultadoarea = area > area2;
    resultadopib = pib > pib2;
    resultadopontosturisticos = pontosturisticos > pontosturisticos2;
    resultadodensidade = densidadepopulacional < densidadepopulacional2;
    resultadorpibpercapita = pibpercapita > pibpercapita2;
    resutadosuperpoder = superpoder1 > superpoder2;

    // Imprimindo na tela as comparações
    printf("------------------ \n");
    printf("Comparação de Cartas: \n");
    printf("População: %d\n", resultadopopulacao);
    printf("Área: %d\n", resultadoarea);
    printf("PIB: %d\n", resultadopib);
    printf("Pontos Turísticos: %d\n", resultadopontosturisticos);
    printf("Densidade Populacional: %d\n", resultadodensidade);
    printf("PIB per Capita: %d\n", resultadorpibpercapita);
    printf("Super Poder: %d\n", resutadosuperpoder);

    printf("------------------ \n");
    printf("FIM");
    return 0;
}