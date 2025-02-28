#include <stdio.h>

    int main(){    
        char estado[20], cidade[22], codigo[10], estado2[20], cidade2[22], codigo2[10];
        int populacao, pontosturisticos, populacao2, pontosturisticos2;
        float area, pib, area2, pib2;
    
        printf("Digite o código da carta 01:");
        scanf("%s", &codigo);
        
        printf("Digite seu estado:");
        scanf("%s", estado);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade);

        printf("Digite a população:");
        scanf("%d", &populacao);

        printf("Digite a área em M²:");
        scanf("%f", &area);

        printf("Digite o PIB:");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos);

        printf("Digite o código da carta 02:");
        scanf("%s", &codigo2);
        
        printf("Digite seu estado:");
        scanf("%s", estado2);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade2);

        printf("Digite a população:");
        scanf("%d", &populacao2);

        printf("Digite a área em M²:");
        scanf("%f", &area2);

        printf("Digite o PIB:");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos:");
        scanf("%d", &pontosturisticos2);

        
        printf("Carta 01\n");
        printf("Código da carta: %s\n", codigo);
        printf("Nome do Estado: %s\n", estado);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área de: %.3f M²\n", area);
        printf("PIB de: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);

        printf("Carta 02\n");
        printf("Código da carta: %s\n", codigo2);
        printf("Nome do Estado: %s\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área de: %.3f M²\n", area2);
        printf("PIB de: %.2f bilhões de reais\n", pib2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);

        return 0;
   
}
