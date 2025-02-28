#include <stdio.h>

    int main(){    
        char estado[20], cidade[22];
        int populacao, pontosturisticos;
        float area, pib;
    

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

        printf("Carta 01\n");
        printf("Nome do Estado: %s\n", estado);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área de: %.3f M²\n", area);
        printf("PIB de: %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos: %d\n", pontosturisticos);


    

        
    
    
    
}
