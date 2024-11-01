#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int toplam = 0, n, i, j, sayac = 0; // 'toplam' mükemmel sayının bölen toplamını tutar, 'n' kullanıcıdan alınan sayı adedi

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &n); // Girilen sayıyı 'n' değişkenine atıyoruz
	
	for(i = 2; sayac != n; i++) // 2'den başlayarak n kadar mükemmel sayıyı bulmaya çalışıyoruz
	{
		for(j = 1; j < i; j++) // 1'den i-1'e kadar olan sayıları kontrol ediyoruz
		{
			if(i % j == 0) // Eğer i, j'ye tam bölünüyorsa
			{
				toplam += j; // j'yi toplamına ekliyoruz
			}
		}
		if(i == toplam) // Eğer toplam, i'ye eşitse bu bir mükemmel sayıdır
		{
			printf("%d ", i); // Mükemmel sayıyı ekrana yazdırıyoruz
			sayac++; // Mükemmel sayı sayacını artırıyoruz
		}
		toplam = 0; // Sonraki sayı için toplamı sıfırlıyoruz
	}

	return 0; // Programı başarıyla sonlandırıyoruz
}
