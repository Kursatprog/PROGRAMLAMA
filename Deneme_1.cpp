#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	char cumle[100];
	printf("Bir Cumle Giriniz(Türkçe karakter kullanmayiniz):");
	gets(cumle);
	int uzunluk=0;
	int sayac=0;
	
	uzunluk=strlen(cumle);
	for(int i=0;i<uzunluk;i++){
		printf("%c",cumle[i]);
		if(cumle[i]==' '){
			printf("\n");
			sayac++;
		}
	}
	printf("\nGirilen Cumlede %d adet kelime vardýr.",sayac+1);
	
	getch();
}
