#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	pid_t child_pid;
	int counter = 0;
	int status;

	for (;counter < 5; counter++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("Error");
			return (-1);
		}
		if (child_pid == 0)
		{
				if (execve(argv[0], argv, NULL) == -1)
				{
					perror("Error:");
				}
				sleep(1);
		}
		else
		{
			wait(&status);
		}
	}
	printf("Connection terminated.");
	return (1);
}
