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
	int ort=0;
	int toplam=0;
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		x=67+rand()%115;
		if(x%2==0){
			printf("%d ÇÝFT\n",x);
			adet++;
			toplam+=x;
			ort=toplam/adet;
		}
		else{
			printf("%d TEK\n",x);
		}
	}
	printf("Üretilen çift sayýlarýn ortalamasý: %d",ort);
	getch();
}
