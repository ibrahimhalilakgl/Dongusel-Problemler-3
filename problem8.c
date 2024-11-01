#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i, j, sonuc = 0; // 'n' girilen sayı, 'sonuc' bölen sayısını tutuyor

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &n); // Girilen sayıyı 'n' değişkenine atıyoruz
	
	printf("Sonuc: ");
	for(i = 2; i <= n; i++) // 2'den n'e kadar her sayıyı kontrol ediyoruz
	{
		for(j = 1; j <= i; j++) // Her sayı için 1'den o sayıya kadar bölen sayısını kontrol ediyoruz
		{
			if(i % j == 0) // Eğer i, j'ye tam bölünüyorsa
			{
				sonuc++; // Bölen sayısını bir artırıyoruz
			}
		}
		if(sonuc == 2) // Sadece 2 böleni varsa (1 ve kendisi), o sayı asaldır
		{
			printf("%d ", i); // Asal sayıyı ekrana yazdırıyoruz
		}
		sonuc = 0; // Sonraki sayı için 'sonuc' sıfırlanıyor
	}

	return 0; // Programı başarıyla sonlandırıyoruz
}
