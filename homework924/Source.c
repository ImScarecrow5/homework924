#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	// �������������� ��������. �������� ������ � ������� ���������
	setlocale(LC_ALL, "RUS");

	int topb, h;
	//char symb;

	//puts("������� ������, �� �������� ����� ��������� ������:");
	//scanf("%c", &symb);

	puts("������� ������� ���������:");
	scanf("%d", &topb);

	puts("������� ������:");
	scanf("%d", &h);

	int unb = topb * 2;

	for (int i = 0; i < h; i++)
	{
		for (int j = topb / 2; j > i; j--)
		{
			printf(" ");
		}

		printf("*");

		for (int j = 0; j < unb - topb + 2 * i - 1; j++)
		{
			if (i != 0 && i != h - 1)
			{
				printf(" ");
			}
		}

		for (int j = 0; j < topb - 2; j++)
		{
			if (i == 0) printf("*");
		}
		for (int j = 0; j < unb - 2; j++)
		{
			if (i == h - 1) printf("*");
		}

		printf("*");

		printf("\n");
	}

	return 0;
}