#include <stdio.h>
#include "valuta_converter.h"
#include "time_converter.h"
#include "weight_converter.h"
#include "convert.h"
#include "utils.h"

void handle_convert_selection();

int main() 
{
    int exit_system = 0;
    int step = 1;

    display_convert_intro();

    while (!exit_system) 
    {
        switch (step)
        {
            case 1:
                handle_convert_selection();
                break;
            default:
                exit_system = 1; 
                break;
        }
    }

    return 0;
}

void handle_convert_selection()
{
    int valid_input_selected_conversion = 0;
    char selected_conversion;

    while (!valid_input_selected_conversion)
    {
        display_convert_conversion_options();

        selected_conversion =  get_int_value();

        while (getchar() != '\n'); 

        float amount; 

        switch (selected_conversion)
        {
            case 1:
                weight_main();
                valid_input_selected_conversion = 1;
                break;
            case 2:
                valuta_main();
                valid_input_selected_conversion = 1;
                break;
            case 3:
                time_main();
                valid_input_selected_conversion = 1;
                break;
            default:
                print_invalid_choice();
                break;
        }
    }
}
