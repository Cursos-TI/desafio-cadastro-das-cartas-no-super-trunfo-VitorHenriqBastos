#include <stdio.h>


int main() {
    
    //Declarando as variáveis
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;


    //Informações da Carta 1
    printf("Vamos começar o jogo com as informações da CARTA 1: \n");

    printf("Informe uma letra de 'A' a 'H' para identificar o estado : \n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta, precisa conter a letra do estado seguida de um número de 01 a 04 (ex:A01, B03) \n");
    scanf("%s", codigo_carta1);

    printf("Informe o Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Informe qual é o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos1);
    

    printf("\n\n");
    //Informações da Carta 2
    
    printf("Agora as informações da CARTA 2: \n");

    printf("Informe uma letra de 'A' a 'H' para identificar o estado : \n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta, precisa conter a letra do estado seguida de um número de 01 a 04 (ex:A01, B03) \n");
    scanf("%s", codigo_carta2);

    printf("Informe o Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Informe qual é o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos2);
    

    printf("\n\n");
    //Printando as informações das cartas

    printf("CARTA 1: \n");

    printf("Estado: %c\n ", estado1);
    printf("Código: %s\n ", codigo_carta1);
    printf("Nome da Cidade: %s\n ", cidade1);
    printf("População: %d\n ", populacao1);
    printf("Área: %.3f km² \n ", area1);
    printf("PIB: %.2f\n ", pib1);
    printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos1);
    
    printf("\n\n");
    printf("CARTA 2: \n");

    printf("Estado: %c\n ", estado2);
    printf("Código: %s\n ", codigo_carta2);
    printf("Nome da Cidade: %s\n ", cidade2);
    printf("População: %d\n ", populacao2);
    printf("Área: %f km² \n ", area2);
    printf("PIB: %f\n ", pib2);
    printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos2);
    

    return 0;
}
