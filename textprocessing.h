#include <string.h>
/* GOOD WORK CHARLES, OO C++ !!! */
/* PLEASE HIRE ME, CHARLES THOMAS WALLACE TRUSCOTT WATTERS AT GITHUB.COM/CTWTRUSCOTTWATTERS */
/* C++ DEV */
/* BYRON BAY, NSW 2481 AUSTRALIA */

class TextProcessing {
public:
    typedef struct all_info_on_strings {
        char* first_string;
        char* second_string;
        int first_string_length;
        int second_string_length;
        void* first_memloc;
        void* second_memloc;
    } all_info_on_strings;
    TextProcessing::all_info_on_strings Placeholder;
    char* holding_the_first;
    char* holding_the_second;

    class TextProcessing(char* first, char* second) {
        holding_the_first = (char *) first;
        holding_the_second = (char *) second;
        Placeholder.first_string = holding_the_first;
        Placeholder.second_string = holding_the_second;
        Placeholder.first_string_length = strlen(holding_the_first);
        Placeholder.second_string_length = strlen(holding_the_second);
        Placeholder.first_memloc = &holding_the_first;
        Placeholder.second_memloc = &holding_the_second;
       
    }
    void set_values() {
    }
    int return_length_of_both() {
        return strlen(holding_the_first) + strlen(holding_the_second);
    }
    void print_both() {
        std::cout << "The first string is: " << holding_the_first << std::endl;
        std::cout << "It's length is: " << Placeholder.first_string_length << std::endl;
        std::cout << "The second string is: " << holding_the_second << std::endl;
        std::cout << "It's length is: " << Placeholder.second_string_length << std::endl;
    }
    void print_memloc() {
        printf("The memory address of string one is: %p\n", Placeholder.first_memloc);
        printf("The memory address of string two is: %p\n", Placeholder.second_memloc);
    }
};