#include <stdio.h>
#include "colors.h"

void display_weight_intro() 
{
    printf("\n" "Welcome to the Weight Converter!\n");
    printf("In this program, you can easily convert between kilograms, pounds, and stones.\n");
}

void display_weight_conversion_options() 
{
    printf("\n");
    printf("Please select the weight conversion you want to perform by entering the corresponding letter and pressing Enter:\n\n");

    printf(" (a) " BLUE "Kilograms" RESET_COLOR  " -> "  YELLOW "Pounds" RESET_COLOR  " (Kilograms to Pounds)\n");
    printf(" (b) " BLUE "Kilograms" RESET_COLOR  " -> "  RED "Stones" RESET_COLOR  " (Kilograms to Stones)\n");

    printf(" (c) " YELLOW "Pounds" RESET_COLOR  " -> "  RED "Stones" RESET_COLOR  " (Pounds to Stones)\n");
    printf(" (d) " YELLOW "Pounds" RESET_COLOR  " -> "  BLUE "Kilograms" RESET_COLOR  " (Pounds to Kilograms)\n");

    printf(" (e) " RED "Stones" RESET_COLOR  " -> "  BLUE "Kilograms" RESET_COLOR  " (Stones to Kilograms)\n");
    printf(" (f) " RED "Stones" RESET_COLOR  " -> "  YELLOW "Pounds" RESET_COLOR  " (Stones to Pounds)\n");

    printf(" (q) " GREEN "Return to main menu..." RESET_COLOR  " \n");

    printf("\nEnter your choice (a-f): ");
}

void weight_option_a() 
{
    printf("\nYou selected option a " BLUE "Kilograms " RESET_COLOR "-> " YELLOW "Pounds " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void weight_option_b() 
{
    printf("\nYou selected option b " BLUE "Kilograms " RESET_COLOR "-> " RED "Stones " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void weight_option_c() 
{
    printf("\nYou selected option c " YELLOW "Pounds " RESET_COLOR "-> " RED "Stones " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void weight_option_d() 
{
    printf("\nYou selected option d " YELLOW "Pounds " RESET_COLOR "-> " BLUE "Kilograms " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void weight_option_e() 
{
    printf("\nYou selected option e " RED "Stones " RESET_COLOR "-> " BLUE "Kilograms " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void weight_option_f() 
{
    printf("\nYou selected option f " RED "Stones " RESET_COLOR "-> " YELLOW "Pounds " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

