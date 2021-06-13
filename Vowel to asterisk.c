#include <stdio.h>
#include <string.h>
int main() {
    
    // Declaração de variáveis
    char str[100];

    // Pegar a cadeia de caracteres do usuário
    printf("====================================\n");
    printf("=Transforme uma vogal em asterisco!=\n");
    printf("====================================\n");
    printf("Digite uma frase: \n");
    gets(str);
    
    // Percorrer cada frase a partir de seu tamanho 
    for (int i = 0; i <= strlen(str); i++)
    {   
        // Checar vogal e inserir asterisco
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u') 
        {
            str[i] = '*';
        }
    }

    // Imprimir resultado
    printf("====================================\n");
    printf("%s",str);
    getchar();
    printf("====================================\n");
    return 0;
}