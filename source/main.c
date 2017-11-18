#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int a[10] = { 2, 7, 4, 10, 89, 12, 30, 68, 45, 37 };
	int pass, i, hold, number = 0, j = 10;

	printf("Data items in original order\n");

	for (i = 0; i < j; ++i)
	{
		printf("%4d", a[i]);
	}
	for (pass = 1; pass < j; ++pass)
	{
		number = 0;

		for (i = 0; i < j - 1; ++i)
		{
			if (a[i]>a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				number++;
			}
		}
		if (number == 0)
		{
			printf("\nData items in ascending order\n");

			for (i = 0; i < SIZE; ++i)
			{
				printf("%4d", a[i]);
			}
			printf("\n");

			system("pause");
		}
		j--;
	}
}