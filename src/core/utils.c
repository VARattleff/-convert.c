#include "colors.h"
#include <stdio.h>

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