#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int x=0;
	srand(time(NULL));
	x=5+rand()%295;						//x=a+rand()%b      a ile a+b aras�nda bir say� �retir. a dahil, a+b dahil DE��LD�R!
	printf("%d\n",x);
	
	getch();
}
