#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(__attribute__((__unused__))int ac, char __attribute__((__unused__))**av)
{
	char  *tokens;
	char *buffer;
	size_t *bufsize = 0;
	int status, p = 0;
	pid_t child_pid;
	char **input;

	child_pid = fork();
	if (child_pid == 0)
	{
		if (execve(input[0], input, NULL) == -1)
			perror("Error:");
		sleep(1);
		return (1);
	}
	else
	{
		while (1)
		{
			printf("$ ");
			getline(&buffer, bufsize, NULL);
			if (strcmp(buffer, "exit\n") == 0)
				break;
			tokens = strtok(buffer, " ");
			while (tokens != NULL)
			{
				input[p] = tokens;
				tokens = strtok(NULL, " ");
				p++;
			}
			wait(&status);
		}
		printf("Connection terminated.");
		return (1);
	}
}
