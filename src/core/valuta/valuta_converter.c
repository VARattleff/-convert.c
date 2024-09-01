#include <stdio.h>
#include "valuta_converter.h"
#include "colors.h"
#include "utils.h"

#define USD_TO_EUR_RATE 0.90
#define USD_TO_DKK_RATE 6.75
#define EUR_TO_DKK_RATE 7.46
#define EUR_TO_USD_RATE 1.11
#define DKK_TO_USD_RATE 0.15
#define DKK_TO_EUR_RATE 0.13

void calculate_usd_to_eur(float amount);
void calculate_usd_to_dkk(float amount);
void calculate_eur_to_dkk(float amount);
void calculate_eur_to_usd(float amount);
void calculate_dkk_to_usd(float amount);
void calculate_dkk_to_eur(float amount);

void handle_currency_selection();

int exit_valuta = 0; 

int valuta_main() 
{
    display_valuta_intro();
    int step = 1;
    while (!exit_valuta) 
    {
        switch (step)
        {
            case 1:
                handle_currency_selection();
                break;
            default:
                exit_valuta = 1; 
                break;
        }
    }

    return 0;
}

void handle_currency_selection()
{
    int valid_input_selected_conversion = 0;
    char selected_conversion;

    while (!valid_input_selected_conversion)
    {
        display_currency_conversion_options();

        selected_conversion =  get_char_value();

        while (getchar() != '\n'); 

        float amount; 

        switch (selected_conversion)
        {
            case 'a':
                valuta_option_a();
                amount = get_float_value();
                calculate_usd_to_eur(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'b':
                valuta_option_b();
                amount = get_float_value();
                calculate_usd_to_dkk(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'c':
                valuta_option_c();
                amount = get_float_value();
                calculate_eur_to_dkk(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'd':
                valuta_option_d();
                amount = get_float_value();
                calculate_eur_to_usd(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'e':
                valuta_option_e();
                amount = get_float_value();
                calculate_dkk_to_usd(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'f':
                valuta_option_f();
                amount = get_float_value();
                calculate_dkk_to_eur(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'q':
                print_return_to_main_menu();
                exit_valuta = 1; 
                valid_input_selected_conversion = 1;
                break;
            default:
                print_invalid_choice();
                break;
        }
    }
}

void calculate_usd_to_eur(float amount)
{
    float result = amount * USD_TO_EUR_RATE;
    printf("Converted amount: %.2f " YELLOW "EUR" RESET_COLOR "\n", result);
}

void calculate_usd_to_dkk(float amount)
{
    float result = amount * USD_TO_DKK_RATE;
    printf("Converted amount: %.2f " RED "DKK" RESET_COLOR "\n", result);
}

void calculate_eur_to_dkk(float amount)
{
    float result = amount * EUR_TO_DKK_RATE;
    printf("Converted amount: %.2f " RED "DKK" RESET_COLOR "\n", result);
}

void calculate_eur_to_usd(float amount)
{
    float result = amount * EUR_TO_USD_RATE;
    printf("Converted amount: %.2f " BLUE "USD" RESET_COLOR "\n", result);
}

void calculate_dkk_to_usd(float amount)
{
    float result = amount * DKK_TO_USD_RATE;
    printf("Converted amount: %.2f " BLUE "USD" RESET_COLOR "\n", result);
}

void calculate_dkk_to_eur(float amount)
{
    float result = amount * DKK_TO_EUR_RATE;
    printf("Converted amount: %.2f " YELLOW "EUR" RESET_COLOR "\n", result);
}
