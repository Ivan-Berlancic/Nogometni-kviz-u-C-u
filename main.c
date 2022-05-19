#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"funkcije.h"

void generiranje_pitanja();

int main() {
	
	int r, r1, count, i, n;
	float rez;
	char choice;
	char playername[20];
	srand((unsigned)time(NULL));
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
		help();
	}
	else if (choice == 'P') {
		generiranje_pitanja();
		generiranje_pitanja();
	}

	return 0;
}
