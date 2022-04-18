#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
    register short len = 0;
    int (*printFunc)(va_list, mods *);
    mods prefixes = PF_INIT;
    const char *p = format;
    va_list arguments;

    va_start(arguments, format);
    assert(invalidInputs(p));
    for (; *p; p++)

}
