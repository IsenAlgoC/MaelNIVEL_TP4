#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int tableau[100];

int main() {
	srand(time(NULL));
	int nombre, valeur;
	int* Curseur;
	int	test = 0;

	for (int i = 0; i < 100; i++) { tableau[i] = (rand() % 20) + 1; }

	printf("Valeur : ");
	scanf_s("%d", &valeur);

	for (size_t i = 0; i < 100; i++) {
		Curseur = &tableau[i];
		if (*Curseur == valeur && test == 0) { printf("La valeur %d a ete trouvee en %d", valeur, i); test++; }
		else if (*Curseur == valeur && test == 1) { printf(", puis en %d", i); }
	}

	if (test == 0) { printf("Aucune valeur trouvee"); }
	else { printf("."); }

	printf("\n");
	system("pause");
}