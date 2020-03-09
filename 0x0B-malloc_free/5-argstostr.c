#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of strings
 *
 * Return: argstr being address to array of concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *argstr;
	int counter = 0, i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			counter++;
			j++;
		}
		i++;
	}
	argstr = malloc(sizeof(char) * (counter + ac + 1));
	if (!argstr)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{

			argstr[k] = av[i][j];
			k++;
			j++;
		}
		argstr[k] = '\n';
		k++;
	}
	argstr[k] = '\0';
	return (argstr);
}
