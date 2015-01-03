#include <stdio.h>
//int
//char[5] isim;
//float
//double
//boolean

float ortalama(int elemanSayisi, int sayilarKumesi[]) {
	int yucel, toplam = 0;

	for(yucel = 0; yucel < elemanSayisi; yucel++) {
		toplam += sayilarKumesi[yucel];
		//toplam = toplam + sayilarKumesi[yucel];
	}

	return (float)toplam / (float)elemanSayisi;
}

int main() {
	int elemanSayisi = 0, toplam = 0;
	int sayilar[10];
	int tasiyici;
	float ortalama;
/*
	printf("10 tane sayi istiyorum.\n");

	for(elemanSayisi = 0; elemanSayisi < 10; elemanSayisi++) {
		printf("Sayi girin.");
		scanf("%d", &sayilar[elemanSayisi]);
	}

	printf("Sayilarin aritmetik ortalamasi: %.2f\n", ortalama(elemanSayisi, sayilar));
*/

	while(1) {
		printf("Sayi giriniz. Cikis icin 0\n");
		scanf("%d", &tasiyici);

		if(tasiyici == 0) {
			printf("Cikis istegi alindi. Hesaplaniyor...\n");
			break;
		} else {
			toplam += tasiyici;
			elemanSayisi++;
		}
	}

	ortalama = (float)toplam / (float)elemanSayisi;

	printf("Ortalama: %.2f\n ", ortalama);

	return 0;
}
