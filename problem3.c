#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi, i, toplam = 0, sayi2; // 'sayi' kullanıcıdan alınan sayı, 'toplam' basamakların toplamı, 'sayi2' geçici değişken

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &sayi); // Girilen sayıyı 'sayi' değişkenine atıyoruz

	sayi2 = sayi;  // Orijinal sayıyı korumak için 'sayi2' değişkenine kopyalıyoruz
		
	for(i = 0; sayi2 != 0; i++) // Sayının her bir basamağını toplamak için döngü başlatıyoruz
	{
		toplam += sayi2 % 10; // Sayının son basamağını alıp 'toplam' değişkenine ekliyoruz
		sayi2 = sayi2 / 10; // Sayının son basamağını çıkartıyoruz
	}

	if(sayi % toplam == 0) // Sayının basamakları toplamına tam bölünüp bölünmediğini kontrol ediyoruz
	{
		printf("Girilen Sayi Harshad Sayisidir."); // Eğer tam bölünüyorsa, sayının Harshad sayısı olduğunu yazdırıyoruz
	}
	else
	{
		printf("Girilen Sayi Harshad Sayisi Degildir."); // Eğer tam bölünmüyorsa, sayının Harshad sayısı olmadığını yazdırıyoruz
	}
	
	return 0; // Programı başarıyla sonlandırıyoruz
}
