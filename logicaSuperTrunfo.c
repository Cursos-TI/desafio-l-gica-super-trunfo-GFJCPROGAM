#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado01[3];
    char carta01[20], cidade01[50];
    int populacao01;
    float area01, pib01, DP01, PIBPC01;
    int turistico01;

    char estado02[3], carta02[20], cidade02[50];
    int populacao02;
    float area02, pib02, DP02, PIBPC02;
    int turistico02;
    int cidadeVencedora;
    
    // Cadastro das Cartas:
    // ***********CARTA 01*****************
    printf("CARTA 1:\n");
    
    printf("Digite o Estado:\n");
    scanf("%s", &estado01);
    
    printf("Digite o Codigo da Carta:\n");
    scanf("%s", &carta01);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", &cidade01);
    
    printf("Digite a Quantidade Populacional:\n");
    scanf("%d", &populacao01);
    
    printf("Digite a Área em km²:\n");
    scanf("%f", &area01);

    printf("Digite o PIB:\n");
    scanf("%f", &pib01);

    printf("Digite a Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico01);
    printf("\n");
    
    // Cálculo da Densidade Populacional da Carta1
    DP01 = populacao01 / area01;

    // Cálculo do Pib per Capita da Carta1
    PIBPC01 = (pib01 * 1000000000) / (float)populacao01;
    
    // ********CARTA 02********
    printf("CARTA 2:\n");
    
    printf("Digite o Estado:\n");
    scanf("%s", &estado02);
    
    printf("Digite o Codigo da Carta:\n");
    scanf("%s", &carta02);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", &cidade02);
    
    printf("Digite a Quantidade Populacional:\n");
    scanf("%d", &populacao02);
 
    printf("Digite a Área em km²:\n");
    scanf("%f", &area02);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib02);
    
    printf("Digite a Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico02);
    printf("\n");


     // Cálculo da Densidade Populacional da Carta2
     DP02 = populacao02 / area02;

     // Cálculo do PIB per Capita da Carta2
     PIBPC02 = (pib02 * 1000000000) / (float)populacao02;
 
 
     // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    if (populacao01 >= populacao02) {
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
