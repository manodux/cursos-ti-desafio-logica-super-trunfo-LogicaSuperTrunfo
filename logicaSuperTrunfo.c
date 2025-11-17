#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    //---
    // Decalraçao das variaveis da carta 1

    char estado1;                 // Estado (A-H)
    char codigo1[4];              // Codigo da carta (ex: A01)
    char nomeCidade1[50];          // Nome Da Cidade
    int populaçao1;               // Populaçao 
    float area1;                  // Area em km
    float pib1;                   // PIB
    int pontosTuristicos1;        //  Numero de pontos turisticos

    // -----------------------------------
    // Declaraçao Das variaveis da carta 2
    // -----------------------------------

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populaçao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //---------------------------
    // Entrada de dados da carta 1
    //---------------------------

    printf("Cadastro da carta 1:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c evita problemas de leitura

    printf("Digite o codigo da carta: ");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // le ate encontrar Enter (aceita espaços)a

    printf("Digite a populaçao da cidade: ");
    scanf("%d", &populaçao1);

    printf("Digite a area em km: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
 //---------------------------
    // Entrada de dados da carta 2
    //---------------------------

    printf("Cadastro da carta 2:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2); // espaço antes do %c evita problemas de leitura

    printf("Digite o codigo da carta: ");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // le ate encontrar Enter (aceita espaços)a

    printf("Digite a populaçao da cidade: ");
    scanf("%d", &populaçao2);

    printf("Digite a area em km: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);




 // -------------------------------
    // Saída formatada - Exibição das cartas
    // -------------------------------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
     } else {
         printf("Cidade 2 tem maior população.\n");
     }

     if (Area)

/*


   %d: Imprime um inteiro no formato decimal.
   %i: Equeivalente a %d
   %f: imrpime um numero de ponto flutuante no formato padrao.
   %e: imprime um numero de ponto flutante na notaçao cientifica.
   %c: imrpime um unico caractere
   %s: imrpime uma cadeia (string) de caracteres
*/













} 
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

