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

        //variaveis especiais
        float superpoder1, superpoder2;

        //Carta 01
        printf("Vamos adicionar as informações da primeira carta!\n");
        printf("\n");

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
        printf("\n");
        printf("Vamos adicionar as informações da segunda carta!\n");
        printf("\n");

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
        Pib percapita = PIB dividido pela população.
        */       
        densidadep1 = população1 / area1;
        densidadep2 = população2 / area2;
        pibper1 = pib1 / população1;
        pibper2 = pib2 / população2;

        //superpoder, soma de todos os atributos, sem somar o pib.
        superpoder1 = população1 + area1 + pontosturistico1;
        superpoder2 = população2 + area2 + pontosturistico2;

        //Informações da primeira carta!
        printf("\n");
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
        printf("SUPERPODER: %.2f\n", superpoder1);

        printf("\n");

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
        printf("SUPERPODER: %.2f\n", superpoder2);

        printf("\n");

        /*Comparar as cartas e ver qual venceu.
        Para a --DENSIDADE POPULACIONAL-- a carta com menor valor vence
        todos os outros atributos a carta com o maior valor vence.
        Adicionar um super poder.*/

        printf("===COMPARAÇÃO DAS CARTAS===\n");
        printf("1 para verdadeiro, 0 para falso\n");
        printf("\n");
        printf("População: Carta 1 (%s) > carta 2 (%s)?: %.d\n", cidade1, cidade2, (população1 > população2));
        printf("Área: Carta 1 (%s) > carta 2 (%s)?: %d\n", cidade1, cidade2, (area1 > area2));
        printf("PIB: Carta 1 (%s) > carta 2 (%s)?: %d\n", cidade1, cidade2, (pib1 > pib2));
        printf("Pontos turisticos: Carta 1 (%s) > carta 2 (%s)?: %d\n", cidade1, cidade2, (pontosturistico1 > pontosturistico2));
        printf("Densidade populacional: Carta 1 (%s) < carta 2 (%s)?: %d\n", cidade1, cidade2, (densidadep1 < densidadep2));
        printf("PIB per capita: Carta 1 (%s) > carta 2 (%s)?: %d\n", cidade1, cidade2, (pibper1 > pibper2));
        printf("Super poder: Carta 1 (%s) > carta 2 (%s)?: %d\n", cidade1, cidade2, (superpoder1 > superpoder2));

        /*É possivel tirar o termo (carta 1 ou 2)
        Para deixar apenas o nome da cidade ou outra informação a sua escolha
        ex: codigo da carta
        printf ("população: %s > %s", codigo1, codigo2, (população1 > população 2)) 
        */
        
        return 0;
   
    }