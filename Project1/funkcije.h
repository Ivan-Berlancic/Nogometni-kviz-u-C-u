#ifndef HEADER_H
#define HEADER_H

int help();
int generiranje_pitanja(int* polje, char* ime);
void shuffle(int* polje);
void rezultat(int rez, char* ime);
int brisanje();
void zamjena(int* const veci, int* const manji);
int pravila();
int broj_rezultata();
int naj_rez();
int broj_znakova();
void bubbleSort(int polje[], const int n);

#endif // HEADER_H