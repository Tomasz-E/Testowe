/////////// Przemyslaw Kaminski


///////////////////////////////////////////////////////////////////////////////
//PROGRAM 48
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>

int main()
{
    double a=1;
   printf("Program ten wypisze piecdziesiat pierwszych poteg dwojki.\n");
   int i;
   for ( i=0; i<50; i++)
   {
       a*=2;
       printf("%.0f\n", a);
   }
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////
//PROGRAM 49
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>

int main()
{
    double a=1;
   printf("Program ten wyswietli wartosci silnii dla liczb naturalnych z zakresu od 1 do 200\n");
   int i, licznik=1;
   for (i=1; i<201; i++)
   {
       a*=licznik;
       printf("%.0f\n", a);
       licznik++;
   }
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 50
///////////////////////////////////////////////////////////////////////////////

/*
#include <stdio.h>
#include <math.h>

int main()
{
    double a=1, licznik=1;
   printf("Program ten wyswietli wartosci funkcji zawartej w tresci zadania, dla liczb naturalnych z zakresu od 1 do 200\n");
   int i;
   for (i=1; i<201; i++)
   {
       a*=(licznik+1);
       printf("%.16f\n", (pow(3, licznik)/a));
       licznik++;
   }
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////
//PROGRAM 51
///////////////////////////////////////////////////////////////////////////////
/*

#include <stdio.h>
#include <math.h>

int main()
{
    double a=1, licznik=0;
   printf("Program wypisze najmniejsza liczbe naturalna spelniajaca nierownosc z tresci zadania\n");
   int i;
   do
   {
       a*=(licznik+1);
       licznik++;
       printf("%.16f\n", (pow(90, licznik)/a));
   }while ((pow(90, licznik)/a)>=1);
    printf("%.16f\n", (pow(90, licznik)/a));
    printf("%.0f\n", licznik);
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////
//PROGRAM 52
///////////////////////////////////////////////////////////////////////////////
/*

#include <stdio.h>

int main()
{
    char napis[1000];
   printf("Program prosi uzytkownika o linie tekstu, a nastepnie wypisuje ja bez zbednych spacji.\n");
   scanf("%c",&napis);
   printf("\n\n%c", napis[0]);
   int licznik=1;
   while (napis[licznik]!='\n')
   {
       if ((napis[licznik-1]=='\s')&&(napis[licznik]=='\s'))
            licznik++;
       else
       {
           printf("%c", napis[licznik]);
           licznik++;
       }
   }
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 53
///////////////////////////////////////////////////////////////////////////////
/*

#include <stdio.h>

int main()
{
    int a, warunek=0;
   printf("Program tak dlugo prosi o podanie liczby naturalnej \'t\',");
   printf("\naz dane beda poprawne.\n");
   printf("Po wpisaniu liczby, program wypisuje ja na ekranie.\n\n");
   while (warunek=0)
        {
          if (((scanf("%d",&a))!=1)||(getchar()!='\n'))
            warunek=1;
        printf("%d\n", a);
        }
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////
//PROGRAM 54
///////////////////////////////////////////////////////////////////////////////
/*

#include <stdio.h>

int main()
{
    char a;
   printf("Program tak dlugo prosi o nacisniecie klawisza \'t\',");
   printf("\naz dane beda poprawne.\n\n");
   do
    a=getchar();
   while (a=='t');
   printf("Autor programu: Przemyslaw Kaminski\n\n");
   printf("\n\nKoniec programu.\n");
   return 0;
}
*/
