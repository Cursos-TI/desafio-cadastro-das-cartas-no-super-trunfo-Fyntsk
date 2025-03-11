#include <stdio.h>

    int main(){    //VARIAVEIS//
        char estado[20], cidade[22], codigo[10], estado2[20], cidade2[22], codigo2[10];
        int populacao, pontosturisticos, populacao2, pontosturisticos2;
        float area, pib, area2, pib2;
        float densidade, densidade2, pibpercapita, pibpercapita2;
    
        printf("Digite o código da carta 01:");
        scanf("%s", &codigo);
        
        printf("Digite seu estado:");
        scanf("%s", estado);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade);

        printf("Digite a população:");
        scanf("%d", &populacao);

        printf("Digite a área:");
        scanf("%f", &area);

        printf("Digite o PIB:");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos);
               //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO UTILIZANDO O RESULTADO DA DIVISÃO PARA OBTER O RESULTADO ESPERADO//
        densidade = populacao / area;
        pibpercapita = pib / populacao;

        printf("Digite o código da carta 02:");
        scanf("%s", &codigo2);
        
        printf("Digite seu estado:");
        scanf("%s", estado2);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade2);

        printf("Digite a população:");
        scanf("%d", &populacao2);

        printf("Digite a área:");
        scanf("%f", &area2);

        printf("Digite o PIB:");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos2);
                //NOVOS ATRIBUTOS INSERIDOS NÍVEL INTERMEDIARIO//
        densidade2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;

        //CARTAS COMPLETAS JÁ COM DADOS INSERIDOS//
        printf("\n");
        printf("CARTA 1\n");
        printf("Código da carta: %s\n", codigo);
        printf("Nome do Estado: %s\n", estado);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área de: %.3f M²\n", area);
        printf("PIB de: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);
        printf("Densidade populacional: %.2f hab/km²\n", densidade);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita);
    
        printf("\n");
        printf("CARTA 2\n");
        printf("Código da carta: %s\n", codigo2);
        printf("Nome do Estado: %s\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área de: %.3f M²\n", area2);
        printf("PIB de: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: R$ %.2f reais por habitante.\n", pibpercapita2);
        
        printf("\n");
        printf("COMPARAÇÃO DE ATRIBUTOS: POPULAÇÃO\n");

        printf("Carta 1: %s - População: %d\n", estado, populacao);
        printf("Carta 2: %s - População: %d\n", estado2, populacao2);

        printf("\n");
                //COMPARAÇÃO ENTRE ATRIBUTOS ESPECIFICOS DAS CARTAS PARA DETERMINAR UM VENCEDOR//       
        if (populacao > populacao2){
            printf("RESULTADO: A carta 01 - %s Venceu!\n", estado);
        } else {
            printf("RESULTADO: A carta 02 - %s venceu!\n", estado2);
        }
        

        return 0;
   
}
