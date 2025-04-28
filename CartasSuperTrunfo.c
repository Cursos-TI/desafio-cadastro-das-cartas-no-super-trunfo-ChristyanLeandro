#include <stdio.h>

int main() {
   //Incluindo variaves nas cartas 1 e 2

    char Estado1, Estado2;
    char  codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int numero_de_pontos_turisticos1,numero_de_pontos_turisticos2, populacao1, populacao2;
    float area_km1, pib1, area_km2, pib2, densidade1, densidade2,pib_percapita1, pib_percapita2; 
    float superpoder1, superpoder2;

   //solicitando dados da carta 1

    printf("insira as informacoes da carta 1: .\n Estado: ");
    scanf("%c",&Estado1);

    printf("Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    fgets(cidade1, 50, stdin);

    printf("Populacao: .\n");
    scanf("%d", &populacao1);

    printf("Area em Quilometros quadrados: \n");
    scanf("%f", &area_km1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Numeros de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);


    //solicitando dados da carta 2
    
   printf("insira as informacoes da carta 2: .\n Estado: \n");
    scanf("%c",&Estado2);

    printf("Codigo da carta: \n");
    scanf("%s",&codigo2);

    printf("Nome da cidade: \n");
    fgets(cidade2,50, stdin);

    printf("Populacao: .\n");
    scanf("%d", &populacao2);

    printf("Area em Quilometros quadrados: \n");
    scanf("%f", &area_km2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Numeros de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

   //Incluindo variáveis de cálculo densidade e pib per capita e super poder

   densidade1 = populacao1 / area_km1;
   pib_percapita1 = (pib1 * 1000000000.0) / populacao1;

   densidade2 = populacao2 / area_km2;
   pib_percapita2 = (pib2 * 1000000000.0) / populacao2;

   superpoder1 = populacao1 + area_km1 + pib1 + numero_de_pontos_turisticos1 + pib_percapita1 + 1/densidade1;
   superpoder2 = populacao2 + area_km2 + pib2 + numero_de_pontos_turisticos2 + pib_percapita2 + 1/densidade2; 

   // Resultado das Comparações dos Dados as cartas
   
   printf("Populacao A > Populacao B: %d \n", populacao1 > populacao2);

   printf("Area em Quilometros Quandrados A > Area em Quilometros Quandrados B: %f", area_km1 > area_km2);

   printf("PIB A > PIB B: %f \n", pib1 > pib2);

   printf("Numero de Pontos Turisticos A > Numero de Pontos Turisticos B: %d \n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);

   printf ("PIB Per Capita A > PIB Per Capita B: %f \n", pib_percapita1 > pib_percapita2);

   printf ("Densidade A > Densidade B: %f \n", densidade1 > densidade2);

   printf("Super Poder A > Super Poder B: %u \n", superpoder1 > superpoder2);
    return 0;
}
