#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dizi[5];
	srand(time(NULL));
	
	dizi[0]=100+rand()%900;
	//dizi[1]=dizi[0]+rand()%(1000-dizi[0]);
	//dizi[2]=dizi[1]+rand()%(1000-dizi[1]);
	//dizi[3]=dizi[2]+rand()%(1000-dizi[2]);
	//dizi[4]=dizi[3]+rand()%(1000-dizi[3]);
	printf("%d\n",dizi[0]);
	
	for(int i=1;i<5;i++){
		dizi[i]=dizi[i-1]+rand()%(1000-dizi[i-1]);
		printf("%d \n",dizi[i]);
	}
	
	getch();
}
