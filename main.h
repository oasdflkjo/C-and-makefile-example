/****************************************************************************
    Created by: Petri Pihla
    Created on: 3.3.2020
 ****************************************************************************/
#ifndef MAIN_H
#define MAIN_H

#define MAX_USER_INPUT_LENGTH 100
#define MAX_STRING_LENGTH 100

enum command
{
    COUNT_VOWELS = 1,
    COUNT_CONSONANTS,
    CONVERT_TO_UPPERCASE,
    CONVERT_TO_LOWERCASE,
    DISPLAY_STRING,
    ENTER_STRING,
    READ_STRING_FROM_FILE,
    WRITE_STRING_TO_FILE,
    EXIT
};

/**
 * @brief Displays the menu.
 */
void display_menu();

/**
 * @brief Prints the given string.
 */
void print_string(char *string);

/**
 * @brief Asks the user for a command.
 * @return The command.
 *
 * Asks the user for a input and then returns it as an integer.
 * Commands are defined in the enum command.
 */
int ask_command();

#endif
