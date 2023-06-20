#include "main.h"
/**
 *_isalpha - checks the alphabetic character
 *@c: The character to be checked
 *Return: if c is a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
