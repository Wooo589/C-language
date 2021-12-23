#include <stdio.h>
#include <locale.h>

int main() {
    
     setlocale(LC_ALL, "Portuguese");
        
    int vetor[5];
    int maior = 0; 
    int menor = 99999;
    float soma, media;
    
    for (int i = 1; i <= 5; i++) {
        printf("Informe o %i° elemento do vetor: ", i);
        scanf("%d", &vetor[i]);
    
        if (maior < vetor[i])
            {
                maior = vetor[i]; 
            }
        if (menor > vetor[i])
            {
                menor = vetor[i];  
            }
        soma += vetor[i];
        media = soma / i;
    } 

    printf("\n");
    printf("Maior elemento: %d", maior);
    printf("\nMenor elemento: %d", menor);
    printf("\nMédia dos elementos do vetor: %.1f", media);
    
    
    return 0;