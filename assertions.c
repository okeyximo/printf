#include "main.h"

/**
 * invalidInputs - validates user did not enter invalid inputs
 * @p: inputs string
 * Return: true or false
 */
bool invalidInputs(const char *p)
{
    /* NULL */
    if (!p)
            return (false);
    /* "%" */
    if (*p == '%' && !*(p + 1))
            return (false);
    /* "% " */
    if (*p == '%' && *(p + 1) == ' ' && !*(p + 2))
            return (false);
    return (true);
}
