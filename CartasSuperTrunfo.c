#include <stdio.h>
#include <string.h>

    int main(){    //VARIAVEIS//
        char estado[20], cidade[22], codigo[10], estado2[30], cidade2[40], codigo2[15];
        int pontosturisticos, pontosturisticos2;
        unsigned long int populacao, populacao2;
        float area, pib, area2, pib2;
        float densidade, densidade2, pibpercapita, pibpercapita2, superPoder1, superPoder2;
       
       //INSERÇÃO DE DADOS

        printf("Digite o código da carta 01:");
        fgets(codigo, sizeof (codigo), stdin);
        codigo[strcspn(codigo, "\n")] = 0; //REMOVE O \n
        
        printf("Digite seu estado:");
        fgets(estado, sizeof (estado), stdin);
        estado[strcspn(estado, "\n")] = 0;
        
        printf("Digite sua cidade:");
        fgets(cidade, sizeof (cidade), stdin);
        cidade[strcspn(cidade, "\n")] = 0;
        
        printf("Digite a população:");
        scanf("%lu", &populacao);
        getchar();

        printf("Digite a área:");
        scanf("%f", &area);
        getchar();

        printf("Digite o PIB:");
        scanf("%f", &pib);
        getchar();

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos);
        getchar();
               
        
        //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO O RESULTADO DA DIVISÃO PARA OBTER O RESULTADO ESPERADO

        densidade = populacao / area;
        pibpercapita = pib / populacao;
        superPoder1 = (populacao + area + pib + pontosturisticos + densidade + pibpercapita);

        printf("Digite o código da carta 02:");
        fgets(codigo2, sizeof (codigo2), stdin);
        codigo2[strcspn(codigo2, "\n")] = 0;
        
        printf("Digite seu estado:");
        fgets(estado2, sizeof (estado2), stdin);
        estado2[strcspn(estado2, "\n")] = 0;
        
        printf("Digite sua cidade:");
        fgets(cidade2, sizeof (cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = 0;

        printf("Digite a população:");
        scanf("%lu", &populacao2);
        getchar();

        printf("Digite a área:");
        scanf("%f", &area2);
        getchar();

        printf("Digite o PIB:");
        scanf("%f", &pib2);
        getchar();

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos2);
        getchar();
                
        
        //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO OPERADORES ARITMÉTICOS
        densidade2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        superPoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2); //CALCULO SUPER PODER



        //IMPRESSÃO DAS CARTAS COMPLETAS JÁ COM DADOS INSERIDOS
        printf("\n");
        printf("CARTA 1\n");
        printf("Código da carta: %s", codigo);
        printf("Nome do Estado: %s", estado);
        printf("Nome da cidade: %s", cidade);
        printf("População: %lu habitantes\n", populacao);
        printf("Área de: %.3f M²\n", area);
        printf("PIB de: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", densidade);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita);
        printf("Super Poder: %.2f", superPoder1);
    
        printf("\n\n");
        printf("CARTA 2\n");
        printf("Código da carta: %s", codigo2);
        printf("Nome do Estado: %s", estado2);
        printf("Nome da cidade: %s", cidade2);
        printf("População: %lu habitantes\n", populacao2);
        printf("Área de: %.3f M²\n", area2);
        printf("PIB de: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita2);
        printf("Super Poder: %.2f\n\n", superPoder2);

        int opcao;

        //INSERÇÃO DO MENU PARA QUE O ÚSUARIO SELECIONE O ATRIBUTO ESCOLHIDO

        printf("** MENU PARA SELEÇÃO DE ATRIBUTOS PARA COMPARAÇÃO**\n");
        printf("Selecione um atributo para comparar:\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Pontos turísticos.\n");
        printf("5. Densidade Populacional.\n");
        printf("Digite a opção escolhida:\n");
        scanf("%d", &opcao);

        switch (opcao){           //IMPLEMENTAÇÃO DO SWITCH     
        case 1:
               printf("Você escolheu: População.\n");
               printf("%s: %lu habitantes.\n", estado, populacao);
               printf("%s: %lu habitantes.\n", estado2, populacao2);

             if (populacao > populacao2)
               printf("Vencedor: CARTA 01 - %s\n", estado);
              else if (populacao < populacao2)
               printf("Vencedor: CARTA 02 - %s\n", estado2);
              else 
               printf("Atributo empatado.\n");  

        break;
        case 2:
               printf("Você escolheu: Área.\n");
               printf("%s: %.3f M².\n", estado, area);
               printf("%s: %.3f M².\n", estado2, area2);

             if (area > area2)
               printf("Vencedor: CARTA 01 - %s\n", estado);
              else if (area < area2)
               printf("Vencedor: CARTA 02 - %s\n", estado2);
              else 
               printf("Atributo empatado.\n");  

        break;
        case 3:
               printf("Você escolheu: PIB.\n");
               printf("%s: %.2f bilhões de reais.\n", estado, pib);
               printf("%s: %.2f bilhões de reais.\n", estado2, pib2);

             if (pib > pib2)
               printf("Vencedor: CARTA 01 - %s\n", estado);
              else if (pib < pib2)
               printf("Vencedor: CARTA 02 - %s\n", estado2);
              else 
               printf("Atributo empatado.\n");  

        break;
        case 4:
               printf("Você escolheu: Pontos turísticos.\n");
               printf("%s: %d pontos turísticos.\n", estado, pontosturisticos);
               printf("%s: %d pontos turísticos.\n", estado2, pontosturisticos2);

             if (pontosturisticos > pontosturisticos2)
               printf("Vencedor: CARTA 01 - %s\n", estado);
              else if (pontosturisticos < pontosturisticos2)
               printf("Vencedor: CARTA 02 - %s\n", estado2);
              else 
               printf("Atributo empatado.\n");  

        break;
        case 5:
               printf("Você escolheu: Densidade populacional.\n");
               printf("%s: %.2f hab/km².\n", estado, densidade);
               printf("%s: %.2f hab/km².\n", estado2, densidade2);

             if (densidade < densidade2)
               printf("Vencedor: CARTA 01 - %s\n", estado);
              else if (densidade > densidade2)
               printf("Vencedor: CARTA 02 - %s\n", estado2);
              else 
               printf("Atributo empatado.\n");  

        break;
        default:
               printf("Opção inválida.\n");
        }       

        return 0;
   
}
