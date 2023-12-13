#include "main.h"

/**
 * binary_to_uint - converst binary to unsigned int
 * @b: is the binary string
 * @value : is the unsigned int
 * @return the corresponding unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			i++;
			continue;
		}
		value <<= 1;
		if (b[i] == '1')
		{
			value++;
		}
		i++;
	}
	return (value);
}
