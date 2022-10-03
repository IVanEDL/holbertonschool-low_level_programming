#include "main.h"

/**
 * jack_bauer - prints all minutes of a day
 * Return: 0
 */

void jack_bauer(void)
{
	int min1 = 0;
	int min2 = 0;
	int hr1 = 0;
	while (hr1 <= 24)
	{
		while (min1 <= 9)
		{
			while (min2 <= 9)
			{
				printf("%d:%d%d", hr1, min1, min2);
				min2++;
			}
			min1++;
		}
		hr1++;
	}
}

