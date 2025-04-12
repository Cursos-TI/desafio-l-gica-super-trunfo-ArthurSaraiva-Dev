#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     
    // A captura dos dados neste desafio não foi considerada para dar ênfase no intuito do exercício, o menu de comparação.
    //Primeira Carta:
     char estadoA[50] = "RioDeJaneiro";
     char codigoA[10]= "A01";
     char nomeA[50] = "Brasil";
     unsigned long int populacaoA = 6211223;
     float areaA = 1200330;
     float pibA = 37784146486.58;
     int pontos_turisticosA = 50;
     
     //Segunda Carta:
     char estadoB[50] = "SãoPaulo";
     char codigoB[10] = "B03";
     char nomeB[50] = "Brasil";
     unsigned long int populacaoB = 12400000;
     float areaB = 248219485;
     float pibB = 343634435413.40;
     int pontos_turisticosB = 40;
    
    
    
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
    //Nível Avetureiro. 
    int opcao;
    char opcaoPOP[50] = "População";
    char opcaoAREA[50] = "Área";
    char opcaoPIB[50] = "PIB";
    char opcaoPontos_Turisticos[50] = "Pontos Turísticos";
    char opcaoDensiDemo[50] = "Densidade Demográfica";
    
    printf("*** Escolha um dos atributos para a batalha de cartas ***\n");
    printf("1. Regra\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
        break;
    case 2:
        if(populacaoA > populacaoB){
            printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %lu VS Carta 2 - %lu\n*** Carta 1 VENCEU! ***", estadoA, estadoB, opcaoPOP, populacaoA, populacaoB);
        }else if(populacaoA < populacaoB){
            printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %lu VS Carta 2 - %lu\n*** Carta 2 VENCEU! ***", estadoA, estadoB, opcaoPOP, populacaoA, populacaoB);
        }else{
            printf("*** EMPATE! ***");
        }
        break;
    case 3:
    if(areaA > areaB){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %f VS Carta 2 - %f\n*** Carta 1 VENCEU! ***", estadoA, estadoB, opcaoAREA, areaA, areaB);
    }else if(areaA < areaB){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %f VS Carta 2 - %f\n*** Carta 2 VENCEU! ***", estadoA, estadoB, opcaoAREA, areaA, areaB);
    }else{
        printf("*** EMPATE! ***");
    }
        break;
    case 4:
    if(pibA > pibB){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %f VS Carta 2 - %f\n*** Carta 1 VENCEU! ***", estadoA, estadoB, opcaoPIB, pibA, pibB);
    }else if(pibA < pibB){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %f VS Carta 2 - %f\n*** Carta 2 VENCEU! ***", estadoA, estadoB, opcaoPIB, pibA, pibB);
    }else{
        printf("*** EMPATE! ***");
    }
        break;
    case 5:
    if(pontos_turisticosA > pontos_turisticosB){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %d VS Carta 2 - %d\n*** Carta 1 VENCEU! ***", estadoA, estadoB, opcaoPontos_Turisticos, pontos_turisticosA, pontos_turisticosB);
    }else if(pontos_turisticosA < pontos_turisticosB){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %d VS Carta 2 - %d\n*** Carta 2 VENCEU! ***", estadoA, estadoB, opcaoPontos_Turisticos, pontos_turisticosA, pontos_turisticosB);
    }else{
        printf("*** EMPATE! ***");
    }
        break;
    case 6:
    if(densidadePop1 < densidadePop2){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %f VS Carta 2 - %f\n*** Carta 1 VENCEU! ***", estadoA, estadoB, opcaoDensiDemo, densidadePop1, densidadePop2);
    }else if(densidadePop1 > densidadePop2){
        printf("1. Nome 1: %s - Nome 2: %s\n2. Atributo usado: %s\n3. Valores dos atributos: Carta 1 - %f VS Carta 2 - %f\n*** Carta 2 VENCEU! ***", estadoA, estadoB, opcaoDensiDemo, densidadePop1, densidadePop2);
    }else{
        printf("*** EMPATE! ***");
    }
        break;
    default:
        printf("Opção Inválida!");
        break;
    }
}