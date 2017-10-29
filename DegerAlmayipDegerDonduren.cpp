#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int ort();
main()
{
	int ortalama=0;
	ortalama=ort();
	printf("Sayilarin ortalamasi = %d",ortalama);
}
int ort()
{
	int toplam=0;
	int ortalamasi=0;
	for(int i=0;i<=100;i++) toplam+=i;
	ortalamasi=toplam/100;
	return ortalamasi;
}
