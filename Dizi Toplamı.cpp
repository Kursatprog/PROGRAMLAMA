#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dizi[8];
	int toplam=0;
	
	
	for(int i=0;i<8;i++) {
	printf("%d. say�y� giriniz: ",i+1);
	scanf("%d",&dizi[i]);
	toplam+=dizi[i];
	}
	printf("Girilen say�lar�n toplam = %d",toplam);
	
	
	getch();
}
