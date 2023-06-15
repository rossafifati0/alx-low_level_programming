#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	int len, fd;
	char *str;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	len = 59;

	fd = open("/dev/stderr", O_WRONLY);
	if (fd == -1)
		return (1);

	if (write(fd, str, len) != len)
		return (1);

	close(fd);

	return (1);
}

