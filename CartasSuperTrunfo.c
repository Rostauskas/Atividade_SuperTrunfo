#include <stdio.h>

int main() {

    char estado [1];
    char codigo [4]; 
    char cidade [10];
    int populacao;
    float area; 
    float pib;
    int qtdPontosTuristicos;

    printf("Informe o estado da carta 1: \n");
    scanf(" %s", estado); 

    printf("Informe o codigo da carta 1: \n");
    scanf(" %3s", codigo); 

    printf("Informe a cidade da carta 1: \n");
    scanf(" %[^\n]", cidade);

    printf("Informe a populacao da carta 1: \n");
    scanf(" %d", &populacao); 

    printf("Informe a area da carta 1: \n");
    scanf(" %f", &area);

    printf("Informe o pib da carta 1: \n");
    scanf(" %f", &pib);

    printf("Informe a quantidade de pontos turisticos da carta 1: \n");
    scanf(" %d", &qtdPontosTuristicos); 

    printf("\n");

    
    printf("Carta 1:\n");
    printf("Estado informado: %s\n", estado);
    printf("Codigo informado: %s\n", codigo);            
    printf("Cidade informada: %s\n", cidade);            
    printf("Populacao informada: %d\n", populacao);
    printf("Area informada: %.2f\n", area);
    printf("PIB informada: %.2f\n", pib);
    printf("Quantidade de Pontos Turisticos: %d\n", qtdPontosTuristicos);
    printf("\n\n");

    // SEGUNDA CARTA DO SUPER TRUNFO

    char Estado [1];
    char Codigo [4]; 
    char Cidade [10];
    int Populacao;
    float Area; 
    float Pib;
    int QtdPontosTuristicos;

    printf("Informe o estado da carta 2: \n");
    scanf(" %s", estado); 

    printf("Informe o codigo da carta 2: \n");
    scanf(" %3s", codigo); 

    printf("Informe a cidade da carta 2: \n");
    scanf(" %[^\n]", cidade);

    printf("Informe a populacao da carta 2: \n");
    scanf(" %d", &populacao); 

    printf("Informe a area da carta 2: \n");
    scanf(" %f", &area);

    printf("Informe o pib da carta 2: \n");
    scanf(" %f", &pib);

    printf("Informe a quantidade de pontos turisticos da carta 2: \n");
    scanf(" %d", &qtdPontosTuristicos); 

    
    printf("Carta 2:\n");
    printf("Estado informado: %s\n", estado);
    printf("Codigo informado: %s\n", codigo);            
    printf("Cidade informada: %s\n", cidade);            
    printf("Populacao informada: %d\n", populacao);
    printf("Area informada: %.2f\n", area);
    printf("PIB informada: %.2f\n", pib);
    printf("Quantidade de Pontos Turisticos: %d\n", qtdPontosTuristicos);

    return 0;
}
