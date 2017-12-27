#include <stdio.h>
#include <conio.h>


int ort();
main()
{
	int ortalama;
	ortalama=ort();
	printf("Ortalama = %d",ortalama);
	getch();
}
int ort()
{
	int ortalamasi=0;
	for(int i=1;i<=100;i++)
	{
		ortalamasi+=i;
	}
	ortalamasi=ortalamasi/100;
	return ortalamasi;
}
