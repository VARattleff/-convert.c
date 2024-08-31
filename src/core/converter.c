#include <stdio.h>
#include "valuta_converter.h"
#include "colors.h"

int main () 
{
    display_intro();

    //step one 

    int valid_input_selected_currency = 0;
    int selected_currency;

    while (!valid_input_selected_currency)
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
            valid_input_selected_currency = 1;
        }
    }
    
    switch (selected_currency) 
    {
        case 1:
            printf("\n" "You selected option 1 " BLUE "USD " RESET_COLOR);
            display_conversion_target_options(); 
            break;
        case 2:
            printf("\n" "You selected option 2 " YELLOW "EUR " RESET_COLOR);
            display_conversion_target_options(); 
            break;
        case 3:
            printf("\n" "You selected option 3 " RED "DKK " RESET_COLOR);
            break;
    }

    //step two 

    int valid_input_selected_target_currency = 0;
    int selected_target_currency;

    while (!valid_input_selected_target_currency)
    {
        if (scanf("%d", &selected_target_currency) != 1)
        {
            while (getchar() != '\n');
            printf("\n" RED "Invalid choice. Please enter a number between 1 and 4.\n" RESET_COLOR);
        }
        else if (selected_target_currency < 1 || selected_target_currency > 4)
        {
            printf("\n" RED "Invalid choice. Please enter a number between 1 and 4.\n" RESET_COLOR);
        }
        else 
        {
            valid_input_selected_target_currency = 1;
        }
    }

    switch (selected_target_currency)
    {
        case 1:
            printf("\n" "You selected option 1 " BLUE "USD " RESET_COLOR);
            break;
        case 2:
            printf("\n" "You selected option 2 " YELLOW "EUR " RESET_COLOR);
            break;
        case 3:
            printf("\n" "You selected option 3 " RED "DKK " RESET_COLOR);
            break;
        case 4:
            printf("\n" "You selected option 4 " GREEN "NOK " RESET_COLOR); 
            break;
    }

    //step three

    return 0;
}