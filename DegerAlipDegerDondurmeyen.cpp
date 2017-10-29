#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void goster(int a,int b);
main()
{
	int x,y;
	printf("Sayi gir: ");
	scanf("%d",&x);
	printf("Sayi gir: ");
	scanf("%d",&y);
	goster(x,y);
	getch();
}
void goster(int a,int b)
{
	if(a>b) printf("Ilk girilen sayi Ikinci girilen sayidan buyuktur.");
	else printf("Ikinci girilen sayi Ilk girilen sayidan buyuktur.");
}
