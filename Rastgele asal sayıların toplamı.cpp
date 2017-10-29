#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	srand(time(NULL));
	int dizi[15];
	int toplam=0,sayac=0;
	
	for(int i=0;i<15;i++){
		dizi[i]=17+rand()%238;
		for(int j=2;j<dizi[i];j++){
			if(dizi[i]%j==0){
				sayac++;
			}
		}
		if(sayac==0){
			printf("%d\n",dizi[i]);
			toplam+=dizi[i];
		}
		sayac=0;
	}
	printf("Asal sayýlarýn toplamý = %d",toplam);
	
	getch();
}
