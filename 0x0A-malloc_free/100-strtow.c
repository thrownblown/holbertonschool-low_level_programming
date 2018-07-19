#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - string.split(' ')
 * @str: str to split
 *
 * Return: pointer to array of strings*
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, j = 0, k = 0, c = 0;

	if (str == NULL)
		return (0);

	/*count words*/
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			c++;
			i++;
			while  (str[i] == ' ')
					i++;
		}
		else
			i++;
	}
	if (str[0] != ' ')
		c++;
	if (str[i] != ' ')
		c++;

	if (!c)
		return (0);

	arr = malloc(c + 1);

	if (!arr)
		return (0);

	for (i = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			continue;

		/*get word size*/
		for (c = 0; str[j] != ' '; j++)
		{
			c++;
		}
		/*malloc & free word mem*/
		arr[i] = malloc(c + 1);
		if (!arr[i])
		{
			free(arr[i]);
			while(i)
				free(arr[--i]);
			free(arr);
			return (0);
		}

		/*assign str vals*/
		k = 0;
		for (c = j - c; c < j; c++)
		{
				arr[i][k++] = str[c];
		}
		arr[i][k] = '\0';
		i++;
	}
	/*last array elem NULL*/
	arr[i] = NULL;
	return (arr);
}
