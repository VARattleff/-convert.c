//main  gui ofc

#include <stdio.h>
#include "colors.h"
#include "utils.h"

void display_intro() 
{
    printf(BG_GREEN BLUE"bagrund og text farve \n");
    printf("har arveet fra før\n" RESET_COLOR);
    printf("er belvet resat\n");

    print_danish_flag();
    print_eu_flag();
    print_us_flag();
}

