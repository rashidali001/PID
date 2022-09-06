#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	int age = 10;

	pid = fork();
	
	if ( pid == 0 )
	{
		printf("This is the 1st child\n");
		printf("Value of age: %d\n", age);
		exit (0);
	}
	
	pid = fork ();
	if (pid == 0 )
	{
		printf("This is the 2nd child\n");
		printf("Value of age: %d\n", age);
		exit (0);
	}
	printf("This ia the parent\n");
	printf("Value of age: %d\n", age);
	printf("Calling my children now!\n\n");
	return (0);
}



