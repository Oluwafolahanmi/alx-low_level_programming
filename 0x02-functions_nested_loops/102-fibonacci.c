#include <stdio.h>
/**
 * main - main funtion
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 1;
	k = i + j;
	for (l = 1 ; l <= 50 ; l++)
	{
		printf("%d", k);
		if (l != 50)
		{
			printf(", ");
		}
		i = j;
		j = k;
		k = i + j;
	}
	printf("\n");
}
