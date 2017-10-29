#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	srand(time(NULL));
	int dizi[10];
	
	for(int i=0;i<10;i++) {
	dizi[i]=1+rand()%100;
	if(dizi[i]>50){
		printf("%d\n",dizi[i]);
	}
	}
	
	getch();
}
