#include <stdio.h>
#include <cs50.h>

// printf ANSI macros
#define ANSI   "\x1b["
#define COLOR_RESET   "\x1b[0m"
#define AND     ";"
#define DONE    "m"
#define BRIGHT  "1"
#define FAINT   "2"
#define PLAIN   "22"
#define FG      "3"
#define BG      "4"
#define BLACK   "0"
#define RED     "1"
#define GREEN   "2"
#define YELLOW  "3"
#define BLUE    "4"
#define MAGENTA "5"
#define CYAN    "6"
#define WHITE   "7"

#define TEST1 ANSI BG BLUE AND PLAIN AND FG GREEN AND BRIGHT DONE
#define TEST2 ANSI FG YELLOW AND BG GREEN DONE

#define FORMAT(fg, weight, bg) (ANSI "3" fg ";" "4" bg ";" weight DONE)

int main()
{
    printf(TEST1);
    printf("ANSI MACRO TEST 1 ");
    printf(TEST2);
    printf("ANSI MACRO TEST 2");
    printf(COLOR_RESET);

    printf("\n\n");

    string test_string = "    TESTING    ";

    printf(FORMAT(GREEN, FAINT, WHITE));
    printf("%s", test_string);
    printf(COLOR_RESET "\n");

    printf(FORMAT(BLACK, PLAIN, YELLOW));
    printf("%s", test_string);
    printf(COLOR_RESET "\n"); 

    printf(FORMAT(YELLOW, BRIGHT, MAGENTA));
    printf("%s", test_string);  
    printf(COLOR_RESET "\n");
}
