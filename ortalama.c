#include <stdio.h>
#include <math.h>

int main(void) {
	int sayilar[10] = {2, 5, 1, 2, 7, 13, 15, 9, 4, 8};
	int i, toplam = 0;
	int elemanSayisi = sizeof(sayilar)/sizeof(sayilar[0]);
	float ao, ho, ss, medyan, hoBirim, ssBirim;
	float sapmaToplam = 0;

	for(i = 0; i < elemanSayisi; i++) {
		toplam += sayilar[i];
		hoBirim += 1 / sayilar[i];
	}

	ao = toplam / elemanSayisi;
	ho = elemanSayisi / hoBirim;

	for(i = 0; i < elemanSayisi; i++) {
		sapmaToplam += pow((sayilar[i] - ao), 2);
		printf("%d karesi: %f\n", sayilar[i], ssBirim);
	}

	ss = sqrt(sapmaToplam / 10);

	printf("AO: %f\n", ao);
	printf("HO: %f\n", ho);
	printf("SS: %f\n", ss);

	return 0;
}
