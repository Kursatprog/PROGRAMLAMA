#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int x[10];
	
	for(int i=0;i<10;i++) {
	x[i]=i+10;
	}
	for(int i=0;i<10;i++){
		printf("%d. indeks eleman�n�n de�eri= %d\n",i,x[i]);
	}
	
	
	getch();
}
