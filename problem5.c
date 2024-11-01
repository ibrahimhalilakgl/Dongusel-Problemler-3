#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi, temp, ust = 1, toplam = 0; // 'sayi' kullanıcıdan alınan sayı, 'temp' son basamak, 'ust' 2'nin üssü, 'toplam' sonucu tutuyor

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &sayi); // Girilen sayıyı 'sayi' değişkenine atıyoruz

	for(; sayi != 0;) // Sayı 0 olana kadar döngü devam ediyor
	{
		temp = sayi % 10; // Sayının son basamağını alıyoruz (binary basamağı)
		sayi = sayi / 10; // Sayının son basamağını çıkartıyoruz
		toplam = toplam + (ust * temp); // İkilik basamağı ondalık değere ekliyoruz
		ust = ust * 2; // İkilik basamak ilerledikçe üssü 2 ile çarpıyoruz
	}
	
	printf("Sonuc: %d", toplam); // Binary sayının ondalık tabandaki karşılığını yazdırıyoruz
	
	return 0; // Programı başarıyla sonlandırıyoruz
}
