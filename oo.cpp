

#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <Windows.h>
#include <stdio.h>
#include "textprocessing.h"

#define MAXNUM 512

/* GOOD WORK CHARLES, OO C++ !!! */
/* PLEASE HIRE ME, CHARLES THOMAS WALLACE TRUSCOTT WATTERS AT GITHUB.COM/CTWTRUSCOTTWATTERS */
/* C++ DEV */
/* BYRON BAY, NSW 2481 AUSTRALIA */

int main()
{
    TextProcessing OO_TP_CLASS((char *)"Charles Truscott", (char *) "13/01/1993");
    OO_TP_CLASS.set_values();
    OO_TP_CLASS.print_both();
    OO_TP_CLASS.print_memloc();
    std::cout << "The length of both strings are together: " << OO_TP_CLASS.return_length_of_both() << std::endl;

}
