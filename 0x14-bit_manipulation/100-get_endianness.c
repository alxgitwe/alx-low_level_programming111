#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return:return
 */

int get_endianness(void)
{
	unsigned long int a = 0;

	return (!(*(char *)&a));


}

