#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi=0;int sayac=0;
	printf("Bir sayý giriniz:");
	scanf("%d",&sayi);
	
	for(int i=2;i<sayi;i++){
		if(sayi%i==0){
			sayac++;
		}
	}
	if(sayac==0){
		printf("Girdiðiniz sayý asaldýr.");
	}
	else{
		printf("Girdiðiniz sayý asal deðildir");
	}
	
	getch();
}
