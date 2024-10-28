#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char CODIGO [4];
    char NOME_DA_CIDADE[50];
    int POPULACAO;
    float AREA;
    int PIB;
    int PONTOS_TURSTICOS;
    float DENSIDADE_POPULACIONAL;
    float PIB_PER_CAPITA;

    printf("DESAFIO SUPER TRUNFO - CADASTRO DE CARTAS\n");

    printf (" QUAL O CODIGO DA CIDADE\n"); // EXEMPLO: A01, A02, A03, B01, ETC...
    scanf ("%s", &CODIGO);

    printf (" QUAL O NOME DA CIDADE QUE VC VAI JOGAR\n");
    scanf ("%s", &NOME_DA_CIDADE);

    printf (" QUAL A POPULACAO DA CIDADE \n");
    scanf ("%d", &POPULACAO);
    
    printf (" QUAL A AREA DA CIDADE (EM KM)\n");
    scanf ("%f", &AREA);

    printf (" QUAL O PIB DA CIDADE \n");
    scanf ("%d", &PIB);

    printf (" QUANTOS PONTOS TURISTICOS TEM SUA CIDADE\n");
    scanf ("%d", &PONTOS_TURSTICOS);

    DENSIDADE_POPULACIONAL = POPULACAO / AREA;
    PIB_PER_CAPITA = PIB / POPULACAO;


    printf ("CODIGO DA CIDADE: %s\n", CODIGO);
    printf ("NOME DA CIDADE: %s\n", NOME_DA_CIDADE);
    printf ("POPULACAO DA CIDADE: %d pessoas\n", POPULACAO);
    printf ("AREA TOTAL DA CIDADE: %.2fkm\n", AREA);
    printf ("PIB : %d \n", PIB);
    printf ("PONTOS TURISTICOS: %d\n", PONTOS_TURSTICOS);

    printf(" A DENSIDADE POPULACIONAL É: %2.f \n ", DENSIDADE_POPULACIONAL);
    printf(" O PIB PER CAPITA É: %2.f \n", PIB_PER_CAPITA);

    return 0;
}