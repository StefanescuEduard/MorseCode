#include <string.h>
#include "morse_code.h"

char* get_word(char *line, char *delimeter, int iterations);

char* get_morse_username(char* line)
{
	char *username = get_word(line, ":", 0);
	return get_morse_code(username);
}

char* get_morse_user_id(char *line)
{
	char *user_id = get_word(line, ":", 2);
	return get_morse_code(user_id);
}

char* get_word(char *line, char *delimeter, int iterations)
{
	int current_index = 0;
	char *temporary_line = malloc(strlen(line) + 1);
	strcpy(temporary_line, line);
	char *word = strtok(temporary_line, delimeter);
	
	while (word != NULL && current_index < iterations)
	{
		word = strtok(NULL, delimeter);
		current_index++;
	}

	return word;
}