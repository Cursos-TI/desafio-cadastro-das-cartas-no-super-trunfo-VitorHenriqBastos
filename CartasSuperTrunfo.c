#include <stdio.h>
#include <string.h>


int main() {
    
    //Declarando as variáveis
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[20], cidade2[20];
    int pontos_turisticos1, pontos_turisticos2, opcao;
    unsigned long int populacao1, populacao2;
    float area1, area2, densidade1, densidade2, capita1, capita2, superpoder1, superpoder2;
    double pib1, pib2;


    //Informações da Carta 1
    printf("Vamos começar o jogo com as informações da CARTA 1: \n");

    printf("Informe uma letra de 'A' a 'H' para identificar o estado : \n");
    scanf(" %c", &estado1);

    printf("Informe o código da carta, precisa conter a letra do estado seguida de um número de 01 a 04 (ex:A01, B03) \n");
    scanf("%s", codigo_carta1);

    printf("Informe o Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Informe qual é o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%lf", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos1);
    
    //cálculo densidade populacional 1:
    densidade1 = (float) populacao1 / area1;

    //cálculo PIB per Capita 1:
    capita1 = (float) pib1 / populacao1;

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
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Informe qual é o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%lf", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos2);

     //cálculo densidade populacional 2:
    densidade2 = (float) populacao2 / area2;
    
    //cálculo PIB per Capita 2:
    capita2 = (float) pib2 / populacao2;

    //cálculo superpoder
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + capita1 + (1.0 / densidade1);
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + capita2 + (1.0 / densidade2);

    printf("\n\n");
    //Printando as informações das cartas

    printf("CARTA 1: \n");

    printf("Estado: %c\n ", estado1);
    printf("Código: %s\n ", codigo_carta1);
    printf("Nome da Cidade: %s\n ", cidade1);
    printf("População: %lu\n ", populacao1);
    printf("Área: %.3f km² \n ", area1);
    printf("PIB: R$ %.2f\n ", pib1);
    printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos1);
    printf("A Densidade populacional é: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", capita1);
    printf("Super Poder %.2f\n ", superpoder1);
    
    printf("\n\n");
    printf("CARTA 2: \n");

    printf("Estado: %c\n ", estado2);
    printf("Código: %s\n ", codigo_carta2);
    printf("Nome da Cidade: %s\n ", cidade2);
    printf("População: %lu\n ", populacao2);
    printf("Área: %.3f km² \n ", area2);
    printf("PIB: R$ %.2f\n ", pib2);
    printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos2);
    printf("A Densidade populacional é: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", capita2);
    printf("Super Poder %.2f\n ", superpoder2);

    printf("\n\n");

    //Comparação das CARTAS
    printf("COMPARAÇÃO DAS CARTAS, QUANDO O RESULTADO FOR 1 A 'CARTA 1' GANHOU, QUANDO APARECER 0 A 'CARTA 2' GANHOU. \n");
    printf("População: %d\n ", populacao1 > populacao2);
    printf("Área; %d\n ", area1 > area2);
    printf("PIB: %d\n ", pib1 > pib2);
    printf("Ponto Turísticos: %d\n ", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: %d\n ", densidade1 < densidade2);
    printf("PIB per Capita: %d\n ", capita1 > capita2);
    printf("Super Poder: %d\n ", superpoder1 > superpoder2);

    //Comparação das CARTAS COM IF E ELSE
    /*printf("Comparação das cartas Atributo: POPULAÇÃO: \n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2)
    {
        printf("A carta 1 - %s VENCEU!\n", cidade1);
    }
    
    else if (populacao1 < populacao2)
    {
        printf("A Carta 2 - %s VENCEU!\n", cidade2);
    }
    
    else{
        printf("Houve um empate.\n");
    }*/
    
    printf("\n\n");

    //Menu de comparação das cartas
    printf("Escolha o atributo para ser comparado: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: \n");
    scanf("%d", &opcao);

    printf("\n\n");
    switch (opcao)
    {
    case 1: //População
        printf("Comparando a População: \n");
        printf("Carta 1 - %s: %lu | Carta 2 - %s: %lu \n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2)
            {
                printf("A carta 1 - %s ganhou\n", cidade1);
            }

            else if (populacao1 < populacao2)
            {
                printf("A carta 2 - %s ganhou\n", cidade2);
            }

            else{
                printf("Houve um empate\n");
            }
            
            
        break;
    case 2: //Área
        printf("Comparando a Área: \n");
        printf("Carta 1 - %s: %.2f | Carta 2 - %s: %.2f \n", cidade1, area1, cidade2, area2);
            if (area1 > area2)
            {
                printf("A carta 1 - %s ganhou\n", cidade1);
            }

            else if (area1 < area2)
            {
                printf("A carta 2 - %s ganhou\n", cidade2);
            }

            else{
                printf("Houve um empate\n");
            }
            
            
        break;
    
    case 3: //PIB
        printf("Comparando o PIB: \n");
        printf("Carta 1 - %s: %.2f | Carta 2 - %s: %.2f \n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2)
            {
                printf("A carta 1 - %s ganhou\n", cidade1);
            }

            else if (pib1 < pib2)
            {
                printf("A carta 2 - %s ganhou\n", cidade2);
            }

            else{
                printf("Houve um empate\n");
            }
            
            
        break;

    case 4: //Pontos turísticos
        printf("Comparando os Pontos Turísticos: \n");
        printf("Carta 1 - %s: %d | Carta 2 - %s: %d \n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("A carta 1 - %s ganhou\n", cidade1);
            }

            else if (pontos_turisticos1 < pontos_turisticos2)
            {
                printf("A carta 2 - %s ganhou\n", cidade2);
            }

            else{
                printf("Houve um empate\n");
            }
            
            
        break;

    case 5: //Densidade demográfica
        printf("Comparando a Densidade demográfica: \n");
        printf("Carta 1 - %s: %.2f | Carta 2 - %s: %.2f \n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2)
            {
                printf("A carta 1 - %s ganhou\n", cidade1);
            }

            else if (densidade1 > densidade2)
            {
                printf("A carta 2 - %s ganhou\n", cidade2);
            }

            else{
                printf("Houve um empate\n");
            }
            
            
        break;
    
    default:
        break;
    }
    
    
    return 0;
}
