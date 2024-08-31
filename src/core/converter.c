#include <stdio.h>
#include "valuta_converter.h"
#include "colors.h"

int main () 
{
    display_intro();

    int valid_input = 0;
    int selected_currency;

    while (!valid_input)
    {
        display_currency_options();

        if (scanf("%d", &selected_currency) != 1) 
        {
            while (getchar() != '\n'); 
            printf("\n" RED "Invalid choice. Please enter a number between 1 and 3.\n" RESET_COLOR);
        } 
        else if (selected_currency < 1 || selected_currency > 3) 
        {
            printf("\n" RED "Invalid choice. Please enter a number between 1 and 3.\n" RESET_COLOR);
        } 
        else 
        {
            valid_input = 1;
        }
    }
    
   switch (selected_currency) 
    {
        case 1:
            printf("You selected option 1.\n");
            break;
        case 2:
            printf("You selected option 2.\n");
            break;
        case 3:
            printf("You selected option 3.\n");
            break;
    }
    
    return 0;
}