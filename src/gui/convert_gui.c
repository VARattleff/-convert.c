#include <stdio.h>
#include <colors.h>

void display_convert_intro() 
{
    printf("\n" RESET_COLOR "Welcome to the Conversion Program!\n");
}

void display_convert_conversion_options()
{
    printf("\n" "Please choose between the following conversion types:\n");
    printf(" (1) " BLUE "Weight" RESET_COLOR "\n");
    printf(" (2) " GREEN "Valuta" RESET_COLOR "\n");
    printf(" (3) " YELLOW "Time" RESET_COLOR "\n");
    printf("\nEnter your choice (1-3): ");   
} 