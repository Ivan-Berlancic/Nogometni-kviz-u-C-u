#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"funkcije.h"


char playername[20];

int main() {

	int r, r1, count, i, n;
	float rez;
	char choice;
	srand((unsigned)time(NULL));
	int polje[5];
	for (i = 0; i < 5; i++) {
		polje[i] = i + 1;
	}
	shuffle(polje);

mainhome:
	system("cls");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t                NOGOMETNI KVIZ  ");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t > Pritisnite P za pocetak nove igre");
	printf("\n\t\t > Pritisnite N da vidite najbolji rezultat");
	printf("\n\t\t > Pritisnite R da resetirate tablicu rezultata");
	printf("\n\t\t > Pritisnite H za pomoc");
	printf("\n\t\t > Pritisnite I za izlaz iz igre");
	printf("\n\t\t________________________________________________\n\n");

	choice = _getch();
	if (choice == 'H') {
		int a = help();
		if (a == 1) {
			goto mainhome;
		}

	}
	else if (choice == 'P') {
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\tIme: ");
		gets(playername);
		printf("%s", playername);
		int b = generiranje_pitanja(polje);
		if (b == 1) {
			goto mainhome;
		}
	}
	else if (choice == 'I') {
		return 0;
	}
	else if (choice == 'R') {
		int c = brisanje();
		if (c == 1) {
			goto mainhome;
		}
	
	}
	/*else if (choice == 'N') {
		int k = highscore(playername);
		if (k == 1) {
			goto mainhome;
		}
	}
	*/
	return 0;
}
