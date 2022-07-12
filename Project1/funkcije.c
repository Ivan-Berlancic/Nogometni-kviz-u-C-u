#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int pravila() {
	system("cls");
	printf("\n\n --------------------------------------------------------------------------------");
	printf("\n   >> Dobrodosli u nogometni kviz!");
	printf("\n   >> Ako prilikom odgovaranja na pitanje zelite odustati pritisnite bilo koju");
	printf("\n      tipku osim ponudenih odgovora (A, B, C, D)");
	printf("\n   >> Kviz ce se prekinuti te cete moci vidjeti koliko ste bodova osvojili");
	printf("\n\n Za nastavak pritisnite bilo koju tipku"),
	printf("\n\n --------------------------------------------------------------------------------");
	_getch();
	return 1;
}



int help()
{
	system("cls");
	printf("\n\n                                 POMOC");
	printf("\n    ------------------------------------------------------------------------------");
	printf("\n    ...........................NOGOMETNI KVIZ.....................................");
	printf("\n    >> Kviz se sastoji od 5 nasumicno generiranih pitanja");
	printf("\n    >> Svako tocno odgovoreno pitanje donosi 100 bodova");
	printf("\n    >> Na kraju kviza vas ce se rezultat zabiljeziti u tablicu rezultata");
	printf("\n    >> Svako pitanje ima cetiri opcije; A, B, C, D");
	printf("\n    >> Ukoliko netocno odgovorite, kviz se prekida");
	printf("\n    >> Nema negativnih bodova za netocno odgovorena pitanja");
	printf("\n       Pritisnite bilo koju tipku da se vratite u menu.");
	printf("\n    ******************************************************************************");
	_getch();
	return 1;

}


void shuffle(int* polje) {

	for (int i = 0; i < 20; i++) {
		int temp = *(polje + i);
		int randomIndeks = 1 + (float)rand() / RAND_MAX * (20 - 1);

		*(polje + i) = *(polje + randomIndeks);
		*(polje + randomIndeks) = temp;
	}

}

typedef struct igrac {
	char *name;
	int rez;
}IGRAC;

void rezultat(int rez, char* ime) {
	IGRAC* pokNaIgraca = NULL;
	pokNaIgraca = (IGRAC*)calloc(1, sizeof(IGRAC));
	if (pokNaIgraca == NULL) {
		return 1;
	}
	pokNaIgraca->name = ime;
	pokNaIgraca->rez = rez;
	FILE* fp = fopen("rez.txt", "a+");
	if (fp == NULL) {
		perror("Otvaranje");
	}
	else {
		fprintf(fp, "Ime: %s Bodovi: %d\n\n\n", pokNaIgraca->name, pokNaIgraca->rez);
		fclose(fp);
	}
	
	FILE* fp3 = fopen("rezultati.txt", "a+");
	if (fp3 == NULL) {
		perror("Otvaranje");
	}
	else {
		fprintf(fp3, "%d,", pokNaIgraca->rez);
		free(pokNaIgraca);
		fclose(fp3);
	}
}

int brisanje() {
	system("cls");
	printf("\n       ----------------------------------------------------------");
	printf("\n");
	printf("\n       Jeste li sigurni da zelite resetirati tablicu?");
	printf("\n       Svi dosadasnji rezultati biti ce obrisani");
	printf("\n\n       bilo koja tipka - za potvrditi   N - za povratak u menu");
	printf("\n");
	printf("\n       ----------------------------------------------------------\n");
	int odabir = toupper(_getch());
	if (odabir == 'N') {
		return 0;
	}
	else{
		FILE* fp = fopen("rez.txt", "w");
		if (fp == NULL) {
			perror("Otvaranje");
		}
		fclose(fp);
		
		FILE* fp3 = fopen("rezultati.txt", "w");
		if (fp3 == NULL) {
			perror("Otvaranje");
		}
		fclose(fp3);
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
}

void zamjena(int* const veci, int* const manji) {
	int temp = 0;
	temp = *manji;
	*manji = *veci;
	*veci = temp;
}

void bubbleSort(int polje[], const int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (polje[j + 1] < polje[j]) {
				zamjena(&polje[j + 1], &polje[j]);
			}
		}
	}
}

int broj_rezultata() {
	FILE* fp = fopen("rezultati.txt", "r");
	if (fp == NULL) {
		perror("Otvaranje");
	}
	char c; int count = 0;
	for (c = getc(fp); c != EOF; c = getc(fp)) {
		if (c == ' ') {
			count = count + 1;
		}
	}
	return count;
		
}

int broj_znakova() {
	FILE* fp = NULL;
	int count = 0; char c;
	fp = fopen("rezultati.txt", "r");
	if (fp == NULL) {
		perror("Otvaranje");
	}
	for (c = getc(fp); c != EOF; c = getc(fp)) {
		count = count + 1;
	}
	fclose(fp);
	return count;
}


int naj_rez() {
	int n = broj_rezultata() + 20; 
	int* polje; 
	int i = 0;
	polje = (int*)malloc(n * sizeof(int));
	if (polje == NULL)
		return 1;
	
	int n2 = broj_znakova() + 20; 
	char* polje2;
	polje2 = (char*)malloc(n2 * sizeof(char));
	if (polje2 == NULL)
		return 1;

	FILE* fp = NULL; char* token;
	fp = fopen("rezultati.txt", "r");
	if (fp == NULL) {
		perror("Otvaranje");
	}
	fscanf(fp, "%s", polje2);
	token = strtok(polje2, ",");
	
	while (token != NULL) {
		*(polje + i) = atoi(token);
		token = strtok(NULL, ",");
		i++;
	}
	int n3 = i;
	
	bubbleSort(polje, n);

	system("cls");
	printf("\n       -------------------------------------------------------");
	printf("\n");
	printf("\n                         NAJBOLJI REZULTATI");
	printf("\n\n");
	for (i = n; i > 0; i--) {
		if (*(polje + i) >= 0 && *(polje + i) <= 500) {
			printf("                %d\n\n", *(polje + i));
		}
	}
	printf("         Pritisnite bilo koju tipku za povratak u menu.");
	printf("\n       -------------------------------------------------------\n");
	
	fclose(fp);
	free(polje);
	free(polje2);
	
	_getch();
	return 1;
}




