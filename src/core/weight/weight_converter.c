#include <stdio.h>
#include "weight_converter.h"
#include "colors.h"
#include "utils.h"

#define KG_TO_POUND_RATE 2.20462
#define KG_TO_STONE_RATE 0.15747
#define POUND_TO_STONE_RATE 0.07143
#define POUND_TO_KG_RATE 0.453592
#define STONE_TO_KG_RATE 6.35029
#define STONE_TO_POUND_RATE 14.0

void calculate_kg_to_pound(float amount);
void calculate_kg_to_stone(float amount);
void calculate_pound_to_stone(float amount);
void calculate_pound_to_kg(float amount);
void calculate_stone_to_kg(float amount);
void calculate_stone_to_pound(float amount);

void handle_weight_selection();

int exit_weight = 0;

int weight_main() 
{
    display_weight_intro();
    int step = 1;
    while (!exit_weight) 
    {
        switch (step)
        {
            case 1:
                handle_weight_selection();
                break;
            default:
                exit_weight = 1; 
                break;
        }
    }

    return 0;
}

void handle_weight_selection()
{
    int valid_input_selected_conversion = 0;
    char selected_conversion;

    while (!valid_input_selected_conversion)
    {
        display_weight_conversion_options();

        selected_conversion = get_char_value();  

        while (getchar() != '\n');  

        float amount;

        switch (selected_conversion)
        {
            case 'a':
                weight_option_a();
                amount = get_float_value(); 
                calculate_kg_to_pound(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'b':
                weight_option_b();
                amount = get_float_value();
                calculate_kg_to_stone(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'c':
                weight_option_c();
                amount = get_float_value();
                calculate_pound_to_stone(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'd':
                weight_option_d();
                amount = get_float_value();
                calculate_pound_to_kg(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'e':
                weight_option_e();
                amount = get_float_value();
                calculate_stone_to_kg(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'f':
                weight_option_f();
                amount = get_float_value();
                calculate_stone_to_pound(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'q':
                print_return_to_main_menu();  
                exit_weight = 1; 
                valid_input_selected_conversion = 1;
                break;
            default:
                print_invalid_choice();  
                break;
        }
    }
}

void calculate_kg_to_pound(float amount)
{
    float result = amount * KG_TO_POUND_RATE;
    printf("Converted amount: %.2f " YELLOW "Pounds" RESET_COLOR "\n", result);
}

void calculate_kg_to_stone(float amount)
{
    float result = amount * KG_TO_STONE_RATE;
    printf("Converted amount: %.2f " RED "Stones" RESET_COLOR "\n", result);
}

void calculate_pound_to_stone(float amount)
{
    float result = amount * POUND_TO_STONE_RATE;
    printf("Converted amount: %.2f " RED "Stones" RESET_COLOR "\n", result);
}

void calculate_pound_to_kg(float amount)
{
    float result = amount * POUND_TO_KG_RATE;
    printf("Converted amount: %.2f " BLUE "Kilograms" RESET_COLOR "\n", result);
}

void calculate_stone_to_kg(float amount)
{
    float result = amount * STONE_TO_KG_RATE;
    printf("Converted amount: %.2f " BLUE "Kilograms" RESET_COLOR "\n", result);
}

void calculate_stone_to_pound(float amount)
{
    float result = amount * STONE_TO_POUND_RATE;
    printf("Converted amount: %.2f " YELLOW "Pounds" RESET_COLOR "\n", result);
}