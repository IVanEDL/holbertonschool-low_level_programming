#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char *buff;
	size_t bufsize = 0;
	int status = 1;
	char *token;
	char *sep = " ";

	while (status = 1)
	{
		if (buff == NULL)
		{
			printf("Cagaste light");
			return (0);
		}
		printf("$ ");
		getline(&buff, &bufsize, stdin);
		if (strcmp(buff, "exit") == 1)
			status--;
		token = strtok(buff, sep);

		while(token != NULL)
		{
			printf("%s\n", token);

			token = strtok(NULL, sep);
		}
	}
}
