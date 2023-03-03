#include "main.h"

/**
 * cap_string - Capitalizes words of a string
 * @s: String to be modified
 * Return: The resulting string
 */

char *cap_string(char *s)
{
	int a;
	int b;
	char spec[13] = {' ', ',', ';', '.', '!', '?',  '\n', '\t', 
