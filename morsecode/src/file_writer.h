#include <stdio.h>

void write_morse(char* path, char* username, char *user_id)
{
	FILE *file_pointer = fopen(path, "w+");
	if (file_pointer == NULL)
	{
		printf("Something went wrong, please check again the output path.\r\n");
		exit(1);
	}

	fprintf(file_pointer, "Username: %s\r\n", username);
	fprintf(file_pointer, "User ID: %s\r\n", user_id);

	fclose(file_pointer);
}