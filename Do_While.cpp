#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int toplam=0;
	int x=0;
	do{
		printf("Bir sayý griniz:	");
		scanf("%d",&x);
		toplam=toplam+x;
	}while(x!=0); // sayý sýfýr ise çýk!!!!!!!!!!!!
	printf("%d",toplam);
	
	getch();
}
