#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, delta, x1, x2;
    printf("---------------------------------------------\n");
    printf("Welcome to the Quadratic Equation Calculator!\n");
    printf("---------------------------------------------\n");
    printf("Type a value for 'a':\n");                    
    scanf("%f", &a);                                      
    printf("Type a value for 'b':\n");                    
    scanf("%f", &b);                                      
    printf("Type a value for 'c':\n");                      
    scanf("%f", &c);                                      
    printf("---------------------------------------------\n");
    delta = (pow(b, 2) - (4*a*c));

    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);

    printf("delta = %f\n x1 = %f\n x2 = %f\n", delta, x1, x2);
    printf("-----------------------------------------------\n");
    printf("Operation succeded!\n");                           
    printf("-----------------------------------------------\n");
}