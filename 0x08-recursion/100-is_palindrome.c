#include "main.h"

/**
 *_strlen_recursion - toget the string length
 *@s: string
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compare each character of the string
 * @s: string
 * @left: itrator
 * @right: itrator
 *
 * Return: int
 */
int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		else
			return (0 + compare_string(s, (left + 1), (right - 1)));
	}
	else
		return (0);

}
/**
 * is_palindrome - check if the string is palindrome
 * @s: the string to be checked
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
