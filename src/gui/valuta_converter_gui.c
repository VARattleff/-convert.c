//main  gui ofc

#include <stdio.h>
#include "colors.h"
#include "utils.h"

void display_intro() 
{
    printf( GREEN "-----------------------------------------------------------------------------------\n" RESET_COLOR);

    printf("   **       **   ******   **        *****        **         ****   ****   ******   \n");
    printf("   **       **   **       **       **         **    **      **  ***  **   **       \n");
    printf("   **   *   **   ******   **       **       ***      ***    **   *   **   ******   \n");
    printf("   **  ***  **   **       **       **         **    **      **       **   **       \n");
    printf("   ****   ****   ******   ******    *****        **         **       **   ******   \n");

    printf( GREEN "-----------------------------------------------------------------------------------\n" RESET_COLOR);
    printf("\n");

    printf("Easily convert between the worlds most commonly used currencies:\n"); 
    printf("\n");

    print_all_flags();
    printf("\n");

    printf("-->");
    printf( BLUE" USD " RESET_COLOR);
    printf("(US Dollar / freedom unit)\n");

    printf("-->");
    printf( YELLOW" EUR " RESET_COLOR);
    printf("(Euro)\n");

    printf("--> ");
    printf( RED"DKK " RESET_COLOR);
    printf("(Danish Krone)\n");
}