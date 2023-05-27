#include "main.h"
/**
 * create_file - Creates a file
 * @filename: Name of file to create
 * @text_content: Content to write
 *
 * Return: int - op result
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	// Open the file with write-only permissions 
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	
	if (fd == -1)
		return (-1);

	// Write the text content to the file if it is not NULL
	if (text_content != NULL) {
		size_t len = strlen(text_content);
		ssize_t bytes_written = write(fd, text_content, len);
		if (bytes_written == -1) {
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
