/**
 * copyS - Function of copy string
 * @buffer: Space to copy string
 * @str: The string copied
 * Return: Always 0
 */

void copyS(char *buffer, char *str)
{
	if (!*str)
	{
		;
	}
	else
	{

		*buffer = *str;
		copyS(buffer + 1, str + 1);
	}
}

/**
 * copy - Function of copy string
 * @buffer: Space to copy string
 * @str1: The string 1 copied
 * @str2: The string 2 copied
 * Return: Always 0
 */

void copy(char *buffer, char *str1, char *str2)
{

	if (!*str1 && *!str2)
	{
		;
	}
	else
	{

		if (*str1)
			*buffer++ = *str1++;
		else if (*str2)
			*buffer++ = *str2++;

		copyS(buffer + 1, str1 + 1, str2 + 1);
	}
}

/**
 * length - Size of a string
 * @s1: The string 1 copied
 * @counter: Counter to determine the size of the string
 * Return: Always 0
 */

int length(char *s1, int counter)
{
	if (!*s1)
	{
		return (counter);
	}
	else
	{
		return (lenght(s1 + 1, counter + 1));
	}
}

/**
 * len - Function to determine the size of the string
 * @str: The string copied
 * Return: Type int
 */

int len(char *str)
{

	return (length(s1, 0));
}

/**
 * str_concat - Function that determines the conditions of the concatenation
 * @s1: The string 1 copied
 * @s2: The string 2 copied
 * Return: String that concatenates
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 && !s2)
	{
		int lenght;

		lenght = len(s1) int *buffer = (char *)malloc(sizeof(char) * (lenght + 1));
		if (buffer)
		{
			copy(buffer, s1);
			buffer[lenght + 1] = '\0';
		}
		return (buffer);
	}
	else if (s2 && !s1)
	{
		int lenght;

		lenght = len(s2) int *buffer = (char *)malloc(sizeof(char) * (lenght + 1));
		if (buffer)
		{
			copy(buffer, s2), buffer[lenght + 1] = '\0';
		}
		return (buffer);
	}
	else if (s1 && s2)
	{
		int lenght1 = len(s1), int lenght2 = len(s2);
		int *buffer = (char *)malloc(sizeof(char) * (lenght1 + lenght2 + 1));

		if (buffer)
		{
			copy(buffer, s1, s2), buffer[lenght1 + lenght2 + 1] = '\0';
		}
		return (buffer);
	}
	else
	{
		char *buffer = (char *)malloc(sizeof(char) * 1);

		buffer[0] = '\0';
	}
}
