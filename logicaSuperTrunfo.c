#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     
    //Primeira Carta:
     char estadoA[50];
     char codigoA[10];
     char nomeA[50];
     // Para o nível mestre foi trocado para "unsigned long int"
     unsigned long int populacaoA;
     float areaA;
     float pibA;
     int pontos_turisticosA;
     
     //Segunda Carta:
     char estadoB[50];
     char codigoB[10];
     char nomeB[50];
     // Para o nível mestre foi trocado para "unsigned long int"
     unsigned long int populacaoB;
     float areaB;
     float pibB;
     int pontos_turisticosB;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    printf("Desafio Cartas Super Trunfo!\n");
    
    // Capturando os dados da primeira carta:
    //inserindo o estado:
    printf("Digite o estado da sua primeira carta (ex: A): \n");
    scanf("%s", estadoA);
    
    //inserindo o código:
    printf("Digite o código da cidade (ex:A01): \n");
    scanf("%s", codigoA);
    
    //inserindo o nome:
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeA);
    
    //inserindo a população:
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacaoA);

    //inserindo a área:
    printf("Digite a área da cidade: \n");
    scanf("%f", &areaA);

    //inserindo o PIB:
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA);

    //inserindo o número de pontos turisticos:
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticosA);

    
    
    // Capturando os dados da segunda carta:
    //inserindo o estado:
    printf("Agora digite o estado da sua segunda carta (ex: B): \n");
    scanf("%s", estadoB);
    
    //inserindo o código:
    printf("Digite o código da cidade (ex:B02): \n");
    scanf("%s", codigoB);
    
    //inserindo o nome:
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeB);
    
    //inserindo a população:
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacaoB);

    //inserindo a área:
    printf("Digite a área da cidade: \n");
    scanf("%f", &areaB);

    //inserindo o PIB:
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibB);

    //inserindo o número de pontos turisticos:
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticosB);
    // Calculando Densidade Populacional e PIB per Capita:
    
    // Primeira Carta:
    float densidadePop1 = populacaoA / areaA;
    float PIBperC1 = pibA / populacaoA;

    // Segunda carta
    float densidadePop2 = populacaoB / areaB;
    float PIBperC2 = pibB / populacaoB;

    // Calculando o super poder:
    // calculo da inversão
    float inversoDensiA = 1 / densidadePop1;
    float inversoDensiB = 1 / densidadePop2;
    
    // calculando propriamente o super poder
    float poderA = populacaoA + areaA + pibA + pontos_turisticosA + inversoDensiA;
    float poderB = populacaoB + areaB + pibB + pontos_turisticosB + inversoDensiB;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // Comparação de um atribulo (desafio novato tema2)
    printf("Comparação das cartas (Atributo: PIB)\n");
    printf("Carta 1- %s (%s): %f\n", nomeA, estadoA, pibA);
    printf("Carta 2- %s (%s): %f\n", nomeB, estadoB, pibB);
    
    if(pibA > pibB){
        printf("Carta 1- %s (%s) venceu!\n", nomeA, estadoA);
    }else {
        printf("Carta 2- %s (%s) venceu!\n", nomeB, estadoB);
    }

    return 0;
}
