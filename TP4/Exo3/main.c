#include <stdio.h>
#include <stdlib.h>

int main() {
	char nom[20], prenom[20], sexe;
	printf("Prenom : ");
	scanf_s("%s", prenom, (unsigned)_countof(prenom));
	printf("Nom : ");
	scanf_s("%s", nom, (unsigned)_countof(nom));
	printf("Sexe : ");
	sexe = _getch();
	printf("%c", sexe);
	if (sexe == 'H') { printf("\nMonsieur "); }
	else { printf("\nMadame "); }
	printf("%s %s\n", prenom, nom);
	system("pause");
}