#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi,i,toplam=0;
	
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam+=i;
		}
	}
	
	if(toplam==sayi)
	{
		printf("Sayi Mukemmel Sayidir.");
	}
	else
	{
		printf("Sayi Mukemmel Sayi Degildir.");
	}
	
	return 0;
}
