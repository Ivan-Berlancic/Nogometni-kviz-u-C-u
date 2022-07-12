#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include"funkcije.h"


char ime[20];

int main() {

	int i, h, c, b, a;
	char choice;
	srand((unsigned)time(NULL));
	int polje[20];
	for (i = 0; i < 20; i++) {
		polje[i] = i + 1;
	}
	

mainhome:
	system("cls");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t                NOGOMETNI KVIZ  ");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t________________________________________________");
	printf("\n\t\t > Pritisnite P za pocetak nove igre");
	printf("\n\t\t > Pritisnite N da vidite tablicu rezultata");
	printf("\n\t\t > Pritisnite R da resetirate tablicu rezultata");
	printf("\n\t\t > Pritisnite H za pomoc");
	printf("\n\t\t > Pritisnite I za izlaz iz igrice");
	printf("\n\t\t________________________________________________\n\n");

	
	choice = toupper(_getch());
	
	switch (choice) {
	case 'H':
		a = help();
		if (a == 1) {
			goto mainhome;
		}
		break;
	case 'P':
		printf("\n\n\n\n\n\n\n\t\t\tIme: ");
		gets(ime);
		shuffle(polje);
		int intro = pravila();
		if (intro == 1) {
			b = generiranje_pitanja(polje, ime);
			if (b == 1) {
				goto mainhome;
			}
		}
		break;
	case 'I':
		return 0;
		break;
	case 'R':
		c = brisanje();
		if (c == 0) {
			goto mainhome;
		}
		if (c == 1) {
			goto mainhome;
		}
		break;
	case 'N':
		h = naj_rez();
		if (h == 1) {
			goto mainhome;
		}
		break;
	default:
		goto mainhome;
	}
	return 0;
}