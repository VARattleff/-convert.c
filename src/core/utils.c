#include "colors.h"
#include <stdio.h>

void print_invalid_choice()
{
    printf("\n\n" RED "Invalid choice.\n" RESET_COLOR);
}

void print_return_to_main_menu() 
{
    printf("\nReturning to main menu...\n");
    
}

int get_int_value()
{
    int number;
    scanf("%d", &number);
    return number;
}

char get_char_value()
{
    char character;
    scanf(" %c", &character); 
    return character;
}

float get_float_value()
{
    float number;
    scanf("%f", &number);
    return number;
}