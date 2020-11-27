#include<stdlib.h>
#include<stdio.h>

int main() {
	char buffer[1024];
	printf("Phrase : ");
	gets_s(buffer, 1024);
	int mots = 1;
	float longueur = 0.f;
	for (int i = 0; i < strlen(buffer); i++) {
		if (*(buffer + i) == 32 && *(buffer + (i + 1)) != 32 && *(buffer + (i + 1)) != NULL) { mots++; }
		else if ((buffer + i) != 32) { longueur++; }
	}
	longueur /= mots;
	printf("Il y'a %d mots. Et la longueur moyenne est de %.2f", mots, longueur);

	printf("\n");
	system("pause");
}