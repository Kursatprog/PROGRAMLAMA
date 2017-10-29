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
	
	uzunluk=strlen(kelime);
	printf("\n%d karakter",uzunluk);
	printf("\n%s",kelime);
	for(int i=0;i<uzunluk;i++){
		printf("\n%c",kelime[i]);
	}
	
	getch();
}
