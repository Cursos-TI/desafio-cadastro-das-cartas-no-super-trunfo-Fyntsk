#include <stdio.h>

    int main(){    //VARIAVEIS//
        char estado[20], cidade[22], codigo[10], estado2[20], cidade2[22], codigo2[10];
        int pontosturisticos, pontosturisticos2;
        unsigned long int populacao, populacao2;
        float area, pib, area2, pib2;
        float densidade, densidade2, pibpercapita, pibpercapita2, superPoder1, superPoder2;
       
       //INSERÇÃO DE DADOS

        printf("Digite o código da carta 01:");
        scanf("%s", &codigo);
        
        printf("Digite seu estado:");
        scanf("%s", estado);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade);

        printf("Digite a população:");
        scanf("%lu", &populacao);

        printf("Digite a área:");
        scanf("%f", &area);

        printf("Digite o PIB:");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos);
               
        
        //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO O RESULTADO DA DIVISÃO PARA OBTER O RESULTADO ESPERADO

        densidade = populacao / area;
        pibpercapita = pib / populacao;
        superPoder1 = (populacao + area + pib + pontosturisticos + densidade + pibpercapita);

        printf("Digite o código da carta 02:");
        scanf("%s", &codigo2);
        
        printf("Digite seu estado:");
        scanf("%s", estado2);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade2);

        printf("Digite a população:");
        scanf("%lu", &populacao2);

        printf("Digite a área:");
        scanf("%f", &area2);

        printf("Digite o PIB:");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos2);
                
        
        //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO OPERADORES ARITMÉTICOS
        densidade2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        superPoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2); //CALCULO SUPER PODER



        //IMPRESSÃO DAS CARTAS COMPLETAS JÁ COM DADOS INSERIDOS
        printf("\n");
        printf("CARTA 1\n");
        printf("Código da carta: %s\n", codigo);
        printf("Nome do Estado: %s\n", estado);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %lu habitantes\n", populacao);
        printf("Área de: %.3f M²\n", area);
        printf("PIB de: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", densidade);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita);
        printf("Super Poder: %.2f", superPoder1);
    
        printf("\n\n");
        printf("CARTA 2\n");
        printf("Código da carta: %s\n", codigo2);
        printf("Nome do Estado: %s\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %lu habitantes\n", populacao2);
        printf("Área de: %.3f M²\n", area2);
        printf("PIB de: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita2);
        printf("Super Poder: %.2f", superPoder2);
        
        printf("\n\n");
        printf("COMPARAÇÃO DE ATRIBUTO ESPECÍFICO: POPULAÇÃO\n");

        printf("Carta 1: %s - População: %lu\n", estado, populacao);
        printf("Carta 2: %s - População: %lu\n", estado2, populacao2);

        printf("\n");
                
        //COMPARAÇÃO ENTRE UM ATRIBUTO ESPECIFICO DAS CARTAS PARA DETERMINAR UM VENCEDOR      
        if (populacao > populacao2){
            printf("RESULTADO: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("RESULTADO: A carta 02 - %s venceu!\n", estado2);
        }
         printf("\n");

        //COMPARAÇÃO ENTRE TODOS OS ATRIBUTOS UTILIZANDO IF-ELSE

        printf("** COMPARAÇÃO ENTRE TODOS OS ATRIBUTOS** (Vence o maior valor, exceto para densidade populacional)\n");
        if (populacao > populacao2){
            printf("POPULAÇÃO: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("POPULAÇÃO: A carta 02 - %s venceu!\n", estado2);
        }
        if ( area > area2 ){
            printf("ÁREA: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("ÁREA: A carta 02 - %s venceu!\n", estado2);
        }
        if ( pib > pib2 ){
            printf("PIB: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("PIB: A carta 02 - %s venceu!\n", estado2);
        }
        if ( pontosturisticos > pontosturisticos2 ){
            printf("PONTOS TURÍSTICOS: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("PONTOS TURÍSTICOS: A carta 02 - %s venceu!\n", estado2);
        }
        if ( densidade < densidade2 ){
            printf("DENSIDADE: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("DENSIDADE: A carta 02 - %s venceu!\n", estado2);
        }
        if ( pibpercapita > pibpercapita2 ){
            printf("PIB PER CAPITA: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("PIB PER CAPITA: A carta 02 - %s venceu!\n", estado2);
        }
        if ( superPoder1 > superPoder2 ){
            printf("SUPER PODER: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("SUPER PODER: A carta 02 - %s venceu!\n", estado2);
        }




        return 0;
   
}
