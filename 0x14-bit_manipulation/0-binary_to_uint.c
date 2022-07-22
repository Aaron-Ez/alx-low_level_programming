#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int azi, vec = 0;

if (!b)
return (0);
for (azi = 0; b[azi] != '\0'; azi++)
{
if (b[azi] != '0' && b[azi] != '1')
return (0);
if (b[azi] == '1')
vec = vec * 2 + 1;
else
vec = vec * 2 + 0;
}
return (vec);
}
