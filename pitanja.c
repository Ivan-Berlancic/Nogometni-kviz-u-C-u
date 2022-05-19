#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

static countr = 0;
void generiranje_pitanja() {

	system("cls");
	//int polje[3];
	//int i;
	/*for (i = 0; i < 3; i++) {
		polje[i] = 1 + (float)rand() / RAND_MAX * (3 - 1);
		do {
			polje[i] = 1 + (float)rand() / RAND_MAX * (3 - 1);
		} while (polje[i] == polje[i - 1]);
		
	}
	for (i = 0; i < 3; i++) {
		printf(" %d", polje[i]);
	}
	*/
	int random = 1 + (float)rand() / RAND_MAX * (5 - 1);
	switch (random) {
	case 1:
		printf("\n\nKoja reprezentacija je osvojila svjetsko prvenstvo 2010. godine?");
		printf("\n\n----------------------------------------------------------------");
		printf("\n\nA - Nizozemska                           B - Spanjolska         ");
		printf("\n");
		printf("\n\nC - Argentina                            D - Njemacka           ");
		printf("\n\n----------------------------------------------------------------");
		if (_getch() == 'B')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je B - Spanjolska."); _getch();
			break;
		}
		generiranje_pitanja();
		break;
	case 2:
		printf("\n\nKoji igrac je osvojio najvise zlatnih lopti?");
		printf("\n\n----------------------------------------------------------------");
		printf("\n\nA - Marko Livaja                         B - Cristiano Ronaldo  ");
		printf("\n");
		printf("\n\nC - Marco Van Basten                     D - Lionel Messi       ");
		printf("\n\n----------------------------------------------------------------");
		if (_getch() == 'D')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je D - Lionel Messi."); _getch();
			break;
		}
		generiranje_pitanja();
		break;
	case 3:
		printf("\n\nKoji igrac je postigao pobjednicki pogodak u finalu svjetskog");
		printf("\n\nprvenstva 2014. godine?");
		printf("\n\n----------------------------------------------------------------");
		printf("\n\nA - Thomas Muller                        B - Mesut Ozil  ");
		printf("\n");
		printf("\n\nC - Mario Gotze                          D - Mario Gomez       ");
		printf("\n\n----------------------------------------------------------------");
		if (_getch() == 'C')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je C - Mario Gotze."); _getch();
			break;
		}
		generiranje_pitanja();
		break;
	case 4:
		printf("\n\nKoji je hrvatski igrac postigao najvise golova na svjetskom");
		printf("\n\nprvenstvu 1998. godine?");
		printf("\n\n----------------------------------------------------------------");
		printf("\n\nA - Zvonimir Boban                       B - Robert Prosinecki  ");
		printf("\n");
		printf("\n\nC - Goran Vlaovic					     D - Davor Suker       ");
		printf("\n\n----------------------------------------------------------------");
		if (_getch() == 'D')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je D - Davor Suker."); _getch();
			break;
		}
		generiranje_pitanja();
		break;
	case 5:
		printf("\n\nKoji je izbornik vodio Hrvatsku na svjetsko prvenstvo 2014. godine?");
		printf("\n\n----------------------------------------------------------------");
		printf("\n\nA - Zlatko Dalic                         B - Ciro Blazevic  ");
		printf("\n");
		printf("\n\nC - Niko Kovac					         D - Robert Kovac     ");
		printf("\n\n----------------------------------------------------------------");
		if (_getch() == 'C')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je C - Niko Kovac."); _getch();
			break;
		}
		generiranje_pitanja();
		break;
	}

	
}
