/*Adrianna Jankowska*/



/*
dla u=[a,b] i v=[c,d] warunek wektor�w prostopad�ych to: a*b+c*d=0
dla u=[a,b] i v=[c,d] warunek wektor�w r�wnoleg�ych to: a*c-b*d=0
*/





/*wz�r na pole tr�jk�ta
1.dany bok 'a' oraz wysoko�� 'h' na� opuszczona: (a/2)*h
2.dane boki 'a' oraz 'b' oraz miar� k�ta alfa mi�dzy nimi ((a*b)/2)*sina
3.dane wszystkie boki 'a', 'b' i 'c'. Do obliczenia pola tr�jk�ta przy pomocy tych danych
potrzebna jest po�owa obwodu a wi�c p=(a+b+c)/2
wz�r to sqrt(p*(p-a)*(p-b)*(p-c))
*/





/*
islower  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest napisany ma�� liter�
isupper  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest napisany wielk� liter�
isalpha  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest liter� alfabetu
isdigit  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest cyfr�
isxdigit //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest cyfr� szesnastkow�
isalnum  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest znakiem alfanumerycznym

isprint  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest znakiem drukowalnym
isgraph  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest znakiem graficznym
isspace  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest znakiem bia�ym
ispunct  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest znakiem drukowalnym ale nie jest znakiem
	     //alfanumerycznym lub spacj�
iscntrl  //zwraca warto�� r�n� od zera gdy argument przekazany do funkcji jest znakiem kontrolnym 
	     //(Znaki kontrolne: od 0x00 do 0x1F oraz 0x7F. )

tolower  //zwraca znak zamieniony z wielkiej litery na ma��
toupper  //zwraca znak zamieniony z ma�ej litery na wielk�
*/
















///////////////////////////////////////////////////////////////////////////////
//PROGRAM 41
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x  -  wsp�rz�dna wektora x1
//y  -  wsp�rz�dna wektora y1 
//xx  -  wsp�rz�dna wektora x2
//yy  -  wsp�rz�dna wektora y2
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby zmiennopozycyjnej
//                          podal inne dane,
//Prostopad�e wektory   - wektory o danych podanych przez u�ytkownika s� prostopad�e
//R�wnoleg�e wektory    - wektory o danych podanych przez u�ytkownika s� r�wnoleg�e
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
printf("Program prosi o podanie danych dwoch wektor�w,");
printf("\nwed�ug kolejnosci: x, y, x2, y2, i podaje informacje \n");
printf("o po�o�eniu tych wektorow wzgledem siebie. \n");
printf("(czy sa one r�wnolegle czy prostopadle)\n\n");
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
