#include <stdio.h>

int main(void)
{
	int x, y;

	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y; x++)           //y¹ø ¹Ýº¹
			printf("*");

		printf("\n");
	}

	return 0;
}