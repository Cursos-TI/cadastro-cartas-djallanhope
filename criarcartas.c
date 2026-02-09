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
        char estado2[50];
        char codigo2[50];
        char cidade2[50];
        int população2;
        float area2;
        float pib2;
        int pontosturistico2;

        //Carta 01
        printf("Vamos adicionar as informações da primeira carta!\n");

        printf("Estado: \n");
        scanf("%s", &estado1);

        printf("codigo: \n");
        scanf("%s", &codigo1);

        printf("cidade: \n");
        scanf("%s", &cidade1);

        printf("população: \n");
        scanf("%d", &população1);

        printf("área km²: \n");
        scanf("%f", &area1);

        printf("PIB: \n");
        scanf("%f", &pib1);

        printf("pontos turisticos\n");
        scanf("%d", &pontosturistico1);

        //Carta 02
         printf("Vamos adicionar as informações da segunda carta!\n");

        printf("Estado: \n");
        scanf("%s", &estado2);

        printf("codigo: \n");
        scanf("%s", &codigo2);

        printf("cidade: \n");
        scanf("%s", &cidade2);

        printf("população: \n");
        scanf("%d", &população2);

        printf("área km²: \n");
        scanf("%f", &area2);

        printf("PIB: \n");
        scanf("%f", &pib2);

        printf("pontos turisticos\n");
        scanf("%d", &pontosturistico2);

        //Informações da primeira carta!
        printf("CARTA 01\n");
        printf("Estado: %s\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("população: %d\n", população1);
        printf("Área em Km²: %fkm²\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Pontos turisticos: %d\n", pontosturistico1);

        //Informações da segunda carta!
        printf("CARTA 02\n");
        printf("Estado: %s\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("população: %d\n", população2);
        printf("Área em Km²: %fkm²\n", area2);
        printf("PIB: %f\n", pib2);
        printf("Pontos turisticos: %d\n", pontosturistico2);

        return 0;

    }