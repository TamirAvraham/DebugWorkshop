#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	for (size_t i = 0; i < destsize-1; i++)
	{
		ret[i] = src[i];
	}
	dest = ret;
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[12]={0};
	char src[] = "hello world!";

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
