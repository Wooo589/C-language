#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL, "Portuguese");
        
    float sal, mai_sal, men_sal = 99999, soma_sal, media_sal;
    
    for (int i = 1; i <= 3; i++) {
        printf("Informe o salário do %i° funcionário: ", i);
        scanf("%f", &sal);
    
        if (mai_sal < sal)
            {
                mai_sal = sal; 
            }
        if (men_sal > sal)
            {
                men_sal = sal;  
            }
        soma_sal += sal;
        media_sal = soma_sal / i;
    } 

    printf("\n");
    printf("Maior salário da firma: R$%.2f", mai_sal);
    printf("\nMenor salário da firma: R$%.2f", men_sal);
    printf("\nMédia dos salários: R$%.2f", media_sal);
    
    return 0;
}