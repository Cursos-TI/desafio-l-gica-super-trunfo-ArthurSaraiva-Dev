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
   int opcao1, opcao2, resultado1, resultado2;
   
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

   // utilizando o switch para realizar a primeira comparação

   switch (opcao1){
   case 1:
        printf("Você escolheu a comparação por População primeiramente!\n");
        resultado1 = populacaoA > populacaoB ? 1 : 0;
    break;
   case 2:
        printf("Você escolheu a comparação por Área primeiramente!\n");
        resultado1 = areaA > areaB ? 1 : 0;
    break;
   case 3:
        printf("Você escolheu a comparação por PIB primeiramente!\n");
        resultado1 = pibA > pibB ? 1 : 0;
    break;
   case 4:
        printf("Você escolheu a comparação por Pontos Turísticos primeiramente!\n");
        resultado1 = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
    break;
   case 5:
        printf("Você escolheu a comparação por Densidade Populacional primeiramente!\n");
        resultado1 = densidadePop1 < densidadePop2 ? 1 : 0;
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

   // Escolhendo a segunda comparação
   printf("*** Escolha o segundo atributo para comparação: ***\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos Turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. Sair.\n");

   printf("Digite sua opção: \n");
   scanf("%d", &opcao2);

    // utilizando o switch para realizar a segunda comparação porém verificando se o atributo escolhido é válido.
    if (opcao1 == opcao2)
    {
        printf("Você escolheu os mesmos atributos para a comparação!\n");
    }else{
        switch (opcao2){
            case 1:
                 printf("Você escolheu a comparação por População segundamente!\n");
                 resultado2 = populacaoA > populacaoB ? 1 : 0;
             break;
            case 2:
                 printf("Você escolheu a comparação por Área segundamente!\n");
                 resultado2 = areaA > areaB ? 1 : 0;
             break;
            case 3:
                 printf("Você escolheu a comparação por PIB segundamente!\n");
                 resultado2 = pibA > pibB ? 1 : 0;
             break;
            case 4:
                 printf("Você escolheu a comparação por Pontos Turísticos segundamente!\n");
                 resultado2 = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
             break;
            case 5:
                 printf("Você escolheu a comparação por Densidade Populacional segundamente!\n");
                 resultado2 = densidadePop1 < densidadePop2 ? 1 : 0;
             break;
            case 6:
                 printf("Saindo...\n");
             break;
         
            default:
                 printf("Opção Inválida, tente novamente.");
             break;
            }
    }
    
    // Exibindo o resultado da comparação

    if(resultado1 == 1 && resultado2 == 1){
        printf("VOCÊ GANHOU!!!\n");
    }else if(resultado1 != resultado2){
        printf("VOCÊ EMPATOU!!!");
    }else{
        printf("Você perdeu!!!");
    }

   

}