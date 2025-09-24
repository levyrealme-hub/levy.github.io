#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Criacao das cartas

struct Carta1 {
    char Estado[20];
    char Codigo[10];
    char Cidade[20];
    int Populacao;
    float Area;
    float Pib;
    int Pontos_Turisticos;
};

struct Carta2 {
    char Estado[20];
    char Codigo[10];
    char Cidade[20];
    int Populacao;
    float Area;
    float Pib;
    int Pontos_Turisticos;
};

int main() {
    // Cartas Estruturadas

    struct Carta1 carta1;
    
    strcpy(carta1.Estado, "Para");
    strcpy(carta1.Codigo, "A01");
    strcpy(carta1.Cidade, "Belem");
    carta1.Populacao = 1398531;
    carta1.Area = 1059.458;
    carta1.Pib = 30835763450.0;
    carta1.Pontos_Turisticos = 8;

    struct Carta2 carta2;
    strcpy(carta2.Estado, "Amazonas");
    strcpy(carta2.Codigo, "A02");
    strcpy(carta2.Cidade, "Manaus");
    carta2.Populacao = 2279686;
    carta2.Area = 11401.092;
    carta2.Pib = 104283902300.0;
    carta2.Pontos_Turisticos = 10;

    // Calculo de Densidade populacional, PIB per capita e outros atributos podem ser adicionados aqui
    float densidade1 = carta1.Populacao / carta1.Area;
    float densidade2 = carta2.Populacao / carta2.Area;
    float pib_per_capita1 = carta1.Pib / carta1.Populacao;
    float pib_per_capita2 = carta2.Pib / carta2.Populacao;

    // Escolha de atributos comparação if-else
    int atributo_escolhido = 5; // Exemplo: 1 para Populacao, 2 para Area, etc.

    printf("=== COMPARACAO ===\n");

    if (atributo_escolhido == 1) {
        printf("Atributo Escolhido: Populacao\n");
        printf("Carta 1 (%s): %d habitantes\n", carta1.Cidade, carta1.Populacao);
        printf("Carta 2 (%s): %d habitantes\n", carta2.Cidade, carta2.Populacao);
        if (carta1.Populacao > carta2.Populacao) {
            printf("Carta 1 (%s) venceu!\n", carta1.Cidade);
        } else if (carta1.Populacao < carta2.Populacao) {
            printf("Carta 2 (%s) venceu!\n", carta2.Cidade);
        } else {
            printf("Empate!\n");
        }

    } else if (atributo_escolhido == 2) {
        printf("Atributo Escolhido: Area\n");
        printf("Carta 1 (%s): %.2f km²\n", carta1.Cidade, carta1.Area);
        printf("Carta 2 (%s): %.2f km²\n", carta2.Cidade, carta2.Area);
        if (carta1.Area > carta2.Area) {
            printf("Carta 1 (%s) venceu!\n", carta1.Cidade);
        } else if (carta1.Area < carta2.Area) {
            printf("Carta 2 (%s) venceu!\n", carta2.Cidade);
        } else {
            printf("Empate!\n");
        }
    } else if (atributo_escolhido == 3) {
        printf("Atributo Escolhido: PIB\n");
        printf("Carta 1 (%s): %.2f\n", carta1.Cidade, carta1.Pib);
        printf("Carta 2 (%s): %.2f\n", carta2.Cidade, carta2.Pib);
        if (carta1.Pib > carta2.Pib) {
            printf("Carta 1 (%s) venceu!\n", carta1.Cidade);
        } else if (carta1.Pib < carta2.Pib) {
            printf("Carta 2 (%s) venceu!\n", carta2.Cidade);
        } else {
            printf("Empate!\n");
        }
    } else if (atributo_escolhido == 4) {
        printf("Atributo Escolhido: Pontos Turisticos\n");
        printf("Carta 1 (%s): %d pontos\n", carta1.Cidade, carta1.Pontos_Turisticos);
        printf("Carta 2 (%s): %d pontos\n", carta2.Cidade, carta2.Pontos_Turisticos);
        if (carta1.Pontos_Turisticos > carta2.Pontos_Turisticos) {
            printf("Carta 1 (%s) venceu!\n", carta1.Cidade);
        } else if (carta1.Pontos_Turisticos < carta2.Pontos_Turisticos) {
            printf("Carta 2 (%s) venceu!\n", carta2.Cidade);
        } else {
            printf("Empate!\n");
        }
    } else if (atributo_escolhido == 5) {
        printf("Atributo Escolhido: Densidade Populacional\n\n");
        printf("Carta 1 (%s): %.2f habitantes/km²\n", carta1.Cidade, densidade1);
        printf("Carta 2 (%s): %.2f habitantes/km²\n", carta2.Cidade, densidade2);
        printf("\n");
        if (densidade1 < densidade2) {
            printf("Carta 1 (%s) venceu!\n", carta1.Cidade);
        } else if (densidade1 > densidade2) {
            printf("Carta 2 (%s) venceu!\n", carta2.Cidade);
        } else {
            printf("Empate!\n");
        }
    } else if (atributo_escolhido == 6) {
        printf("Atributo Escolhido: PIB per Capita\n\n");
        printf("Carta 1 (%s): %.2f\n", carta1.Cidade, pib_per_capita1);
        printf("Carta 2 (%s): %.2f\n", carta2.Cidade, pib_per_capita2);
        printf("\n");
        if (pib_per_capita1 > pib_per_capita2) {
            printf("Carta 1 (%s) venceu!\n", carta1.Cidade);
        } else if (pib_per_capita1 < pib_per_capita2) {
            printf("Carta 2 (%s) venceu!\n", carta2.Cidade);
        } else {
            printf("Empate!\n");
        }
    } else {
        printf("Atributo invalido.\n");
    }

    return 0;
}