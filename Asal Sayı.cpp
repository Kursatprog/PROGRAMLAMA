#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi=0;int sayac=0;
	printf("Bir say� giriniz:");
	scanf("%d",&sayi);
	
	for(int i=2;i<sayi;i++){
		if(sayi%i==0){
			sayac++;
		}
	}
	if(sayac==0){
		printf("Girdi�iniz say� asald�r.");
	}
	else{
		printf("Girdi�iniz say� asal de�ildir");
	}
	
	getch();
}
