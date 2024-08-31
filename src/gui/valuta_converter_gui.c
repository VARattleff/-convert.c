#include <stdio.h>
#include "colors.h"
#include "utils.h"

void display_intro() 
{
    printf("\n");
    printf("**       **   ******   **        *****        **         ****   ****   ******   \n");
    printf("**       **   **       **       **         **    **      **  ***  **   **       \n");
    printf("**   *   **   ******   **       **       ***      ***    **   *   **   ******   \n");
    printf("**  ***  **   **       **       **         **    **      **       **   **       \n");
    printf("****   ****   ******   ******    *****        **         **       **   ******   \n");

    printf("\n");
    printf("Here you can easily convert between the world's most commonly used currencies:\n\n");

    print_all_flags();
    printf("\n");

    printf("--> " BLUE "USD" RESET_COLOR " (US Dollar / Freedom Unit)\n");
    printf("--> " YELLOW "EUR" RESET_COLOR " (Euro)\n");
    printf("--> " RED "DKK" RESET_COLOR " (Danish Krone)\n");
}

void display_currency_options() 
{
    printf("\n");
    printf("Please select the unit you want to convert by entering the corresponding number and pressing Enter:\n\n");

    printf(" (1) " BLUE "USD" RESET_COLOR "\n");
    printf(" (2) " YELLOW "EUR" RESET_COLOR "\n");
    printf(" (3) " RED "DKK" RESET_COLOR "\n");
}

void display_conversion_target_options() 
{
    printf("\n");
    printf("Please select the target unit for conversion by entering the corresponding number and pressing Enter:\n\n");

    printf(" (1) " BLUE "USD" RESET_COLOR " (US Dollar)\n");
    printf(" (2) " YELLOW "EUR" RESET_COLOR " (Euro)\n");
    printf(" (3) " RED "DKK" RESET_COLOR " (Danish Krone)\n");
}