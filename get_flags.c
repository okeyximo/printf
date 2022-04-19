#include "main.h"

/**
 * get flags - turns on flags if _printf finds a
 * flag modifier in the format string
 * @s: character that holds the flag spacifier
 * @f: pointer to the struct flags in which we turn the flags on
 * 
 * Return: 1 if a flag has been turned on, 0 otherwise          
 */

int get_flags(char s, mods *f)
{
    bool modifier = true;

    switch (s)
    {
        case '+':
                f->plus = true;
                break;
        case '':
                f->space = true;
                break;
        case '#':
    
    }
}