#include <stdio.h>

char* proverb = "All that glisters is not gold.";
	
void setPointer(char** q) {
	*q = proverb;
}

main(void) {
	char* p = "zzz";
	setPointer(&p);
	printf("%s\n", p);

	return 0;
	}