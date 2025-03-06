#include <stdio.h>

int main() {
   //Incluindo variaves nas cartas 1 e 2

    char Estado1, Estado2;
    string  codigo1, codigo2;
    string cidade1, cidade2;
    int numero_de_pontos_turisticos1,numero_de_pontos_turisticos2, populacao1, populacao2;
    float area_km1, pib1, area_km2, pib2, densidade1, densidade2, pib_percapita1, pib_percapta2;
    
   //solicitando dados da carta 1

    printf("insira as informacoes da carta 1: .\n Estado: ");
    scanf("%c",&Estado1);

    printf("Codigo da carta: \n");
    scanf("%s",&codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Populacao: .\n");
    scanf("%d", &populacao1);

    printf("Area em Quilometros quadrados: \n");
    scanf("%f", &area_km1);

    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("Numeros de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    //solicitando dados da carta 2
    
   printf("insira as informacoes da carta 2: .\n Estado: ");
    scanf("%c",&Estado2);

    printf("Codigo da carta: \n");
    scanf("%s",&codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Populacao: .\n");
    scanf("%d", &populacao2);

    printf("Area em Quilometros quadrados: \n");
    scanf("%f", &area_km2);

    printf("Informe o PIB: \n");
    scanf("%f", &pib2);

    printf("Numeros de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    return 0;
}
