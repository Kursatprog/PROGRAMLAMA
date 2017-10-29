#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	char kelime[100];
	printf("Bir Kelime Giriniz:");
	gets(kelime);
	int uzunluk=0;
	int sayac=0;
	
	uzunluk=strlen(kelime);
	for(int i=0;i<uzunluk;i++){
		if(kelime[i]=='a') sayac++;
	}
	printf("Girilen cümlede %d adet a harfi vardýr.",sayac);
	
	getch();
}
