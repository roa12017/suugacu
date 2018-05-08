#include<stdio.h>

int main(void)
{
	int x = 0xAF;

	int y = 0;

	x = x & 0x08;

	y = (x >> 3);

	getchar();
	return 0;
}