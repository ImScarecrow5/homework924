#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

void main()
{
	// Равнобедренная трапеция. Задается высота и верхнее основание
	setlocale(LC_ALL, "RUS");

	int topb, h;
	char symb;

	puts("Enter the symbol from which the shape will be built:");
	scanf("%c", &symb);

	puts("Enter the upper base of the trapezoid:");
	scanf("%d", &topb);

	puts("Enter the Height:");
	scanf("%d", &h);

	int empt = topb;
	int eh = 0;

	for (int i = 0; i < h; i++)
	{
		printf(" ");
	}

	for (int i = 0; i < topb; i++)
	{
		printf("%c", symb);
	}

	printf("\n");

	for (int i = h - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}

		printf("%c", symb);

		for (int j = 0; j < eh; j++)
		{
			printf(" ");
		}

		printf("%c", symb);

		for (int j = 0; j < topb - 2; j++)
		{
			printf(" ");
		}

		printf("%c", symb);

		for (int j = 0; j < eh; j++)
		{
			printf(" ");
		}

		printf("%c", symb);

		empt += 2;
		eh += 1;

		printf("\n");
	}

	for (int i = 0; i < empt + 2; i++)
	{
		printf("%c", symb);
	}

	return 0;
}