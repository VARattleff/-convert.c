//main  gui ofc

#include <stdio.h>
#include "colors.h"
void print_danish_flag();
void print_eu_flag();
void print_us_flag();

void display_intro() 
{
    printf(BG_GREEN BLUE"bagrund og text farve \n");
    printf("har arveet fra før\n" RESET_COLOR);
    printf("er belvet resat\n");

    print_danish_flag();
    print_eu_flag();
    print_us_flag();
}

void print_danish_flag() {
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");
    printf(BG_WHITE "    " BG_WHITE "  " BG_WHITE "      "  RESET "\n");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");
    printf(BG_RED "  " BG_WHITE "  " BG_RED "        "  RESET "\n");
    printf("\n");
}

void print_eu_flag() {
    printf(BG_BLUE "    " YELLOW " * " BG_BLUE "    " BG_BLUE " " RESET "\n");
    printf(BG_BLUE " " YELLOW " *     * " BG_BLUE " " BG_BLUE " " RESET "\n");
    printf(BG_BLUE "    " YELLOW "   " BG_BLUE "    " BG_BLUE " " RESET "\n");
    printf(BG_BLUE " " YELLOW " *     * " BG_BLUE " " BG_BLUE " " RESET "\n");
    printf(BG_BLUE "    " YELLOW " * " BG_BLUE "    " BG_BLUE " " RESET "\n");
    printf("\n");
}

void print_us_flag() {
    printf(BG_BLUE "    " BG_RED "        " RESET "\n");
    printf(BG_BLUE "    " BG_WHITE "        " RESET "\n");
    printf(BG_RED "            " RESET "\n");
    printf(BG_WHITE "            " RESET "\n");
    printf(BG_RED "            " RESET "\n");
    printf(BG_WHITE "            " RESET "\n");
    printf("\n");
}
