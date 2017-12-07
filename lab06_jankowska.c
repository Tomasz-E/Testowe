/*Adrianna Jankowska*/



/*
dla u=[a,b] i v=[c,d] warunek wektorów prostopad³ych to: a*b+c*d=0
dla u=[a,b] i v=[c,d] warunek wektorów równoleg³ych to: a*c-b*d=0
*/





/*wzór na pole trójk¹ta
1.dany bok 'a' oraz wysokoœæ 'h' nañ opuszczona: (a/2)*h
2.dane boki 'a' oraz 'b' oraz miarê k¹ta alfa miêdzy nimi ((a*b)/2)*sina
3.dane wszystkie boki 'a', 'b' i 'c'. Do obliczenia pola trójk¹ta przy pomocy tych danych
potrzebna jest po³owa obwodu a wiêc p=(a+b+c)/2
wzór to sqrt(p*(p-a)*(p-b)*(p-c))
*/





/*
islower  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest napisany ma³¹ liter¹
isupper  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest napisany wielk¹ liter¹
isalpha  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest liter¹ alfabetu
isdigit  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest cyfr¹
isxdigit //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest cyfr¹ szesnastkow¹
isalnum  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest znakiem alfanumerycznym

isprint  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest znakiem drukowalnym
isgraph  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest znakiem graficznym
isspace  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest znakiem bia³ym
ispunct  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest znakiem drukowalnym ale nie jest znakiem
	     //alfanumerycznym lub spacj¹
iscntrl  //zwraca wartoœæ ró¿n¹ od zera gdy argument przekazany do funkcji jest znakiem kontrolnym 
	     //(Znaki kontrolne: od 0x00 do 0x1F oraz 0x7F. )

tolower  //zwraca znak zamieniony z wielkiej litery na ma³¹
toupper  //zwraca znak zamieniony z ma³ej litery na wielk¹
*/
















///////////////////////////////////////////////////////////////////////////////
//PROGRAM 41
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x  -  wspó³rzêdna wektora x1
//y  -  wspó³rzêdna wektora y1 
//xx  -  wspó³rzêdna wektora x2
//yy  -  wspó³rzêdna wektora y2
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby zmiennopozycyjnej
//                          podal inne dane,
//Prostopad³e wektory   - wektory o danych podanych przez u¿ytkownika s¹ prostopad³e
//Równoleg³e wektory    - wektory o danych podanych przez u¿ytkownika s¹ równoleg³e
//
//TESTY:
//------------------------------------------------------------------------
// x | y | xx | yy |      |  spodziewany wynik   |
//------------------------------------------------------------------------
//                 d a n e   t y p o w e
// 1 | 1 | -1 | -1 |      |						 |
// 1 | 4 |  0 | 11 |      |				         |
// 4 | 11|  5 |  1 |      |					     |
// -6| 1 | 12 |-12 |      |					     |
//------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
float a;
float b;
float c;
float d;
printf("Program prosi o podanie danych dwoch wektorów,");
printf("\nwed³ug kolejnosci: x, y, x2, y2, i podaje informacje \n");
printf("o po³o¿eniu tych wektorow wzgledem siebie. \n");
printf("(czy sa one równolegle czy prostopadle)\n\n");
printf("Autor programu: Adrianna Jankowska;

//wczytywanie i kontrola danych

printf("Podaj x (liczbe zmiennopozycyjna w systemie dziesietnym):  ");
	if (scanf("%g",&a)!=1 || getchar()!='\n')
		{
			printf("Bledne dane.\n");
			printf("\nKoniec programu.\n");
			return 0;
		}
printf("Podaj y (liczbe zmiennopozycyjna w systemie dziesietnym):  ");
	if (scanf("%g",&b)!=1 || getchar()!='\n')
		{
			printf("Bledne dane.\n");
			printf("\nKoniec programu.\n");
			return 0;
		}
printf("Podaj x2(liczbe zmiennopozycyjna w systemie dziesietnym):  ");
	if (scanf("%g",&c)!=1 || getchar()!='\n')
		{
			printf("Bledne dane.\n");
			printf("\nKoniec programu.\n");
			return 0;
		}
printf("Podaj y2 (liczbe zmiennopozycyjna w systemie dziesietnym):  ");
	if (scanf("%g",&d)!=1 || getchar()!='\n')
		{
			printf("Bledne dane.\n");
			printf("\nKoniec programu.\n");
			return 0;
		}
printf("wypisuje uklad wektorow wzgledem siebie");

printf("Koniec programu");
return 0;
}
*/



















///////////////////////////////////////////////////////////////////////////////
//PROGRAM 42
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
float a;
float b;
float c;
float c;
float wynik;
int metoda_1;
int metoda_2;
int metoda_3;
printf("Program oblicza pole trojkata w sposob wybrany przez uzytkownika.");
printf("\n Program obliczy pole dla wariantow podanych nizej.\n\n");
printf("1. pobranie dlugosci boku i wysokosci trojkata\n");
printf("2. pobranie dlugosci dwoch bokow i miary kata miedzy nimi\n");
printf("3. pobranie dlugosci trzech bokow i miar katow miedzy nimi\n\n");
printf("Autor programu: Adrianna Jankowska\n\n");
printf("Podaj numer sposobu w jaki chcesz, aby bylo obliczpne pole Twojego trojkata:")

//wybor sposobu
//pobranie danych i ich kontrola
//obliczenie pola 

printf("Pole Twojego trojkata jest rowne %g.\n", wynik);
printf("Koniec programu.\n\n");
return 0;
}
*/

















///////////////////////////////////////////////////////////////////////////////
//PROGRAM 43
///////////////////////////////////////////////////////////////////////////////
/*
int main()
{
float a;
float b;
float c;

printf("Program prosi uzytkownika o podanie trzech liczb\n);
printf("i sposrod nich wskazuje minimalna."\n\n);
printf("Autor programu: Adrianna Jankowska\n\n");
printf("Podaj pierwsza liczbe:");
	if (scanf("%g",&a)!=1 || getchar()!='\n')
			{
				printf("Bledne dane.\n");
				printf("\nKoniec programu.\n");
				return 0;
			}
printf("Podaj druga liczbe:");
	if (scanf("%g",&b)!=1 || getchar()!='\n')
		{
			printf("Bledne dane.\n");
			printf("\nKoniec programu.\n");
			return 0;
		}
printf("Podaj trzecia liczbe:");
	if (scanf("%g",&c)!=1 || getchar()!='\n')
		{
			printf("Bledne dane.\n");
			printf("\nKoniec programu.\n");
			return 0;
		}

		//program sprawdza ktora z liczb jest najmniejsza
		//program wypisuje najmniejsza liczbe
		printf("Koniec programu.")
		return 0;
}
*/














///////////////////////////////////////////////////////////////////////////////
//PROGRAM 44
///////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	
	printf("Program prosi uzytkownika o wpisanie dowolnego\n);
	printf("znaku a nastepnie podaje jego kod ASCII."\n\n);
	printf("Autor programu: Adrianna Jankowska\n\n");
	printf("Koniec programu.");
	return 0;
}
*/

















///////////////////////////////////////////////////////////////////////////////
//PROGRAM 45
///////////////////////////////////////////////////////////////////////////////
/*
int main()
{
	printf("Program prosi o podanie kodu ASCII,\n");
	printf("a nastepnie wypisuje go w formie znaku,\n");
	printf("o ile jest to znak drukowalny.\n\n");
	printf("Autor programu: Adrianna Jankowska\n\n");
	printf("Koniec programu.\n");
	return 0;
}
*/
