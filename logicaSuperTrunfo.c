#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char nomeCartaUm[40];
    int populacaoCartaUm;
    float areaCartaUm;
    float pibCartaUm;
    unsigned int numeroPontosTuristicosCartaUm;
    char codigoCartaUm[2];
    float densidadePopulacionalCartaUm;
    float pibPerCapitaCartaUm;
    float superPoderCartaUm;

    char nomeCartaDois[40];
    int populacaoCartaDois;
    float areaCartaDois;
    float pibCartaDois;
    unsigned int numeroPontosTuristicosCartaDois;
    char codigoCartaDois[2];
    float densidadePopulacionalCartaDois;
    float pibPerCapitaCartaDois;
    float superPoderCartaDois;
    
    int vitoriasCartaUm = 0;
    int vitoriasCartaDois = 0;
    int escolhaComparacao;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("~~~~ Começando o cadastro de uma nova carta do SuperTrunfo! ~~~\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCartaUm);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigoCartaUm);
    printf("Digite a população total da cidade: ");
    scanf("%d", &populacaoCartaUm);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areaCartaUm);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pibCartaUm);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%u", &numeroPontosTuristicosCartaUm);
    printf("Carta cadastrada com sucesso!\n");

    printf("~~~~ Começando o cadastro de uma nova carta do SuperTrunfo! ~~~\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCartaDois);
    printf("Digite o código da cidade: ");
    scanf("%s", &codigoCartaDois);
    printf("Digite a população total da cidade: ");
    scanf("%d", &populacaoCartaDois);
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &areaCartaDois);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pibCartaDois);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%u", &numeroPontosTuristicosCartaDois);
    printf("Carta cadastrada com sucesso!\n");

    //Calculando a Densidade Populacional e o PIB per Capita
    densidadePopulacionalCartaUm = ((float) populacaoCartaUm) / areaCartaUm;
    pibPerCapitaCartaUm = pibCartaUm / ((float) populacaoCartaUm);
    superPoderCartaUm = populacaoCartaUm + areaCartaUm + pibCartaUm + numeroPontosTuristicosCartaUm
        + densidadePopulacionalCartaUm + pibPerCapitaCartaUm;

    densidadePopulacionalCartaDois = ((float) populacaoCartaDois) / areaCartaDois;
    pibPerCapitaCartaDois = pibCartaDois / ((float) populacaoCartaDois);
    superPoderCartaDois = populacaoCartaDois + areaCartaDois + pibCartaDois + numeroPontosTuristicosCartaDois
        + densidadePopulacionalCartaDois + pibPerCapitaCartaDois;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("************************\n");
    printf("Começando a comparação entre as cartas das cidades %s e %s.\n",
        nomeCartaUm, nomeCartaDois);
    printf("Escolha uma opção\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per Capita\n");
    printf("5. Densidade Populacional\n");
    printf("6. Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolhaComparacao);
    printf("************************\n");

    switch (escolhaComparacao) {
    case 1:
        if (populacaoCartaUm > populacaoCartaDois) {
        printf("A população de %s é maior que a população de %s.\n", nomeCartaUm, nomeCartaDois);
        vitoriasCartaUm++;
        } else if (populacaoCartaUm < populacaoCartaDois) {
            printf("A população de %s é maior que a população de %s.\n", nomeCartaDois, nomeCartaUm);
            vitoriasCartaDois++;
        } else {
            printf("A população de %s é igual a população de %s.\n", nomeCartaUm, nomeCartaDois);
        }
        printf("************************\n");
        break;
    case 2:
        if (areaCartaUm > areaCartaDois) {
        printf("A área de %s é maior que a área de %s.\n", nomeCartaUm, nomeCartaDois);
        vitoriasCartaUm++;
        } else if (areaCartaUm < areaCartaDois) {
            printf("A área de %s é maior que a área de %s.\n", nomeCartaDois, nomeCartaUm);
            vitoriasCartaDois++;
        } else {
            printf("A área de %s é igual a área de %s.\n", nomeCartaUm, nomeCartaDois);
        }
        printf("************************\n");
        break;
    case 3:
        if (pibCartaUm > pibCartaDois) {
        printf("O PIB de %s é maior que o PIB de %s.\n", nomeCartaUm, nomeCartaDois);
        vitoriasCartaUm++;
        } else if (pibCartaUm < pibCartaDois) {
            printf("O PIB de %s é maior que o PIB de %s.\n", nomeCartaDois, nomeCartaUm);
            vitoriasCartaDois++;
        } else {
            printf("O PIB de %s é igual ao PIB de %s.\n", nomeCartaUm, nomeCartaDois);
        }
        printf("************************\n");
        break;
    case 4:
        if (pibPerCapitaCartaUm > pibPerCapitaCartaDois) {
        printf("O PIB per capita de %s é maior que o PIB per capita de %s.\n", nomeCartaUm, nomeCartaDois);
        vitoriasCartaUm++;
        } else if (pibPerCapitaCartaUm < pibPerCapitaCartaDois) {
            printf("O PIB per capita de %s é maior que o PIB per capita de %s.\n", nomeCartaDois, nomeCartaUm);
            vitoriasCartaDois++;
        } else {
            printf("O PIB per capita de %s é igual ao PIB per capita de %s.\n", nomeCartaUm, nomeCartaDois);
        }
        printf("************************\n");
        break;
    case 5:
        if (densidadePopulacionalCartaUm < densidadePopulacionalCartaDois) {
        printf("A densidade populacional de %s é menor que a densidade de %s.\n", nomeCartaUm, nomeCartaDois);
        vitoriasCartaUm++;
        } else if (densidadePopulacionalCartaUm > densidadePopulacionalCartaDois) {
            printf("A densidade populacional de %s é menor que a densidade de %s.\n", nomeCartaDois, nomeCartaUm);
            vitoriasCartaDois++;
        } else {
            printf("O PIB per capita de %s é igual ao PIB per capita de %s.\n", nomeCartaUm, nomeCartaDois);
        }
        printf("************************\n");
        break;
    case 6:
        printf("Saindo do jogo...]\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    if (vitoriasCartaUm > vitoriasCartaDois) {
        printf("A carta Um (%s) foi a vencedora!\n", nomeCartaUm);
    } else {
        if (vitoriasCartaDois > vitoriasCartaUm) {
            printf("A carta Dois (%s) foi a vencedora!\n", nomeCartaDois);
        } else {
            printf("Houve um empate!\n");
        }
    }

    return 0;
}
