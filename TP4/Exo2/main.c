#include <stdio.h>
#include <stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int MyTab1[TAILLETAB1];
	int i = 0;
	int* MyPtr;

	for (i == 0; i < TAILLETAB1; i++) { MyTab1[i] = i + 1; if (i == TAILLETAB1 - 1) { printf("%d \n", MyTab1[i]); } else { printf("%d %c ", MyTab1[i], SEPARATEUR); } }
	printf("\n");
	for (int i = TAILLETAB1 - 1; i >= 0; i--)
	{
		MyPtr = &MyTab1[i];
		printf("%d", *MyPtr);
		if (i > 0) { printf(" %c ", SEPARATEUR); }
	}
	printf("\n");
	system("pause");
}
