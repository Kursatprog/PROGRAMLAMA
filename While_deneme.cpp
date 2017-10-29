#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayac=1;
	int x=0;
	int adet1=0;
	int adet2=0;
	srand(time(NULL));
	while(sayac<=100){
		x=1+rand()%100;
		if(x%2==0){
			adet1++;
		}
		else{
			adet2++;
		}
		sayac++;
	}
	printf("Çift sayýlarýn adedi: %d\nTek sayýlarýn adedi: %d",adet1,adet2);
	
	getch();
}
