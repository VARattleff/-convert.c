#include <stdio.h>
#include "valuta_converter.h"
#include "colors.h"

void handle_currency_selection();
void handle_conversion_target();
void handle_currency_input();

int exit_program = 0; 
int step = 1;

int main() 
{
    display_intro();

    while (!exit_program) 
    {
        switch (step)
        {
            case 1:
                handle_currency_selection();
                step = 2; 
                break;
            case 2:
                handle_conversion_target();
                step = 3;
                break;
            case 3:
                handle_currency_input();
            default:
                exit_program = 1; 
                break;
        }
    }

    return 0;
}

void handle_currency_selection()
{
    int valid_input_selected_currency = 0;
    int selected_currency;

    while (!valid_input_selected_currency)
    {
        display_currency_options();

        if (scanf("%d", &selected_currency) != 1) 
        {
            while (getchar() != '\n'); 
            printf("\n" RED "Invalid choice. Please enter a number between 1 and 4.\n" RESET_COLOR);
        } 
        else if (selected_currency < 1 || selected_currency > 4) 
        {
            printf("\n" RED "Invalid choice. Please enter a number between 1 and 4.\n" RESET_COLOR);
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
            break;
        case 2:
            printf("\n" "You selected option 2 " YELLOW "EUR " RESET_COLOR);
            break;
        case 3:
            printf("\n" "You selected option 3 " RED "DKK " RESET_COLOR);
            break;
        case 4:
            exit_program = 1;
            break;
    }
}

void handle_conversion_target()
{
    int valid_input_selected_target_currency = 0;
    int selected_target_currency;

    while (!valid_input_selected_target_currency)
    {
        display_conversion_target_options(); 
        
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
            printf("\n" "Returning to main menu...\n");
            step = 1;
            break;
    }
}

void handle_currency_input()
{
    display_currency_value_input();
}