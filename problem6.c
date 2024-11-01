#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi, kalan, tersSayi = 0, basamak = 1;

    printf("Lutfen Sayiyi Giriniz: ");
    scanf("%d", &sayi); // Kullanıcıdan onluk tabanda bir sayı alıyoruz

    for(;sayi > 0;) {
        kalan = sayi % 2; // Sayıyı 2'ye böldüğümüzde kalan, binary için bit değeri
        tersSayi += kalan * basamak; // Ters sırada sonucu oluşturuyoruz (basamakla çarpılarak ekleniyor)
        sayi /= 2; // Sayıyı 2'ye bölerek sıradaki bite geçiyoruz
        basamak *= 10; // Sonucu doğru sırada toplamak için basamağı 10 ile çarpıyoruz
    }

    printf("Sonuc: %d", tersSayi);

    return 0; // Programı başarıyla sonlandırıyoruz
}
