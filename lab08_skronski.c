//Kamil Skronski
#include <conio.h>
#include <math.h>
#include "stdafx.h"
#include <stdbool.h>

////program 55
int main()
{
	int min=-1, pobrana=0;
	printf("Program wczytuje liczby calkowite dodatnie, nastepnie wypisuje najmniejsza,\n");
	printf("jezeli uzytkownik chce zakonczyc wpisywanie wpisuje 0\n");
	do {
		while ((scanf_s("%f", &pobrana)) != 1 || pobrana <= 0 || getchar() != '\n')
		{
			printf("Podales blednne dane, popraw je\n");
			while (getchar() != '\n')
				;
		}
		if(pobrana == 0)
		if(min==-1)
		min = pobrana;
	} while (pobrana!= 0);
	
	printf("\nAutor programu: Kamil Skronski\n");
printf("koniec programu\n");
system("PAUSE");
    return 0;
}

//program 56
//int main()
//{
//
//	double tab[10], zmienna=0, suma = 0;
//	printf("Program wczytuje 10 liczb podanych przez uzytkownika a nastepnie oblicz ich srednia arytmetyczna\n");
//	printf("\nAutor programu: Kamil Skronski\n");
//	for (int i = 0; i < 10; ++i) {
//		while (scanf_s("%lf", &zmienna)!= 1 || getchar() != '\n')
//		{
//			printf("Podales blednne dane, popraw je\n");
//			while (getchar() != '\n')
//				;
//		}
//		tab[i] = zmienna;
//		suma += zmienna;
//		
//
//	
//	}
//	printf("srednia to : %lf\n", suma/10.0);
//	printf("koniec programu\n");
//	system("PAUSE");
//	return 0;
//}

//Program 57 
//int main()
//{
//	printf("Program wczytuje liczby, nastepnie wypisuje najmniejsza,\n");
//	printf("jezeli uzytkownik chce zakonczyc wpisywanie wpisuje 0\n");
//	printf("\nAutor programu: Kamil Skronski\n");
//printf("koniec programu\n");
//system("PAUSE");
//    return 0;
//}
//program 58
//int mait() {
//	printf("Program wczytuje ciąg zer i jedynek.\n");
//	printf(" Dlugosc ciagu nie przekracza 32 znakow, ale moze byc dowolna\n");
//	printf("Autor programu Kamil Skronski\n");
//	printf("koniec pragramu\n");
// system("PAUSE");
//return 0;
//}
//program 59

//int main() {
//	int menu = 0;
//	int pierwsza_liczba = 0, druga_liczba = 0, wynik;
//	bool flaga = false;
//
//	while (menu != 6)
//	{
//		printf("wybierz jedna opcje z ponizszych\n1.suma\n2.odejmowanie\n3.mnozenie\n4.dzielenie\n5.wprowadzenie danych\n6.wyjscie z programu\n");
//		scanf_s("%d", &menu);
//	system("PAUSE");
//	return 0;
//}

//program 60

