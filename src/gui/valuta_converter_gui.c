#include <stdio.h>
#include "colors.h"
#include "utils.h"

void display_intro() 
{
    printf("\n" "Welcome to the Currency Converter!\n");
    printf("------------------------------------------------\n");
    printf("In this program, you can easily convert between the world's most commonly used currencies.\n");
    printf("We " RED "DO NOT " RESET_COLOR "support the exact exchange rate.\n\n");

    print_all_flags();

    printf("\n------------------------------------------------\n");
    printf("Let's get started with your currency conversion.\n\n");
}

void display_currency_options() 
{
    printf("\n");
    printf("Please select the unit you want to convert by entering the corresponding number and press enter:\n\n");

    printf(" (1) " BLUE "USD" RESET_COLOR  " (US Dollar / Freedom Unit)" "\n");
    printf(" (2) " YELLOW "EUR" RESET_COLOR " Euro" "\n");
    printf(" (3) " RED "DKK" RESET_COLOR " Danish Krone" "\n");

    printf("\n");
    printf("Enter your choice (1-3): ");
}

void display_conversion_target_options() 
{
    printf("now please select the target unit for conversion by entering the corresponding number and press enter:\n\n");

    printf(" (1) " BLUE "USD" RESET_COLOR " (US Dollar)\n");
    printf(" (2) " YELLOW "EUR" RESET_COLOR " (Euro)\n");
    printf(" (3) " RED "DKK" RESET_COLOR " (Danish Krone)\n");
    printf(" (4) " GREEN "Return to main menu" RESET_COLOR "\n");

    printf("\n");
    printf("Enter your choice (1-4): ");
}