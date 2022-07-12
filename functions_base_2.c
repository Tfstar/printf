#include "main.h"
/**
 * digit_case_S - custom conversion specifier
 * @ptr: A variable that points to a list of arguments
 * @add: A pointer pointing to a memory address within the buffer
 *
 * Return: length of string added to buffer
 */
int digit_case_S(va_list ptr, char **add)
{
	unsigned int pos = 0, len = 0;
	char *save = va_arg(ptr, char *);

	if (save == NULL)
		save = "(null)";
	while (*(save + pos))
	{
		if ((0 < *(save + pos) && 32 > *(save + pos)) || *(save + pos) >= 127)
		{
			**add = '\\';
			(*add)++;
			**add = 'x';
			(*add)++;
			len += 2;
			len += convert_base(16, *(save + pos), 2, add);
			pos++;
		}
		else
		{
			**add = *(save + pos);
			(*add)++;
			pos++;
		}
	}
	return (0);
}
