#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_line_number(FILE *file_pointer);
char* get_random_line(FILE *file_pointer, int random_line_number);
char* read_random_line(char* path);

char* read_random_line(char* path)
{
	FILE *file_pointer = fopen(path, "r");
	if (file_pointer != NULL)
	{
		int random_line_number = get_random_line_number(file_pointer);
		rewind(file_pointer);
		char* random_line = get_random_line(file_pointer, random_line_number);
		fclose(file_pointer);
		return random_line;
	}
	else
	{
		printf("Something went wrong. Please check again the file path.\r\n");
		exit(1);
	}
}

int get_random_line_number(FILE *file_pointer)
{
	int count = 0;
	
	while (!feof(file_pointer))
	{
		char ch = fgetc(file_pointer);
		if (ch == '\n')
		{
			count++;
		}
	}

	srand(time(NULL));
	return rand() % count + 1;
}

char* get_random_line(FILE *file_pointer, int random_line_number)
{
	int current_line_index = 1;
	char* line = NULL;
	size_t length = 0;
	
	while (current_line_index < random_line_number)
	{
		getline(&line, &length, file_pointer);
		current_line_index++;
	}
	getline(&line, &length, file_pointer);

	return line;
}
