#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int topla(int a,int b);
main()
{
	int sayitoplam=topla(5,10);
	printf("Iki sayinin toplami = %d",sayitoplam);
}
int topla(int a,int b)
{
	int toplam=a+b;
	return toplam;
}
