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

typedef struct igrac{
	int rez;
}IGRAC;

void rezultat(int rez) {
	IGRAC prvi;
	prvi.rez = rez;
	FILE* fp = fopen("rez.txt", "a+");
	fprintf(fp, "Bodovi: %d\n\n\n", prvi.rez);
	fclose(fp);
}

int brisanje() {
	system("cls");
	printf("\n       -------------------------------------------------------");
	printf("\n");
	printf("\n       Jeste li sigurni da zelite resetirati tablicu?");
	printf("\n       Svi dosadasnji rezultati biti ce obrisani");
	printf("\n\n       bilo koja tipka - za potvrditi   N - za povratak u menu");
	printf("\n       -------------------------------------------------------\n");
	int odabir = _getch();
	if (odabir == 'Y') {
	
	}
	else if (odabir == 'N') {
		return 1;
	}
	FILE* fp = fopen("rez.txt", "w");
	fclose(fp);
	system("cls");
	printf("\n       -------------------------------------------------");
	printf("\n");
	printf("\n       Tablica rezultata je resetirana.");
	printf("\n       Pritisnite bilo koju tipku za povratak u menu.");
	printf("\n");
	printf("\n       -------------------------------------------------\n");
	_getch();
	return 1;
}

void zamjena(int* const veci, int* const manji) {
	int temp = 0;
	temp = *manji;
	*manji = *veci;
	*veci = temp;
}
void selectionSort(int polje[], const int n) {
	int min = -1;
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (polje[j] < polje[min]) {
				min = j;
			}
		}
		zamjena(&polje[i], &polje[min]);
	}
}