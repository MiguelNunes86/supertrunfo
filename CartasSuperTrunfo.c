#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    float area1, area2;
    float PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float PIBCapita1, PIBCapita2;
    unsigned long int populacao1, populacao2;
    float superpoder1, superpoder2;


    printf("Digite a população da cidade 1: ");
    scanf("%lu" , &populacao1);

    printf("Digite a área da cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontos1);

    
    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontos2);

    printf("\n"); 

    densidade1 = populacao1 / area1;
    PIBCapita1 = PIB1 / populacao1;
    
    PIBCapita2 = PIB2 / populacao2;
    densidade2 = populacao2 / area2;

    superpoder1 = (float)populacao1 + area1 + PIB1 + pontos1 + PIBCapita1 + (1.0 / densidade1);
    superpoder2 = (float)populacao2 + area2 + PIB2 + pontos2 + PIBCapita2 + (1.0 / densidade2);

    //exibição dos dados da carta

    printf("Dados da cidade 1\n");
    printf("População da cidade: %lu\n", populacao1);
    printf("Área da cidade: %.2f\n", area1);
    printf("PIB da cidade: %.2f\n", PIB1);
    printf("Pontos turisticos da cidade: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", PIBCapita1);
    printf("Super Poder: %.2f\n", superpoder1);
    printf("\n"); 

    printf("Dados da cidade 2\n");
    printf("População da cidade: %lu\n", populacao2);
    printf("Área da cidade: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Pontos turisticos da cidade: %d\n", pontos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", PIBCapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");

    //COMPARAÇÕES DAS CARTAS

    printf("População: Cidade 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Cidade 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Cidade 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Cidade 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Cidade 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Cidade 1 venceu (%d)\n", PIBCapita1 > PIBCapita2);
    printf("Super Poder: Cidade 1 venceu (%d)\n", superpoder1 > superpoder2);
    

    return 0;
}
