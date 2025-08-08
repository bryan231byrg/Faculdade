#include <stdio.h>

int main () {
    //Variaveis da Carta 1
   char Estado1[50], CodigodaCarta1[50], NomedaCidade1[50];
   unsigned long int populacao1;
   int NumPontosTuristicos1;
   float area1, PIB1;
   float densidadepopulacional1;
   float PibperCapita1; 

    //Variaveis da Carta 2
   char Estado2[50], CodigodaCarta2[50], NomedaCidade2[50];
   unsigned long int populacao2;
   int NumPontosTuristicos2;
   float area2, PIB2;
   float densidadepopulacional2;
   float PibperCapita2;

   //Entrada de Dados Carta 1

   printf ("Olá, por favor preencha abaixo os dados da carta 1 e 2!\n\n");

    printf ("Insira o Nome do seu estado: ");
        scanf (" %[^\n]", Estado1);

    printf ("Insira o Código da carta: ");
        scanf (" %[^\n]", CodigodaCarta1);

    printf ("Insira o Nome da sua Cidade: ");
        scanf (" %[^\n]", NomedaCidade1);

    printf ("Insira a população: ");
        scanf ("%lu", &populacao1);

    printf ("Insira a área: ");
        scanf ("%f", &area1);

    printf ("Insira o PIB: ");
        scanf ("%f", &PIB1);

    printf ("Insira a quantidade de pontos turisticos: ");
        scanf ("%d", &NumPontosTuristicos1);

    //Entrada de Dados Carta 1

   printf ("Agradeçemos o cadastro da Carta 1!\n Agora por favor faça o mesmo para a carta 2!\n\n");

    printf ("Insira o Nome do seu estado: ");
        scanf (" %[^\n]", Estado2);

    printf ("Insira o Código da carta: ");
        scanf (" %[^\n]", CodigodaCarta2);

    printf ("Insira o Nome da sua Cidade: ");
        scanf (" %[^\n]", NomedaCidade2);

    printf ("Insira a população: ");
        scanf ("%lu", &populacao2);

    printf ("Insira a área: ");
        scanf ("%f", &area2);

    printf ("Insira o PIB: ");
        scanf ("%f", &PIB2);

    printf ("Insira a quantidade de pontos turisticos: ");
        scanf ("%d", &NumPontosTuristicos2);

    //Calculo para População em milhões
        populacao1 = populacao1 * 1000000;
        populacao2 = populacao2 * 1000000;

    //Calculo da Densidade Populacional das Cartas 1 e 2
        densidadepopulacional1 = populacao1 / area1;
        densidadepopulacional2 = populacao2 / area2;

    //calculo do PIB per capita das Cartas 1 e 2
        PibperCapita1 = (PIB1 * 1000000000) / populacao1;

        PibperCapita2 = (PIB2 * 1000000000) / populacao2;

    //Saida de Dados da Carta 1
    printf ("Carta 1\n");
    printf ("Estado: %s", Estado1);
    printf ("Código da Carta: %s\n", CodigodaCarta1);
    printf ("Nome da Cidade: %s\n", NomedaCidade1);
    printf ("População: %lu\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f\n", PIB1);
    printf ("Números de Pontos Turisticos: %d\n", NumPontosTuristicos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf ("PIB per capita: %.2f\n\n", PibperCapita1);

    //Saida de Dados da Carta 2
    printf ("Carta 2\n");
    printf ("Estado: %s", Estado2);
    printf ("Código da Carta: %s\n", CodigodaCarta2);
    printf ("Nome da Cidade: %s\n", NomedaCidade2);
    printf ("População: %lu\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f\n", PIB2);
    printf ("Números de Pontos Turisticos: %d\n", NumPontosTuristicos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf ("PIB per capita: %.2f\n\n", PibperCapita2);

    //Mensagem de transição
    printf ("Agora, logo abaixo vai aparecer o resultado dos atributos vencedores!\n\n");

    //Comparação dos atributos
    if (populacao1 > populacao2) {
        printf ("Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else { 
        printf ("Carta 2 (%s) venceu!\n", NomedaCidade2);
    }

    if (area1 > area2) {
        printf ("Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else { 
        printf ("Carta 2 (%s) venceu!\n", NomedaCidade2);
    }

    if (PIB1 > PIB2) {
        printf ("Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else { 
        printf ("Carta 2 (%s) venceu!\n", NomedaCidade2);
    }
    
    if (densidadepopulacional1 < densidadepopulacional2) {
        printf ("Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else { 
        printf ("Carta 2 (%s) venceu!\n", NomedaCidade2);
    }

     if (PibperCapita1 > PibperCapita2) {
        printf ("Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else { 
        printf ("Carta 2 (%s) venceu!\n", NomedaCidade2);
    }
    

    return 0;


}

