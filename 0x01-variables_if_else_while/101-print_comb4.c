#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y != x)
			{
				if (y > x)
				{
					for (z = 0; z <= 9; z++)
					{
						if (z != x)
						{
							if (z != y)
							{
								if (z > y)
								{
									putchar(x + 48);
									putchar(y + 48);
									putchar(z + 48);

									if (!(z == 9 && y == 8 && x == 7))
									{
										putchar(',');
										putchar(' ');
									}
								}
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
