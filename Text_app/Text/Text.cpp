#include <stdio.h>
#define NL "\n"

typedef char* String;

void printCenter(String txt, int width);

int main(void) {
	printCenter("Sample text", 40);
	printf(NL);
	printCenter("Centered when using", 40);
	printf(NL);
	printCenter("End of text", 40);
	printf(NL);

	return 0;
}

void printCenter(String txt, int width)
{
	int size = 0;
	char* ptr = txt;
	while (*ptr)
	{
		size++;
		ptr++;
	}

	for (int i = 0; i < (width - size) / 2; i++) printf(" ");
	printf("%s", txt);
}