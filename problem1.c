#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi, i, toplam = 0; // 'sayi' kullanıcının girdiği sayı, 'i' döngü değişkeni, 'toplam' bölenlerin toplamını tutuyor

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &sayi); // Girilen sayıyı 'sayi' değişkenine atıyoruz

	for(i = 1; i < sayi; i++) // 1'den girilen sayıya kadar döngü başlatıyoruz
	{
		if(sayi % i == 0) // 'i' sayısının, 'sayi'ya tam bölünüp bölünmediğini kontrol ediyoruz
		{
			toplam += i; // Eğer tam bölünüyorsa, 'toplam' değişkenine ekliyoruz
		}
	}
	
	if(toplam == sayi) // Eğer bölenlerin toplamı girilen sayıya eşitse
	{
		printf("Sayi Mukemmel Sayidir."); // Sayının mükemmel sayı olduğunu yazdırıyoruz
	}
	else // Değilse
	{
		printf("Sayi Mukemmel Sayi Degildir."); // Sayının mükemmel sayı olmadığını yazdırıyoruz
	}
	
	return 0; // Programı başarıyla sonlandırıyoruz
}
