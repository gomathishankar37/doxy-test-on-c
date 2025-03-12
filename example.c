/**
 * @file example.c
 * @brief Example C file with Doxygen comments.
 */

#include <stdio.h>
/**
 * @brief Prints a greeting message.
 * 
 * @param name The name to include in the greeting.
 */
void print_greeting(const char *name) {
    printf("Hello, %s!\n", name);
}

/**
 * @brief Prints a greeting message 2
 * 
 * @param name The name to include in the greeting 2.
 */
void print_greeting2(const char *name) {
    printf("Hi, %s!\n", name);
}

int main() {
    print_greeting("World");
    return 0;
}
