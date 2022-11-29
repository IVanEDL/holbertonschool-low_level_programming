#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int ac, char **av)
{
	char  *tokens;
	char *buffer;
	size_t *bufsize = 0;
	char *sep = " ";
	int status;
	pid_t child_pid;

	if (child_pid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
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
			tokens = strtok(buffer, sep);
			while (tokens != NULL)
				tokens = strtok(NULL, sep);
			child_pid = fork();
			wait(&status);
		}
		printf("Connection terminated.");
		return (1);
	}
}
