#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int help()
{
	system("cls");
	printf("\n\n                                 POMOC");
	printf("\n    ------------------------------------------------------------------------------");
	printf("\n    ...........................NOGOMETNI KVIZ.....................................");
	printf("\n    >> Kviz se sastoji od 5 nasumicno generiranih pitanja");
	printf("\n    >> Svako tocno odgovoreno pitanje donosi 100 bodova");
	printf("\n    >> Na kraju kviza postoji mogucnost unosa vaseg rezultata u tablicu najboljih");
	printf("\n       rezultata");
	printf("\n    >> Svako pitanje ima cetiri opcije; A, B, C, D");
	printf("\n    >> Ukoliko netocno odgovorite, prelazi se na sljedece pitanje");
	printf("\n    >> Nema negativnih bodova za netocno odgovorena pitanja");
	printf("\n       Pritisnite bilo koju tipku da se vratite na menu.");
	printf("\n    ******************************************************************************");
	_getch();
	return 1;

}


void shuffle(int* polje) {

	for (int i = 0; i < 5; i++) {
		int temp = *(polje + i);
		int randomIndeks = 1 + (float)rand() / RAND_MAX * (5 - 1);

		*(polje + i) = *(polje + randomIndeks);
		*(polje + randomIndeks) = temp;
	}

}

