#include <string.h>
#include "morse_code_factory.h"

char* get_morse_code(char *word)
{
	char *morse_code = (char*)malloc(10000);
	for (int word_index = 0; word_index < strlen(word); word_index++)
	{
		strcat(morse_code, get_morse_sequence(word[word_index]));
	}

	morse_code[strlen(morse_code) - 1] = 0;
	return morse_code;
}
