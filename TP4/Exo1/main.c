#include <stdio.h>
#include <stdlib.h>
#include "tp4.h"
// Deux versions, une avec modulo et une sans

int main() {
	HEURE HeureDebut, HeureFin, Duree;
	int minuteRetenue = 0;
	int heureRetenue = 0;

	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 00;
	Duree.minute = 45;

	HeureFin.minute = Duree.minute + HeureDebut.minute;
	if (HeureFin.minute > 59) { minuteRetenue = HeureFin.minute - 60; HeureFin.minute = minuteRetenue; minuteRetenue = 1; }
	HeureFin.heure = Duree.heure + HeureDebut.heure + minuteRetenue;
	if (HeureFin.heure > 23) { heureRetenue = HeureFin.heure - 24; HeureFin.heure = heureRetenue; }
	printf("Version sans modulo : \n");
	printf("\n%d:%d", HeureFin.heure, HeureFin.minute);
	printf("\n");



	HeureFin.minute = HeureDebut.minute + Duree.minute;
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	if (HeureFin.minute / 60 >= 1) {
		HeureFin.heure += 1;
		HeureFin.minute = HeureFin.minute % 60;
	}
	printf("\nVersion avec modulo :\n");
	printf("\nDepart %02d:%02d Duree %02d:%02d Arrivee %02d:%02d\n", HeureDebut.heure, HeureDebut.minute, Duree.heure, Duree.minute, HeureFin.heure, HeureFin.minute);
	printf("\n");

	system("pause");
}