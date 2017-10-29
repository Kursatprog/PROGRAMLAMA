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
	while(sayac<=10){
		printf("%d. sayiyi giriniz:	",sayac);
		scanf("%d",&x);
		printf("%d\n",x);
		sayac++;
	}
	
	getch();
}
