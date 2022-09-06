#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int i;
	char *argv[] = { "/bin/ls", "/tmp/", "-l", NULL};

	for (i = 0; i < 5; i++)
	{
		if(fork() == 0)
		{
			printf("Child %d, PID = %u, PPID == %u\n", i, getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
				printf("Error: Did not execute!!");

			exit(1);
		}
		wait(NULL);
	}

	return (0);
}
