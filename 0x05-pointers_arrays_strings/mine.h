#ifndef MINE_H
#define MINE_H

#include <stdlib.h>
#include <string.h>

char* _substr(const char *s, int m, int n)
{
	int len = n - m;
	char *dest = (char*)malloc(sizeof(char) * (len + 1));
	strncpy(dest, (s + m), len);
	return dest;
}

#endif
