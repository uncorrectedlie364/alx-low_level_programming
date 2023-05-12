#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the text file to STDOU
 * @filename : the text file being read
 * @letter : the number of letters read
 * Return : w-vactual number of bytes that are read and printed
 * 0 (when the function fails or filename is NULL)
 */

ssize_t reda_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if(fd == -1)
		return (0);
	buf = malloc(sizof(char)*letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
