#include <stdio.h>

    int main(){    
        char estado[20], cidade[22];
        float populacao;
    

        printf("Digite seu estado:");
        scanf("%s", estado);
        
        printf("Digite sua cidade:");
        scanf("%s", cidade);

        printf("Digite a população:");
        scanf("%f", &populacao);

        printf("Nome do Estado: %s\n - Nome da Cidade: %s\n", estado, cidade);
        printf("População: %f Milhões", populacao);
        


    

        
    
    
    
}
