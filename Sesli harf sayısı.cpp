#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	char cumle[100];
	printf("Bir Cumle Giriniz(T�rk�e karakter kullanmayiniz):");
	gets(cumle);
	int uzunluk=0;
	int sayac=0;
	
	uzunluk=strlen(cumle);
	for(int i=0;i<uzunluk;i++){
		if(cumle[i]=='a'||cumle[i]=='e'||cumle[i]=='i'||cumle[i]=='o'||cumle[i]=='u') sayac++;
	}
	printf("%s c�mlede %d adet sesli harf vard�r.",cumle,sayac);
	
	getch();
}
