#include <stdio.h>

/**
 * floor - function that calculate the lower integer rounding
 * @x: the double or float to input
 * Return: the lower integer rounding
 */

int floor(double x)
{
	int result = (int) x;
    if (x < 0 && x != result)
        result--;
    return result;
}
