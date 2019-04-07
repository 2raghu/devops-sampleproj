#include<stdio.h>
#include<stdlib.h>

struct q
{
	int a;
	char b;
	char c;
};

int main(void)
{
	struct q p;
	printf("Hello  world !!!\n");
	printf("size of struct q %ld !!!\n",sizeof(p));

	return 0;
}
