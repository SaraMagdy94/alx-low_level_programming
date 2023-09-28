/**
* flp_bits - Returns the number of bits needed to flip from one number to another.
* @n: First number.
* * @m: Second number.
* *
* * Return: Number of bits to flip.
*/

unsigned int flip_bits(unsigned int n, unsigned int m)
{
	unsigned int d = n ^ m;
	unsigned int c = 0;

	while (d > 0)
	{
		c += d & 1;
		d >>= 1;
	}

	return c;
}

