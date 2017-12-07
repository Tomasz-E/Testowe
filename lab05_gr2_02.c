//ver 2.0
///////////////////////////////////////////////////////////////////////////////
//PROGRAM 35
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x - liczba podana
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby podal inne dane,
//f_x                   - wartosc funkcji f(x)=x^8
//
//TESTY:
//------------------------------------------------------------------------
//wartosc zmiennej x      |spodziewany wynik |opis wynikow testow
//------------------------------------------------------------------------
//                 d a n e   t y p o w e
//3.00                     |  6561	       |	
//-3.14                    |  9.450...         |
//1e                       |  bledne dane      |
//12                       |  bledne dane      |
//------------------------------------------------------------------------
//                 d a n e   b r z e g o w e
//brak                 
//                 d a n e   b l e d n e
//------------------------------------------------------------------------
//wartosci podane przez uzytk. |spodziewany wynik     |opis wynikow testow
//------------------------------------------------------------------------
//23.3asd                      |Bledne dane.          |
//asd23                        |Bledne dane.          |
//23 asd                       |Bledne dane.          |
//23 123                       |Bledne dane.          |
//------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
   double x;              //argument funkcji f
   printf("Program prosi o podanie argumentu x");
   printf("\ni nastepnie oblicza wartosc f(x).\n");
   printf("Wzor na funkcje f jest podany w tresci zadania.\n\n");
   printf("Autor programu: Kordian Iwanicki\n\n");
                          //wczytywanie danych
   printf("Podaj x:  ");
   if (scanf("%lf",&x)!=1 || getchar()!='\n')
   {
       printf("Bledne dane.\n");
       printf("\nKoniec programu.\n");
       return 0;     
   }
   printf("Podales argument x = %.15g.\n",x);   
   printf("\nKoniec programu.\n");
   return 0;   
} 
*/
///////////////////////////////////////////////////////////////////////////////
//PROGRAM 36
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x - liczba 
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby podal inne dane,
//f_x                   - wartosc funkcji f(x) dla argumentu zapisanego w x, jesli 
//                          dane byly poprawne
//
//TESTY:
//------------------------------------------------------------------------
//wartosc zmiennej x      |spodziewany wynik |opis wynikow testow
//------------------------------------------------------------------------
//                 d a n e   t y p o w e
//3.00                     |  53	 |	
//-3.14                    |  66.804     |
//1e                       |  bledne dane|
//12                       |  bledne dane|
//------------------------------------------------------------------------
//                 d a n e   b r z e g o w e
//brak                 
//                 d a n e   b l e d n e
//------------------------------------------------------------------------
//wartosci podane przez uzytk. |spodziewany wynik     |opis wynikow testow
//------------------------------------------------------------------------
//23.3asd                      |Bledne dane.          |
//asd23                        |Bledne dane.          |
//23 asd                       |Bledne dane.          |
//23 123                       |Bledne dane.          |
//------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
   double x;              //argument funkcji f
   double f_x;            //wartosc f(x)
   printf("Program prosi o podanie argumentu x");
   printf("\ni nastepnie oblicza wartosc f(x).\n");
   printf("Wzor na funkcje f jest podany w tresci zadania.\n\n");
   printf("Autor programu: Kordian Iwanicki\n\n");
                          //wczytywanie danych
   printf("Podaj x:  ");
   if (scanf("%lf",&x)!=1 || getchar()!='\n')
   {
       printf("Bledne dane.\n");
       printf("\nKoniec programu.\n");
       return 0;     
   }
   printf("Podales argument x = %.15g.\n",x);   
   printf("\nKoniec programu.\n");
   return 0;   
} 
*/

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 37
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x - liczba 1
//y - liczba 2
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby podal inne dane,
//f_x                   - wartosc funkcji f(x) dla argumentu zapisanego w x, jesli 
//                          dane byly poprawne
//
//TESTY:
//------------------------------------------------------------------------
//wartosc zmiennej x      |spodziewany wynik |opis wynikow testow
//------------------------------------------------------------------------
//                 d a n e   t y p o w e
//3.00                     |  bledne dane|	
//-3.14                    |  bledne dane|
//1                        |  		 |
//12                       |  bledne dane|
//------------------------------------------------------------------------
//                 d a n e   b r z e g o w e
//brak                 
//                 d a n e   b l e d n e
//------------------------------------------------------------------------
//wartosci podane przez uzytk. |spodziewany wynik     |opis wynikow testow
//------------------------------------------------------------------------
//23.3asd                      |Bledne dane.          |
//asd23                        |Bledne dane.          |
//23 asd                       |Bledne dane.          |
//23 123                       |Bledne dane.          |
//------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
   double x;              //argument funkcji f
   double f_x;            //wartosc f(x)
   printf("Program prosi o podanie argumentu x");
   printf("\ni nastepnie oblicza wartosc f(x).\n");
   printf("Wzor na funkcje f jest podany w tresci zadania.\n\n");
   printf("Autor programu: Kordian Iwanicki\n\n");
                          //wczytywanie danych
   printf("Podaj x:  ");
   if (scanf("%lf",&x)!=1 || getchar()!='\n')
   {
       printf("Bledne dane.\n");
       printf("\nKoniec programu.\n");
       return 0;     
   }
   printf("\nKoniec programu.\n");
   return 0;   
} 
*/

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 38
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x - liczba 1
//y - liczba 2
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby podal inne dane,
//
//TESTY: (po napisaniu programu)





