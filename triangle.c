#include <stdio.h>
#include <stdbool.h>

bool if_triangle(float S1, float S2, float S3);
const char* triangle_types(float L1, float L2, float L3);

int main(void) {

    float s1, s2, s3 = 0;
    bool res = false;
    const char* type;

    printf("====================\n");
    printf("= Triangle checker =\n");
    printf("====================\n");
    printf("Type numbers for the sides, they must be higher than zero\n");
    
    do
    {
        printf("First side: \n");
        scanf("%f", &s1);
    } while (s1 <= 0);  
    do
    {
        printf("Second side: \n");
        scanf("%f", &s2);
    } while (s2 <= 0);    
    do
    {
        printf("Third side: \n");
        scanf("%f", &s3);
    } while (s3 <= 0);
    
    res = if_triangle(s1, s2, s3);

    if (res == false) {
        printf("The given values are not able to make a triangle");
        return 1;
    }

    type = triangle_types(s1, s2, s3);

    printf("=========================\n");
    printf("= Triangle Informations =\n");
    printf("=========================\n");
    printf("=========================\n");
    printf("First side: %.2f cm\n", s1);
    printf("Second side: %.2f cm\n", s2);
    printf("Third side: %.2f cm\n", s3);
    printf("=========================\n");
    printf("Type: %s\n", type);
    printf("=========================\n");

    return 0;
}

bool if_triangle (float S1, float S2, float S3) {

    if (S1 <= S2 + S3 || S2 <= S1 + S3 || S3 <= S2 + S1) {
        return true;
    }
    else {
        return false;
    }

}


const char* triangle_types(float S1, float S2, float S3) {
    

    if (S1 == S2 && S1 == S3 && S2 == S3) {
        return "Equilateral";
    }
    else if (S1 == S2 || S1 == S3 || S2 == S3) {
        return "Isosceles";
    }
    else {
        return "Scalene";
    }

}