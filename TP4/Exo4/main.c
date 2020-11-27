#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAILLE 30


int main() {
	char mot[TAILLE];
	printf("mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));
	int len = strlen(mot) - 1;
	int i = 0;
	char* pTab = &mot[0];
	char* resultat = "Le mot est un palindrome";


	for (i = 0; i < len; i++) {
		if (toupper(mot[i]) != toupper(mot[len - i])) { resultat = "Le mot n'est pas un palindrome"; break; }
	}
	printf("%s\n", resultat);


	system("pause");
}