///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
   double x, y;              //liczby
   printf("Program prosi o podanie liczb x i y");
   printf("\ni nastepnie oblicza wartosc dzialania preferowanego na podanych liczbach.\n");
   printf("Autor programu: Kordian Iwanicki\n\n");
                          //wczytywanie danych
   printf("Podaj x, y:  ");
   if (scanf("%lf",&x)!=1 || scanf("%lf",&y)!=1 || getchar()!='\n')
   {
       printf("Bledne dane.\n");
       printf("\nKoniec programu.\n");
       return 0;     
   }
   printf("\nKoniec programu.\n");
   return 0;   
} 

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 39
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x - liczba zmiennopozycyjna
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby zmiennopozycyjnej podal inne dane.
//
//TESTY:
//------------------------------------------------------------------------
//wartosc zmiennej x      |spodziewany wynik |opis wynikow testow
//------------------------------------------------------------------------
//                 d a n e   t y p o w e
//3.00                     |  8.00	 |	
//-3.14                    |  -1         |
//1e                       |  bledne dane|
//12                       |  bledne dane|
//------------------------------------------------------------------------
//                 d a n e   b r z e g o w e
//brak                 
//                 d a n e   b l e d n e
//------------------------------------------------------------------------
//wartosci podane przez uzytk. |spodziewany wynik     |opis wynikow testow
//------------------------------------------------------------------------
//23.3asd                      |Bledne dane.          |
//asd23                        |Bledne dane.          |
//23 asd                       |Bledne dane.          |
//23 123                       |Bledne dane.          |
//------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
   double x;              //argument funkcji f
   printf("Program prosi o podanie argumentu x");
   printf("\ni nastepnie oblicza wartosc f(x).\n");
   printf("Wzor na funkcje f jest podany w tresci zadania.\n\n");
   printf("Autor programu: Kordian Iwanicki\n\n");
                          //wczytywanie danych
   printf("Podaj x:  ");
   if (scanf("%lf",&x)!=1 || getchar()!='\n')
   {
       printf("Bledne dane.\n");
       printf("\nKoniec programu.\n");
       return 0;     
   }  
   printf("\nKoniec programu.\n");
   return 0;   
} 

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 40
//
//DANE PODAWANE PRZEZ UZYTKOWNIKA:
//x - liczba 1
//y - liczba 2
//
//WYNIKI:
//napis "Bledne dane."  - jesli uzytkownik zamiast liczby podal inne dane,
//f_x                   - wartosc funkcji f(x) dla argumentów zapisanych w x i y, jesli 
//                          dane byly poprawne
//
//TESTY:
//------------------------------------------------------------------------
//wartosc zmiennej x      |spodziewany wynik |opis wynikow testow
//------------------------------------------------------------------------
//                 d a n e   t y p o w e
//3.00 5                   |  		 |	
//-3.14 12                 |  	         |
//1e 5                     |  bledne dane|
//12 1a                    |  bledne dane|
//------------------------------------------------------------------------
//                 d a n e   b r z e g o w e
//brak                 
//                 d a n e   b l e d n e
//------------------------------------------------------------------------
//wartosci podane przez uzytk. |spodziewany wynik     |opis wynikow testow
//------------------------------------------------------------------------
//23.3asd                      |Bledne dane.          |
//asd23                        |Bledne dane.          |
//23 asd                       |Bledne dane.          |
//23 123                       |Bledne dane.          |
//------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
   double x, y;              //wspolrzedne punktu
   double f_1, f_2;            //wartosc f(x) w dwóch wariantach
   printf("Program prosi o podanie wspolrzednych x, y");
   printf("\ni nastepnie oblicza odleglosc punktu od (0,0).\n");
   printf("Autor programu: Kordian Iwanicki\n\n");
                          //wczytywanie danych
   printf("Podaj x, y:  ");
   if (scanf("%lf",&x)!=1 || scanf("%lf",&y)!=1 || getchar()!='\n')
   {
       printf("Bledne dane.\n");
       printf("\nKoniec programu.\n");
       return 0;     
   }
   printf("\nKoniec programu.\n");
   return 0;   
} 