#include <string.h>
#include <ctype.h> 
#include <stdio.h> 

char* get_morse_character_sequence(char character);
char* get_morse_number_sequence(char character);
char* get_unknown_character(char character);

char* get_morse_sequence(char character)
{
	char lower_character = (char)tolower(character);
	if (isalpha(lower_character))
	{
		return get_morse_character_sequence(lower_character);
	}
	else if (isdigit(lower_character))
	{
		return get_morse_number_sequence(lower_character);
	}
	else
	{
		return get_unknown_character(lower_character);
	}
}

char* get_unknown_character(char character)
{
	switch (character)
	{
		case '-':
			return "-····- ";
		case '_':
			return "··--·- ";
		default:
			return "unsuported character";
	}
}

char* get_morse_number_sequence(char character)
{
	switch (character)
	{
		case '0':
			return "----- ";
		case '1':
			return ".---- ";
		case '2':
			return "..--- ";
		case '3':
			return "...-- ";
		case '4':
			return "....- ";
		case '5':
			return "..... ";
		case '6':
			return "-.... ";
		case '7':
			return "--... ";
		case '8':
			return "---.. ";
		case '9':
			return "----. ";
		default:
			return "unknown number";
	}
}

char* get_morse_character_sequence(char character)
{
	switch (character)
	{
		case 'a':
			return ".- ";
		case 'b':
			return "-... ";
		case 'c':
			return "-.-. ";
		case 'd':
			return "-.. ";
		case 'e':
			return ". ";
		case 'f':
			return "..-. ";
		case 'g':
			return "--. ";
		case 'h':
			return ".... ";
		case 'i':
			return ".. ";
		case 'j':
			return ".--- ";
		case 'k':
			return "-.- ";
		case 'l':
			return ".-.. ";
		case 'm':
			return "-- ";
		case 'n':
			return "-. ";
		case 'o':
			return "--- ";
		case 'p':
			return ".--. ";
		case 'q':
			return "--.- ";
		case 'r':
			return ".-. ";
		case 's':
			return "... ";
		case 't':
			return "- ";
		case 'u':
			return "..- ";
		case 'v':
			return "...- ";
		case 'w':
			return ".-- ";
		case 'x':
			return "-..- ";
		case 'y':
			return "-.-- ";
		case 'z':
			return "--.. ";
		default:
			return "unknown character";
	}
}