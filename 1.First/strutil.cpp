#include <string.h>
//Задание 2
int srtConteins(char* a, char* str)
{
	int x = strlen(str) - strlen(a);
	int k = 0;
	while (k != x + 1)
	{
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] != str[k + i]) {
				break;
			}
			else
			{
				if (i == strlen(a) - 1) {
					return k;
				}
			}
		}
		k++;
	}
	return -1;
}