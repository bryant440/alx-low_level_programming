#ifndef _FILE_H
#define _FILE_H

#include "main.h"
/**
 * slen - string length
 * @s: string
 * Return: length
 */

__home int slen(char *s)
{
	if (!*s)
		return (0);
	s++;
	return (1 + slen(s));
}

#endif
