#include "main.h"


/**
 * _abs - output the absolute value of any number
 * @c - input character
 * Return: absolue value or poseive number
 */
int _abs(int c)
{
if (c < 0)
{
int absolute;
absolute = c * -1;
return (absolute);
}
return (c);
}

