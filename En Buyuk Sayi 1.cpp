#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a,b,c,d,e;
	
	printf("1. say�y� giriniz:");
	scanf("%d",&a);
	printf("2. say�y� giriniz:");
	scanf("%d",&b);
	printf("3. say�y� giriniz:");
	scanf("%d",&c); 
	printf("4. say�y� giriniz:");
	scanf("%d",&d);
	printf("5. say�y� giriniz:");
	scanf("%d",&e);
	
	if(a>b&&a>c&&a>d&&a>e)
		printf("En b�y�k say�:%d",a);
	else if(b>a&&b>c&&b>d&&b>e)
		printf("En b�y�k say�:%d",b);
	else if(c>a&&c>b&&c>d&&c>e)
		printf("En b�y�k say�:%d",c);
	else if(d>a&&d>b&&d>c&&d>e)
		printf("En b�y�k say�:%d",d);
	else
		printf("En b�y�k say�:%d",e);	
	getch();
}
