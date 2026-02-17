#include <stdio.h>

    int main (){
        //Variaveis da carta 1
        char estado1[50];
        char codigo1[50];
        char cidade1[50];
        int população1;
        float area1;
        float pib1;
        int pontosturistico1;

        //Variaveis da carta 2
        //Variaveis da carta 1 e 2
        char estado2[50];
        char codigo2[50];
        char cidade2[50];
        int população2;
        float area2;
        float pib2;
        int pontosturistico2;
        
        //outras variaveis
        float pibper1, pibper2;
        float densidadep1, densidadep2;

        //Carta 01
        printf("Vamos adicionar as informações da primeira carta!\n");

        printf("Estado: ");
        scanf("%s", &estado1);

        printf("codigo: ");
        scanf("%s", &codigo1);

        printf("cidade: ");
        scanf("%s", &cidade1);

        printf("população: ");
        scanf("%d", &população1);

        printf("área km²: ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%f", &pib1);

        printf("pontos turisticos: ");
        scanf("%d", &pontosturistico1);

        //Carta 02
         printf("Vamos adicionar as informações da segunda carta!\n");

        printf("Estado: ");
        scanf("%s", &estado2);

        printf("codigo: ");
        scanf("%s", &codigo2);

        printf("cidade: ");
        scanf("%s", &cidade2);

        printf("população: ");
        scanf("%d", &população2);

        printf("área km²: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("pontos turisticos: ");
        scanf("%d", &pontosturistico2);

        /*
        Calcular a densidade populacional e o PIB per capita de cada carta
        Densidade populacional = População dividido pela area
        Pib percapita = PIB dividido pela população
        */       
        densidadep1 = população1 / area1;
        densidadep2 = população2 / area2;
        pibper1 = pib1 / população1;
        pibper2 = pib2 / população2;

        //Informações da primeira carta!
        printf("CARTA 01\n");
        printf("Estado: %s\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("população: %d\n", população1);
        printf("Área em Km²: %.1fkm²\n", area1);
        printf("PIB: %.1f\n", pib1);
        printf("Pontos turisticos: %d\n", pontosturistico1);
        printf("densidade populacional: %.2f\n", densidadep1);
        printf("PIB per capita: %.2f\n", pibper1);

        //Informações da segunda carta!
        printf("CARTA 02\n");
        printf("Estado: %s\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("população: %d\n", população2);
        printf("Área em Km²: %.1fkm²\n", area2);
        printf("PIB: %.1f\n", pib2);
        printf("Pontos turisticos: %d\n", pontosturistico2);
        printf("densidade populacional: %.2f\n", densidadep2);
        printf("PIB per capita: %.2f\n", pibper2);

        return 0;
   
    }