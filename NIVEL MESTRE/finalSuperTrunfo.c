#include <stdio.h>

int main(){
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     
    // A captura dos dados neste desafio não foi considerada para dar ênfase no intuito do desafio.
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
   // Nível Mestre. 
   
   // Declarando variáveis
   int opcao1, opcao2, resultado1, resultado2, resultado_soma;
   double soma1, soma2;
   
   // Menu inicial de comparação
   printf("*** Comparação de atributos! ***\n");
   printf("*** Escolha o primero dos atributos para comparação: ***\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos Turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. Regras\n");
   printf("7. Sair.\n");

   printf("Digite sua opção: \n");
   scanf("%d", &opcao1);

   // Utilizando o switch para realizar as comparações:

   switch (opcao1){
   case 1:
        printf("*** Escolha o segundo atributo para comparação: ***\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");   
        
        printf("Digite sua opção: \n");
        scanf("%d", &opcao2);
        // O primeiro switch encadeia com o segundo switch:
        switch (opcao2)
        {
        case 2:
            //somando para obter o vencedor
            soma1 = populacaoA + areaA;
            soma2 = populacaoB + areaB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // Exibindo o resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e Área\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, Área- %f -- Carta 2: População- %lu, Área- %f\n", populacaoA, areaA, populacaoB, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e Área\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, Área- %f -- Carta 2: População- %lu, Área- %f\n", populacaoA, areaA, populacaoB, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf\n", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 3:
            //somando para obter o vencedor
            soma1 = populacaoA + pibA;
            soma2 = populacaoB + pibB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // Exibindo o resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, PIB- %f -- Carta 2: População- %lu, PIB- %f\n", populacaoA, pibA, populacaoB, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, PIB- %f -- Carta 2: População- %lu, PIB- %f\n", populacaoA, pibA, populacaoB, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf\n", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 4:
            //somando para obter o vencedor
            soma1 = populacaoA + pontos_turisticosA;
            soma2 = populacaoB + pontos_turisticosB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // Exibindo o resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, Pontos Turísticos- %d -- Carta 2: População- %lu, Pontos Turísticos- %d\n", populacaoA, pontos_turisticosA, populacaoB, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, Pontos Turísticos- %d -- Carta 2: População- %lu, Pontos Turísticos- %d\n", populacaoA, pontos_turisticosA, populacaoB, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 5:
            //somando para obter o vencedor
            soma1 = populacaoA + densidadePop1;
            soma2 = populacaoB + densidadePop2;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // Exibindo o resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, Densidade Populacional- %f -- Carta 2: População- %lu, Densidade Populacional- %f\n", populacaoA, densidadePop1, populacaoB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: População e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: População- %lu, Densidade Populacional- %f -- Carta 2: População- %lu, Densidade Populacional- %f\n", populacaoA, densidadePop1, populacaoB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        default:
            printf("Opção Inválida!");
            break;
        }
    break;
   case 2:
        printf("*** Escolha o primero dos atributos para comparação: ***\n");
        printf("2. População\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");

        printf("Digite sua opção: \n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 2:
            //somando para obter o vencedor
            soma1 = areaA + populacaoA;
            soma2 = areaB + populacaoB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e População\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, População- %lu -- Carta 2: Área- %f, População- %lu\n", areaA, populacaoA, areaB, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e População\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, População- %lu -- Carta 2: Área- %f, População- %lu\n", areaA, populacaoA, areaB, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 3:
            //somando para obter o vencedor
            soma1 = areaA + pibA;
            soma2 = areaB + pibB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, PIB- %f -- Carta 2: Área- %f, PIB- %f\n", areaA, pibA, areaB, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, PIB- %f -- Carta 2: Área- %f, PIB- %f\n", areaA, pibA, areaB, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 4:
            //somando para obter o vencedor
            soma1 = areaA + pontos_turisticosA;
            soma2 = areaB + pontos_turisticosB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, Pontos Turísticos- %d -- Carta 2: Área- %f, Pontos Turísticos- %d\n", areaA, pontos_turisticosA, areaB, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, Pontos Turísticos- %d -- Carta 2: Área- %f, Pontos Turísticos- %d\n", areaA, pontos_turisticosA, areaB, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 5:
            //somando para obter o vencedor
            soma1 = areaA + densidadePop1;
            soma2 = areaB + densidadePop2;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, Densidade Populacional- %f -- Carta 2: Área- %f, Densidade Populacional- %f\n", areaA, densidadePop1, areaB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Área e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: Área- %f, Densidade Populacional- %f -- Carta 2: Área- %f, Densidade Populacional- %f\n", areaA, densidadePop1, areaB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        
        default:
            printf("Opção Inválida!");
            break;
        }
    break;
   case 3:
        printf("*** Escolha o segundo atributo para comparação: ***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pontos Turísticos\n");
        printf("4. Densidade Populacional\n");

        printf("Digite sua opção: \n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            //somando para obter o vencedor
            soma1 = pibA + populacaoA;
            soma2 = pibB + populacaoB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e População\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, População- %lu -- Carta 2: PIB- %f, População- %lu\n", pibA, populacaoA, pibB, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e População\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, População- %lu -- Carta 2: PIB- %f, População- %lu\n", pibA, populacaoA, pibB, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 2:
            //somando para obter o vencedor
            soma1 = pibA + areaA;
            soma2 = pibB + areaB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e Área\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, Área- %f -- Carta 2: PIB- %f, Área- %f\n", pibA, areaA, pibB, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e Área\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, Área- %f -- Carta 2: PIB- %f, Área- %f\n", pibA, areaA, pibB, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 3:
            //somando para obter o vencedor
            soma1 = pibA + pontos_turisticosA;
            soma2 = pibB + pontos_turisticosB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, Pontos Turísticos- %d -- Carta 2: PIB- %f, Pontos Turísticos- %d\n", pibA, pontos_turisticosA, pibB, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, Pontos Turísticos- %d -- Carta 2: PIB- %f, Pontos Turísticos- %d\n", pibA, pontos_turisticosA, pibB, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 4:
            //somando para obter o vencedor
            soma1 = pibA + densidadePop1;
            soma2 = pibB + densidadePop2;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, Densidade Populacional- %f -- Carta 2: PIB- %f, Densidade Populacional- %f\n", pibA, densidadePop1, pibB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: PIB e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: PIB- %f, Densidade Populacional- %f -- Carta 2: PIB- %f, Densidade Populacional- %f\n", pibA, densidadePop1, pibB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        
        default:
            printf("Opção Inválida");
            break;
        }
    break;
   case 4:
        printf("*** Escolha o segundo atributo para comparação: ***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade Populacional\n"); 
        
        printf("Digite sua opção: \n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            //somando para obter o vencedor
            soma1 = pontos_turisticosA + populacaoA;
            soma2 = pontos_turisticosB + populacaoB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e População\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, População- %lu -- Carta 2: Pontos Turísticios- %d, População- %lu\n", pontos_turisticosA, populacaoA, pontos_turisticosB, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e População\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, População- %lu -- Carta 2: Pontos Turísticios- %d, População- %lu\n", pontos_turisticosA, populacaoA, pontos_turisticosB, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 2:
            //somando para obter o vencedor
            soma1 = pontos_turisticosA + areaA;
            soma2 = pontos_turisticosB + areaB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e Área\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, Área- %f -- Carta 2: Pontos Turísticios- %d, Área- %f\n", pontos_turisticosA, areaA, pontos_turisticosB, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e Área\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, Área- %f -- Carta 2: Pontos Turísticios- %d, Área- %f\n", pontos_turisticosA, areaA, pontos_turisticosB, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 3:
            //somando para obter o vencedor
            soma1 = pontos_turisticosA + pibA;
            soma2 = pontos_turisticosB + pibB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, PIB- %f -- Carta 2: Pontos Turísticios- %d, PIB- %f\n", pontos_turisticosA, pibA, pontos_turisticosB, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, PIB- %f -- Carta 2: Pontos Turísticios- %d, PIB- %f\n", pontos_turisticosA, pibA, pontos_turisticosB, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 4:
            //somando para obter o vencedor
            soma1 = pontos_turisticosA + densidadePop1;
            soma2 = pontos_turisticosB + densidadePop2;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, Densidade Populacional- %f -- Carta 2: Pontos Turísticios- %d, Densidade Populacional- %f\n", pontos_turisticosA, densidadePop1, pontos_turisticosB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Pontos Turísticos e Densidade Populacional\n");
                printf("Valores dos Atributos: \nCarta 1: Pontos Turísticios- %d, Densidade Populacional- %f -- Carta 2: Pontos Turísticios- %d, Densidade Populacional- %f\n", pontos_turisticosA, densidadePop1, pontos_turisticosB, densidadePop2);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        
        default:
            printf("Opção Inválida!");
            break;
        }
    break;
   case 5:
        printf("*** Escolha o segundo atributo para comparação: ***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");

        printf("Digite sua opção: \n");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            //somando para obter o vencedor
            soma1 = densidadePop1 + populacaoA;
            soma2 = densidadePop2 + populacaoB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e População\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, População- %lu -- Carta 2: Densidade Populacional- %f, População- %lu\n", densidadePop1, populacaoA, densidadePop2, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e População\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, População- %lu -- Carta 2: Densidade Populacional- %f, População- %lu\n", densidadePop1, populacaoA, densidadePop2, populacaoB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 2:
            //somando para obter o vencedor
            soma1 = densidadePop1 + areaA;
            soma2 = densidadePop2 + areaB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e Área\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, Área- %f -- Carta 2: Densidade Populacional- %f, Área- %f\n", densidadePop1, areaA, densidadePop2, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e Área\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, Área- %f -- Carta 2: Densidade Populacional- %f, Área- %f\n", densidadePop1, areaA, densidadePop2, areaB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 3:
            //somando para obter o vencedor
            soma1 = densidadePop1 + pibA;
            soma2 = densidadePop2 + pibB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, PIB- %f -- Carta 2: Densidade Populacional- %f, PIB- %f\n", densidadePop1, pibA, densidadePop2, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e PIB\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, PIB- %f -- Carta 2: Densidade Populacional- %f, PIB- %f\n", densidadePop1, pibA, densidadePop2, pibB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        case 4:
            //somando para obter o vencedor
            soma1 = densidadePop1 + pontos_turisticosA;
            soma2 = densidadePop2 + pontos_turisticosB;
            //defininco o ganhador com operador ternário
            resultado_soma = soma1 > soma2 ? 1 : 0;
            // exibindo resultado do ganhador
            if(resultado_soma == 1){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, Pontos Turísticos- %d -- Carta 2: Densidade Populacional- %f, Pontos Turísticos- %d\n", densidadePop1, pontos_turisticosA, densidadePop2, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 1 VENCEU!! ***");
            }else if(resultado_soma == 0){
                printf("Carta 1: %s - Carta 2: %s\n", estadoA, estadoB);
                printf("Atributos: Densidade Populacional e Pontos Turísticos\n");
                printf("Valores dos Atributos: \nCarta 1: Densidade Populacional- %f, Pontos Turísticos- %d -- Carta 2: Densidade Populacional- %f, Pontos Turísticos- %d\n", densidadePop1, pontos_turisticosA, densidadePop2, pontos_turisticosB);
                printf("Atributos somados: Carta 1: %lf - Carta 2: %lf", soma1, soma2);
                printf("\n*** CARTA 2 VENCEU!! ***");
            }else{
                printf("\n*** HOUVE UM EMPATE! ***");
            }
            break;
        default:
        printf("Opção Inválida!");
            break;
        }
    break;
   case 6:
        printf("Vence a carta com o maior valor. Com a exceção da Densidade Populacional, onde vence a carta com o menor valor.\n");
    break;
   case 7:
        printf("Saindo...\n");
    break;

   default:
        printf("Opção Inválida, tente novamente.");
    break;
   }

}