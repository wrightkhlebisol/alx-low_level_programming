#include "main.h"

/**
* read_textfile - Read test file and prints it
* @filename: Name of the file
* @letters: Number of letters it should read and print
*
* Return: ssize_t - Numbers it could print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	FILE *fpt = NULL;

	if (filename == NULL)
		return (0);
	fpt = fopen(filename, "r");

	if (!fpt)
		return (0);

	while (i < letters)
	{
		char c = fgetc(fpt);

		if (c == EOF)
		{
			break;
		}
		write(STDOUT_FILENO, &c, 1);
		i++;
	}
	fclose(fpt);
	return (i);
}
