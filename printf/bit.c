#include <stdio.h>

int main(void) {
	float i;
	int j=0, k=0, m=0;
	int val1 = 1;
	int val2 = 2;
	i = 100 / 300;
	j = val1 & val2;
	k = val1 | val2;
	if (j && k || i)
		m = i + j;
	printf(j, k, m);
	return 0;
}