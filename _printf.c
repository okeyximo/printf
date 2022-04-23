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
	register int len = 0;
	int (*printFunc)(va_list, mods *);
	mods prefixes = PF_INIT;
	const char *p = *format;
	va_list arguments;

	va_start(arguments, format);
	/**assert(invalidInputs(p));**/
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				len += _putchar('%');
				continue;
			}
			while (get_flags(*p, &prefixes))
				p++;
			printFunc = get_print(*p);
			len += (printFunc)
				? printFunc(arguments, &prefixes)
				: _printf("%%%c", *p);
		} else
			len += _putchar(*p);
	}
	_putchar(FLUSH);
	va_end(arguments);
	return (len);
}
