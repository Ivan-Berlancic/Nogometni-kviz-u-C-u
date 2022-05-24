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
	case 6:
        	printf("\n\nKoji je nogometas poznat po incidentu s Matterazzijem?");
        	printf("\n\n----------------------------------------------------------------");
        	printf("\n\nA - Cristiano Ronaldo                    B - Zinedine Zidane    ");
        	printf("\n");
        	printf("\n\nC - Luis Suarez                          D - Gennaro Gatusso    ");
        	printf("\n\n----------------------------------------------------------------");
        	if (_getch() == 'B')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je B - Zinedine Zidane."); _getch();
			break;
		}
   	 case 7:
        printf("\n\nZa koji klub trenutacno igra spanjolski nogometas Dani Olmo?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - RB Leipzig                           B - Dinamo Zagreb    ");
        printf("\n");
        printf("\n\nC - Borrusia Dortmund                    D - Real Madrid      ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'A')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je A - RB Leipzig."); _getch();
			break;
		}
    case 8:
        printf("\n\nKoliko je zlatnih lopti osvojio Cristiano Ronaldo?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - 2                                 B - 3    ");
        printf("\n");
        printf("\n\nC - 5                                 D - 7      ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'C')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je C - 5."); _getch();
			break;
		}
    case 9:
        printf("\n\nKako se zove napadac Hajduka koji je zabio gol Dinamu u prosincu");
        printf("\n\nprosle godine?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Nikola Kalinic                         B - Filip Krovinovic    ");
        printf("\n");
        printf("\n\nC - Marko Livaja                           D - Lovre Kalinic      ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'C')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je C - Marko Livaja."); _getch();
			break;
		}
    case 10:
        printf("\n\nKoji je brazilski nogometas postigao najvise golova za svoju");
        printf("\n\nreprezentaciju?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Ronaldo                                    B - Ronaldinho    ");
        printf("\n");
        printf("\n\nC - Neymar                                     D - Pele      ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'D')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je D - Pele."); _getch();
			break;
		}
    case 11:
        printf("\n\nKoje je godine Luka Modric osvojio zlatnu loptu?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - 2016.                                    B - 2017.    ");
        printf("\n");
        printf("\n\nC - 2018.                                    D - 2020.      ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'C')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je C - 2018."); _getch();
			break;
		}
    case 12:
        printf("\n\nKako se zove stadion kluba Bayern Munchen?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Allianz Arena                        B - Santiago Bernabeu    ");
        printf("\n");
        printf("\n\nC - Westfalenstadion                     D - Park Prinčeva     ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'A')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je A - Allianz Arena"); _getch();
			break;
		}
    case 13:
        printf("\n\nKoliko je golova zabio Robert Lewandowski u 9 minuta na");
        printf("\n\nutakmici protiv Wolfsburga?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - 3                                    B - 4    ");
        printf("\n");
        printf("\n\nC - 5                                    D - 6     ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'C')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je C - 5"); _getch();
			break;
		}
    case 14:
        printf("\n\nKoliko je Atletico Madrid morao platiti za mladog Joao Felixa?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - 126 milijuna eura                    B - 45 milijuna eura   ");
        printf("\n");
        printf("\n\nC - 200 milijuna eura                    D - 75 milijuna eura    ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'A')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je A - 126 milijuna eura"); _getch();
			break;
		}
    case 15:
        printf("\n\nKoji je Kolumbijac nakon izvrsnog svjetskog prvenstva potpisao");
        printf("\n\nza Real Madrid 2014. godine?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Radamel Falcao                       B - James Rodriguez    ");
        printf("\n");
        printf("\n\nC - Luis Suarez                          D - Paulo Dybala    ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'B')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je B - James Rodriguez."); _getch();
			break;
		}
    case 16:
        printf("\n\nTko od ponudenih nije igrao za Dinamo Zagreb?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Mario Mandzukic                   B - Nikola Kalinic   ");
        printf("\n");
        printf("\n\nC - Domagoj Vida                      D - Milan Badelj   ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'B')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je B - Nikola Kalinic."); _getch();
			break;
		}
    case 17:
        printf("\n\nKako se zove bivsi hrvatski reprezentativac koji je poznat po");
        printf("\n\nnajgorem startu na Marakani?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Dado Prso                      B - Vedran Corluka   ");
        printf("\n");
        printf("\n\nC - Dejan Lovren                   D - Joe Simunic ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'D')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je D - Joe Simunic."); _getch();
			break;
		}
    case 18:
        printf("\n\nKako se zove igrac koji je postigao pobjednicki gol za Portugal");
        printf("\n\nna europskom prvenstvu 2016.?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Cristiano Ronaldo              B - Eder  ");
        printf("\n");
        printf("\n\nC - Joao Mario                     D - Nani ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'B')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je B - Eder."); _getch();
			break;
		}
    case 19:
        printf("\n\nKako se zove jedini golman koji je osvojio zlatnu loptu?");
        printf("\n\n");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Lav Jašin                      B - Iker Casillas   ");
        printf("\n");
        printf("\n\nC - Manuel Neuer                   D - Petr Čech ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'A')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je A - Lav Jašin."); _getch();
			break;
		}
    case 20:
        printf("\n\nKako se zove poznati nogometas Milana koji je zabio škarice");
        printf("\n\nprotiv Engleske 2012.?");
        printf("\n\n----------------------------------------------------------------");
        printf("\n\nA - Olivier Giroud                 B - Zlatan Ibrahimovic   ");
        printf("\n");
        printf("\n\nC - Fernando Torres                D - Mario Mandzukic ");
        printf("\n\n----------------------------------------------------------------");
        if (_getch() == 'B')
		{
			printf("\n\nTocan odgovor!"); countr++; _getch();
			
		}
		else
		{
			printf("\n\nNetocno, tocan odgovor je B - Zlatan Ibrahimovic."); _getch();
			break;
		}

    }
    

	
