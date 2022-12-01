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
	char *sep = " ";
	int status, i = 0, p = 0;
	pid_t child_pid = 1;
	char *input[8][10];

	if (child_pid == 0)
	{
		if (execve(input[i][p], input[i], NULL) == -1)
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
			{
				input[i][p] = tokens;
				tokens = strtok(NULL, sep);
				p++;
			}
			child_pid = fork();
			wait(&status);
			i++;
		}
		printf("Connection terminated.");
		return (1);
	}
}
