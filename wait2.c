#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main()
{
	if (fork() == 0)
	{
		printf("Hello, this is the child speaking\n");
		printf("My PID: %u\n", getpid());
	}
	else
	{
		printf("Hello, this is the parent speaking\n Next command child will speak\n");
		wait(NULL);
		printf("It's me again (parent)\n");
		printf("My PID: %u\n", getpid());
	}
	return (0);
}
