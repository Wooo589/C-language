#include <stdio.h>
#include <string.h>

int main(void){
    char first_name[12], middle_name[12], last_name[12];
    printf("---------------\n");
    printf("-NATIONAL BANK-\n");
    printf("---------------\n");
    printf("-----------------------------\n");
    printf("Welcome to the National Bank!\n");
    printf("-----------------------------\n");
    printf("Please, enter your first name: ");
    scanf("%s%*c", &first_name);
    printf("Now, enter your middle name: ");
    scanf("%s%*c", &middle_name);
    printf("Lastly, enter your last name: ");
    scanf("%s%*c", &last_name);
    printf("------------------------------------------\n");
    printf("Welcome, %s %s %s! What may we do for you?\n", strupr(first_name), strupr(middle_name), strupr(last_name));
    printf("------------------------------------------\n");
    return 0;
}