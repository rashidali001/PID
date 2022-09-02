#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error: ");
		return (1);
	}
	if (pid == 0)
		printf("Entering the child process\n");
	else
		printf("Entering the parent process\n");
	my_pid = getpid();
	if (pid == 0)
		printf("Child PID: %u\n", my_pid);
	else 
		printf("Parent PID: %u\n", my_pid);
	
	if (pid == 0)
		printf("Value returned was: %d\n", pid);
	else
		printf("Value returned was: %d\n\n", pid);




	return (0);

}
