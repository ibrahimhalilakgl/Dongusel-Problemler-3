#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi, i; // 'sayi' kullanıcının girdiği sayı, 'i' döngü değişkeni

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &sayi); // Girilen sayıyı 'sayi' değişkenine atıyoruz

	for(i = 1; i < sayi; i++) // 1'den girilen sayıya kadar olan sayılarda döngü başlatıyoruz
	{
		if(i * (i + 1) == sayi) // 'i' ve 'i+1' çarpımı girilen sayıya eşitse kontrol ediyoruz
		{
			printf("Girilen Sayi Pronic Sayidir."); // Eşitse, sayının pronic olduğunu bildiriyoruz
			return 1; // Pronic bulunduğu için programı sonlandırıyoruz
		}
	}
	printf("Girilen Sayi Pronic Degildir."); // Pronic bulunmazsa, sayının pronic olmadığını yazdırıyoruz
	
	return 0; // Programı başarıyla sonlandırıyoruz
}
