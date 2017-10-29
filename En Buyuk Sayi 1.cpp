#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a,b,c,d,e;
	
	printf("1. sayýyý giriniz:");
	scanf("%d",&a);
	printf("2. sayýyý giriniz:");
	scanf("%d",&b);
	printf("3. sayýyý giriniz:");
	scanf("%d",&c); 
	printf("4. sayýyý giriniz:");
	scanf("%d",&d);
	printf("5. sayýyý giriniz:");
	scanf("%d",&e);
	
	if(a>b&&a>c&&a>d&&a>e)
		printf("En büyük sayý:%d",a);
	else if(b>a&&b>c&&b>d&&b>e)
		printf("En büyük sayý:%d",b);
	else if(c>a&&c>b&&c>d&&c>e)
		printf("En büyük sayý:%d",c);
	else if(d>a&&d>b&&d>c&&d>e)
		printf("En büyük sayý:%d",d);
	else
		printf("En büyük sayý:%d",e);	
	getch();
}
