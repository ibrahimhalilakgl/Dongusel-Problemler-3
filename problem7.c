#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, i, j, sonuc = 1; // 'n' girilen sayı, 'sonuc' her bir faktöriyel sonucunu tutuyor

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &n); // Girilen sayıyı 'n' değişkenine atıyoruz
	
	printf("Sonuc: ");
	for(i = 2; i <= n; i++) // 2'den n'e kadar her sayı için döngü
	{
		for(j = 1; j <= i; j++) // 1'den i'ye kadar olan sayıların çarpımı
		{
			sonuc *= j; // Faktöriyel hesaplaması
		}
		printf("%d ", sonuc); // Faktöriyel sonucunu ekrana yazdırıyoruz
		sonuc = 1; // Bir sonraki faktöriyel için 'sonuc' sıfırlanıyor
	}
	
	return 0; // Programı başarıyla sonlandırıyoruz
}
