#include <stdio.h>

int main() {

    char estado;
    char codigo [3]; 
    char cidade [10];
    int populacao;
    float area; 
    float pib;
    int qtdPontosTuristicos;

    printf("Informe o estado da carta 1: \n");
    scanf("%c", &estado); 

    printf("Informe o codigo da carta 1: \n");
    scanf("%3s", codigo); 

    printf("Informe a cidade da carta 1: \n");
    scanf(" %[^\n]", cidade); // Lê a linha inteira com espaços

    printf("Informe a populacao da carta : \n");
    scanf("%d", &populacao); 
    
    printf("Carta 1:\n");
    printf("Estado informado: %c\n", estado);
    printf("Codigo informado: %s\n", codigo);            
    printf("Cidade informada: %s\n", cidade);            
    printf("Populacao informada: %d\n", populacao);  

    return 0;
}
