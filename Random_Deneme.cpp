#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int x=0;
	int adet=0;
	srand(time(NULL));
	for(int i=0; i<20; i++)
	{
		x=25+rand()%225;
		if(100<x&&x<175)
		{
			printf("%d\n",x);
			adet++;
		}
	}
	printf("%d adet sayý vardýr.",adet);
	
	getch();
}
