#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *argv[]= {"/bin/ls", "/PID/", NULL};

	if ((execve(argv[0], argv, NULL)) == -1)
	{
		printf("Error: Did not execute");
	}

	return (0);
}
