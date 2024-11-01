#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi, temp, basamak; // 'sayi' kullanıcıdan alınan sayı, 'temp' önceki basamağı, 'basamak' mevcut basamağı temsil ediyor

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &sayi); // Girilen sayıyı 'sayi' değişkenine atıyoruz

	temp = sayi % 10; // İlk basamak değeri alınıyor
	sayi = sayi / 10; // İlk basamak atılıyor
	
	for(; sayi != 0;) // Sayı 0 olana kadar döngü devam ediyor
	{
		basamak = sayi % 10; // Sıradaki basamak alınıyor
		
		// Mevcut basamağın, önceki basamağa göre aynı, 1 eksik veya 1 fazla olup olmadığını kontrol ediyoruz
		if(basamak == temp || basamak == (temp - 1) || basamak == (temp + 1))
		{
			temp = basamak; // Eğer koşullardan biri sağlanıyorsa, 'temp' güncelleniyor
			sayi = sayi / 10; // Sayının son basamağı çıkarılıyor
		}
		else
		{
			printf("Girilen Sayi Jumbled Sayi Degildir."); // Koşul sağlanmazsa jumbled değil
			return 1; // Programı sonlandırıyoruz
		}
	}
	printf("Girilen Sayi Jumbled Sayidir."); // Tüm koşullar sağlanmışsa, sayı jumbled sayıdır
	
	return 0; // Programı başarıyla sonlandırıyoruz
}
