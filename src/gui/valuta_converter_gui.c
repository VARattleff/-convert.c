#include <stdio.h>
#include "colors.h"

void print_all_flags()
{
    printf(BG_BLUE "    " BG_RED "        " RESET "\t"); 
    printf(BG_BLUE "    " YELLOW " * " BG_BLUE "    " BG_BLUE " " RESET "\t");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");

    printf(BG_BLUE "    " BG_WHITE "        " RESET "\t");
    printf(BG_BLUE " " YELLOW " *     * " BG_BLUE " " BG_BLUE " " RESET "\t");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");

    printf(BG_RED "            " RESET "\t");
    printf(BG_BLUE "    " YELLOW "   " BG_BLUE "    " BG_BLUE " " RESET "\t");
    printf(BG_WHITE "    " BG_WHITE "  " BG_WHITE "      "  RESET "\n");

    printf(BG_WHITE "            " RESET "\t");
    printf(BG_BLUE " " YELLOW " *     * " BG_BLUE " " BG_BLUE " " RESET "\t");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");

    printf(BG_RED "            " RESET "\t");
    printf(BG_BLUE "    " YELLOW " * " BG_BLUE "    " BG_BLUE " " RESET "\t");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");

}

void display_valuta_intro() 
{
    printf("\n" "Welcome to the Currency Converter!\n");
    printf("In this program, you can easily convert between the world's most commonly used currencies.\n");
    printf("\n");
    print_all_flags();
}

void display_currency_conversion_options() 
{
    printf("\n");
    printf("Please select the currency conversion you want to perform by entering the corresponding letter and pressing Enter:\n\n");

    printf(" (a) " BLUE "USD" RESET_COLOR  " -> "  YELLOW "EUR" RESET_COLOR  " (US Dollar to Euro)\n");
    printf(" (b) " BLUE "USD" RESET_COLOR  " -> "  RED "DKK" RESET_COLOR  " (US Dollar to Danish Krone)\n");

    printf(" (c) " YELLOW "EUR" RESET_COLOR  " -> "  RED "DKK" RESET_COLOR  " (Euro to Danish Krone)\n");
    printf(" (d) " YELLOW "EUR" RESET_COLOR  " -> "  BLUE "USD" RESET_COLOR  " (Euro to US Dollar)\n");

    printf(" (e) " RED "DKK" RESET_COLOR  " -> "  BLUE "USD" RESET_COLOR  " (Danish Krone to US Dollar)\n");
    printf(" (f) " RED "DKK" RESET_COLOR  " -> "  YELLOW "EUR" RESET_COLOR  " (Danish Krone to Euro)\n");

    printf(" (q) " GREEN "Return to main menu..." RESET_COLOR  " \n");

    printf("\nEnter your choice (a-f): ");
}

void valuta_option_a() 
{
    printf("\nYou selected option a " BLUE "USD " RESET_COLOR "-> " YELLOW "EUR " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void valuta_option_b() 
{
    printf("\nYou selected option b " BLUE "USD " RESET_COLOR "-> " RED "DKK " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void valuta_option_c() 
{
    printf("\nYou selected option c " YELLOW "EUR " RESET_COLOR "-> " RED "DKK " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void valuta_option_d() 
{
    printf("\nYou selected option d " YELLOW "EUR " RESET_COLOR "-> " BLUE "USD " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void valuta_option_e() 
{
    printf("\nYou selected option e " RED "DKK " RESET_COLOR "-> " BLUE "USD " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}

void valuta_option_f() 
{
    printf("\nYou selected option f " RED "DKK " RESET_COLOR "-> " YELLOW "EUR " RESET_COLOR "\n");
    printf("Please enter the value to be converted: ");
}
