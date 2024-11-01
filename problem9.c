#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i, j, sonuc = 0, sayac = 0; // 'n' kullanıcıdan alınan sayı adedi, 'sayac' bulunan asal sayıları sayıyor

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &n); // Girilen sayıyı 'n' değişkenine atıyoruz
	
	printf("Sonuc: ");
	
	for(i = 2; sayac != n; i++) // Asal sayılar bulunana kadar devam ediyor
	{
		for(j = 1; j <= i; j++) // 1'den i'ye kadar her sayı için bölen kontrolü yapıyoruz
		{
			if(i % j == 0) // i, j'ye tam bölünüyorsa
			{
				sonuc++; // Bölen sayısını bir artırıyoruz
			}
		}
		if(sonuc == 2) // Eğer sadece 1 ve kendisi tarafından bölünüyorsa
		{
			printf("%d ", i); // Asal sayıyı ekrana yazdırıyoruz
			sayac++; // Asal sayı sayacını artırıyoruz
		}
		sonuc = 0; // Her i değeri için bölen sayısını sıfırlıyoruz
	}

	return 0; // Programı başarıyla sonlandırıyoruz
}
