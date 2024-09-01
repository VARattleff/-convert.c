#include <stdio.h>
#include "time_converter.h"
#include "colors.h"
#include "utils.h"

#define SECONDS_IN_MINUTE 60
#define SECONDS_IN_HOUR 3600
#define MINUTES_IN_HOUR 60

void calculate_seconds_to_minutes(float amount);
void calculate_seconds_to_hours(float amount);
void calculate_minutes_to_seconds(float amount);
void calculate_hours_to_seconds(float amount);
void calculate_hours_to_minutes(float amount);
void calculate_minutes_to_hours(float amount);

void handle_time_selection();

int exit_time = 0; 

int time_main() 
{
    display_time_intro();
    int step = 1;
    while (!exit_time) 
    {
        switch (step)
        {
            case 1:
                handle_time_selection();
                break;
            default:
                exit_time = 1; 
                break;
        }
    }

    return 0;
}

void handle_time_selection()
{
    int valid_input_selected_conversion = 0;
    char selected_conversion;

    while (!valid_input_selected_conversion)
    {
        display_time_conversion_options();

        selected_conversion = get_char_value();

        while (getchar() != '\n'); 

        float amount; 

        switch (selected_conversion)
        {
            case 'a':
                time_option_a();
                amount = get_float_value();
                calculate_seconds_to_minutes(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'b':
                time_option_b();
                amount = get_float_value();
                calculate_seconds_to_hours(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'c':
                time_option_c();
                amount = get_float_value();
                calculate_minutes_to_seconds(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'd':
                time_option_d();
                amount = get_float_value();
                calculate_hours_to_seconds(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'e':
                time_option_e();
                amount = get_float_value();
                calculate_hours_to_minutes(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'f':
                time_option_f();
                amount = get_float_value();
                calculate_minutes_to_hours(amount);
                valid_input_selected_conversion = 1;
                break;
            case 'q':
                print_return_to_main_menu();
                exit_time = 1; 
                valid_input_selected_conversion = 1;
                break;
            default:
                print_invalid_choice();
                break;
        }
    }
}

void calculate_seconds_to_minutes(float amount)
{
    float result = amount / SECONDS_IN_MINUTE;
    printf("Converted amount: %.2f " YELLOW "minutes" RESET_COLOR "\n", result);
}

void calculate_seconds_to_hours(float amount)
{
    float result = amount / SECONDS_IN_HOUR;
    printf("Converted amount: %.2f " GREEN "hours" RESET_COLOR "\n", result);
}

void calculate_minutes_to_seconds(float amount)
{
    float result = amount * SECONDS_IN_MINUTE;
    printf("Converted amount: %.2f " BLUE "seconds" RESET_COLOR "\n", result);
}

void calculate_hours_to_seconds(float amount)
{
    float result = amount * SECONDS_IN_HOUR;
    printf("Converted amount: %.2f " BLUE "seconds" RESET_COLOR "\n", result);
}

void calculate_hours_to_minutes(float amount)
{
    float result = amount * MINUTES_IN_HOUR;
    printf("Converted amount: %.2f " YELLOW "minutes" RESET_COLOR "\n", result);
}

void calculate_minutes_to_hours(float amount)
{
    float result = amount / MINUTES_IN_HOUR;
    printf("Converted amount: %.2f " GREEN "hours" RESET_COLOR "\n", result);
}