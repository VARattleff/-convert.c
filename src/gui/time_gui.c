#include <stdio.h>
#include "colors.h"

void display_time_intro() 
{
    printf("\n" "Welcome to the Time Converter!\n");
    printf("In this program, you can easily convert between seconds, minutes, and hours.\n");
}

void display_time_conversion_options() 
{
    printf("\n");
    printf("Please select the conversion you want to perform by entering the corresponding letter and pressing Enter:\n\n");

    printf(" (a) " BLUE "Seconds" RESET_COLOR  " -> "  YELLOW "Minutes" RESET_COLOR  " (Seconds to Minutes)\n");
    printf(" (b) " BLUE "Seconds" RESET_COLOR  " -> "  GREEN "Hours" RESET_COLOR  " (Seconds to Hours)\n");

    printf(" (c) " YELLOW "Minutes" RESET_COLOR  " -> "  BLUE "Seconds" RESET_COLOR  " (Minutes to Seconds)\n");
    printf(" (d) " GREEN "Hours" RESET_COLOR  " -> "  BLUE "Seconds" RESET_COLOR  " (Hours to Seconds)\n");

    printf(" (e) " GREEN "Hours" RESET_COLOR  " -> "  YELLOW "Minutes" RESET_COLOR  " (Hours to Minutes)\n");
    printf(" (f) " YELLOW "Minutes" RESET_COLOR  " -> "  GREEN "Hours" RESET_COLOR  " (Minutes to Hours)\n");

    printf(" (q) " GREEN "Return to main menu..." RESET_COLOR  " \n");

    printf("\nEnter your choice (a-g): ");
}

void time_option_a() 
{
    printf("\nYou selected option a " BLUE "Seconds " RESET_COLOR "-> " YELLOW "Minutes " RESET_COLOR "\n");
    printf("Please enter the value to be converted (seconds): ");
}

void time_option_b() 
{
    printf("\nYou selected option b " BLUE "Seconds " RESET_COLOR "-> " GREEN "Hours " RESET_COLOR "\n");
    printf("Please enter the value to be converted (seconds): ");
}

void time_option_c() 
{
    printf("\nYou selected option c " YELLOW "Minutes " RESET_COLOR "-> " BLUE "Seconds " RESET_COLOR "\n");
    printf("Please enter the value to be converted (minutes): ");
}

void time_option_d() 
{
    printf("\nYou selected option d " GREEN "Hours " RESET_COLOR "-> " BLUE "Seconds " RESET_COLOR "\n");
    printf("Please enter the value to be converted (hours): ");
}

void time_option_e() 
{
    printf("\nYou selected option e " GREEN "Hours " RESET_COLOR "-> " YELLOW "Minutes " RESET_COLOR "\n");
    printf("Please enter the value to be converted (hours): ");
}

void time_option_f() 
{
    printf("\nYou selected option f " YELLOW "Minutes " RESET_COLOR "-> " GREEN "Hours " RESET_COLOR "\n");
    printf("Please enter the value to be converted (minutes): ");
}

void time_option_g() 
{
    printf("\nYou selected option g " GREEN "Return to main menu..." RESET_COLOR "\n");
}