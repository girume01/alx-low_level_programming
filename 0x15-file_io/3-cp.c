#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
void exitw(int code, const char* message, const char* arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
int main(int argc, char *argv[])
{
	int From = open(argv[1], O_RDONLY);
	int To = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	char buffer[BUFFER_SIZE];
	ssize_t read1, write1;

	if (argc != 3)
		exitw(97, "%s\n", argv[0]);
	if (From == -1)
		exitw(98, "%s\n", argv[1]);
	if (To == -1)
		exitw(99, "%s\n", argv[2]);
	while ((read1 = read(From, buffer, BUFFER_SIZE)) > 0)
	{
		write1 = write(To, buffer, read1);
		if (write1 != read1)
			exitw(99, "%s\n", argv[2]);
	}
	if (read1 == -1)
		exitw(98, "%s\n", argv[1]);

	if (close(From) == -1 || close(To) == -1)
		exitw(100, "Error\n", "");

	return (0);
}
