#include "main.h"

int main(void)
{
	char **tokens = malloc(8 * sizeof(char *));
	char *buffer;
	size_t *bufsize = 0;
	int status;
	pid_t child_pid;

	while (1)
	{
		printf("$ ");
		getline(&buffer, bufsize, NULL);
		tokens = tokenize(strdup(buffer));
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(tokens[0], tokens, NULL) == -1)
			{
				perror("Error");
			}
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