//program 42
//
//int main()
//{
//#define PI 3.14159
//	int menu, ktory, menu_2;
//	double bok_a=0, bok_b=0, bok_c=0, wysokosc_a=0, wysokosc_b=0, wysokosc_c=0, kat_ab=0, kat_ac=0, kat_bc=0, p=0, t=0;
//	printf("\nz ktorego wzoru chcesz skorzystac?\n1. z uzyciem sinusa i bokow\n2.boku i opuszczonej nan wysokosci\n3.z 3 bokow\n");
//	scanf_s("%d", &menu);
//	switch (menu) {
//	case 1:
//		printf("pole trojkata z sin\nmiedzy ktorymi bokami znajduje sie kat x?\n1.miedzy bok_a a bok_b \n2.miedzy bok_a a bok_c \n3.miedzy bok_c a bok_b\n ");
//		scanf_s("%d", &menu_2);
//		switch(menu_2){
//		case 1:
//			printf("podaj dlugosci bokow i kat\n");
//			scanf_s("%lf%lf%lf", &bok_a, &bok_b, &kat_ab);
//			printf("%lf", (1 / 2.0)*sin(kat_ab*(PI/180.0))*bok_a*bok_b);
//			break;
//		case 2:
//			printf("podaj dlugosci bokow i kat\n");
//			scanf_s("%lf%lf%lf", &bok_a, &bok_c, &kat_ac);
//			kat_ab = PI / 180;
//			printf("%lf", (1 / 2.0)*sin(kat_ac)*bok_a*bok_c);
//			break;
//		case 3:
//			printf("podaj dlugosci bokow i kat\n");
//			scanf_s("%lf%lf%lf", &bok_c, &bok_b, &kat_bc);
//			kat_ab = PI / 180;
//			printf("%lf", (1 / 2.0)*sin(kat_ac)*bok_c*bok_b);
//			break;
//		}
//		break;
//
//	case 2:
//		printf("pole trojkata bok i wysokosc\nna ktory bok opuszczona jest wysokosc?\n\n1.bok_a\n2.bok_b\n3.bok_c\n");
//		scanf_s("%d", &ktory);
//
//		switch (ktory) {
//		case 1 :
//			printf("podaj dlugosc boku i wysokosci\n");
//			scanf_s("%lf%lf", &bok_a, &wysokosc_a);
//			printf("%lf\n", (1 / 2.0)*bok_a*wysokosc_a);
//			break;
//		case 2:
//			printf("podaj dlugosc boku i wysokosci\n");
//			scanf_s("%lf%lf", &bok_b, &wysokosc_b);
//			printf("%lf\n", (1 / 2.0)*bok_b*wysokosc_b);
//			break;
//		case 3:
//			printf("podaj dlugosc boku i wysokosci\n");
//			scanf_s("%lf%lf", &bok_c, &wysokosc_c);
//			printf("%lf\n", (1/2.0)*bok_c*wysokosc_c);
//			break;
//		}
//		break;
//	case 3:
//		printf("pole trojkata 3 boki\n");
//		scanf_s("%lf %lf", &bok_a, &bok_b);
//		scanf_s("%lf", &bok_c);
//		p = (1 / 2.0)*(bok_a + bok_b + bok_c);
//		t = p*(p - bok_a)*(p - bok_b)*(p - bok_c);
//
//
//		printf("%lf", sqrt(t));
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//	system("PAUSE");
//	return 0;
//}
//
//program 61
//int main()
//{
//	char godzina_1, godzina_2, minuty_1, minuty_2, dwukropek;
//
//	printf("Program Autorstwa Kamila Skronskiego\n");
//	printf("Podaj godzine w formacie hh:mm\n");
//
//	while ((scanf_s("%c", &godzina_1)) != 1 || (scanf_s("%c", &godzina_2)) != 1 || (scanf_s("%c", &dwukropek)) != 1 || (scanf_s("%c", &minuty_1)) != 1 || (scanf_s("%c", &minuty_2)) != 1 || getchar() != '\n') {
//		printf("podales bledne dane, popraw je\n");
//		while (getchar() != 1)
//			;
//	}
//	printf("\nOto wczytana godzina:\n");
//	if (minuty_1 == '0' && minuty_2 == '1')
//		printf("\n1 minuta po %c%c\n", godzina_1, godzina_2);
//	else if (((minuty_1 == '0' || minuty_2 >= '5') || (minuty_1 == '1' && minuty_2 >= '0')) || (minuty_1 == '2') && ((minuty_2 >= '0' && minuty_2 <= '1') || (minuty_2 >= '5')) || (minuty_1 == '2' && ((minuty_2 >= '0' && minuty_2 <= '1') || minuty_2 >= '5')))
//		printf("%c%c minut po %c%c", minuty_1, minuty_2, godzina_1, godzina_2);
//	else if (minuty_1 == '3' && (minuty_2 >= '0' && minuty_2 <= '1') || minuty_2 >= '5' || (minuty_1 == '4' && (minuty_2 >= '0' && minuty_2 <= '1') || minuty_2 >= '5') || (minuty_1 == '3' && (minuty_2 >= '0' && minuty_2 <= '1') || minuty_2 >= '5'))
//		printf("%c%c minut po %c%c", minuty_1, minuty_2, godzina_1, godzina_2);
//	else if ((minuty_1 == '2' || minuty_1 == '3' || minuty_1 == '4' || minuty_1 == '5') && (minuty_2 == '2' || minuty_1 == '3' || minuty_1 == '4'))
//		printf("\n1 minuty po %c%c\n", godzina_1, godzina_2);
//	printf("\nkoniec programu\n");
//	system("PAUSE");
//	return 0;
//}