/**
 * append_text_to_file - add text_content to file
 * @filename: name of file to append to
 * @text_content: content to append
 *
 * Return: number of written test or error id
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = NULL;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	/** Open the file in append mode */
	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	/** Append the text content to the file */
	size_t len = strlen(text_content);

	if (fwrite(text_content, sizeof(char), len, file) != len)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
