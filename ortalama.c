/***********************************
 * Yucel Kurtulus
 * Ogrenci No, bolum falan
 **********************************/
#include <stdio.h>
#include <math.h>

// Aslinda bu is tam olarak boyle yapılmaz. Odevdir, sorgulamiyorum.

float arithmeticAvg(int numbers[], int numbersCount) {
	/*
	 * Bu bolumde aritmetik ortalama aliyoruz.
	 */
	int i, total = 0;
	for(i = 0; i < numbersCount; i++) {
		total += numbers[i];
	}

	return (float)total / (float)numbersCount;
}

float harmonicAvg(int numbers[], int numbersCount) {
	/*
	 * Bu bolumde harmonik ortalama aliniyor
	 */
	int i;
	float total = 0;
	for(i = 0; i < numbersCount; i++) {
		total += (float)1 / (float)numbers[i];
	}

	return (float)numbersCount / total;
}

float standartDeviation(int numbers[], int numbersCount) {
	/*
	 * Bu bolumde standart sapma hesaplaniyor
	 */
	int i;
	float total = 0;

	for(i = 0; i < numbersCount; i++) {
		total += pow(((float)numbers[i] - arithmeticAvg(numbers, numbersCount)), 2);
	}

	return sqrt(total / 10);
}

int* arraySort(int numbers[], int numbersCount) {
	//int result = numbers[];
	int i, k = 0, last = numbersCount, max = 0;
	int current, maxContainer;
	int count = 0;

	while(k < last) {
		for(i = 0; i < last; i++) {
			if(numbers[i] > max) {
				max = numbers[i];
				maxContainer = i;
			}
		}
		last--;
		current = numbers[last]; //dizinin en son elemanini sakliyoruz
		numbers[last] = max; //yukaridaki donguden en buyuk elemani en sona atiyoruz
		numbers[maxContainer] = current; //sakladigimiz en son elemani en buyugun eski yerine aliyoruz
		max = 0;
		count++;
	}

	for(i = 0; i < numbersCount; i++) {
		printf("%d\n", numbers[i]);
	}

	return numbers;
}

float findMedian(int numbers[], int numbersCount) {
	int foo;
	float median;
	if(numbersCount % 2 == 1) {
		//tek sayi
		foo = floor(numbersCount / 2);
		median = numbers[foo];
		printf("ortadaki sonucu goster %d. sonuc\n", foo);
	} else {
		int a, b;
		//cift sayi
		foo = numbersCount / 2;
		a = numbers[foo--];
		b = numbers[foo];
		median = ((float)a + (float)b) / (float)2;
	}
	return median;
}

int main(void) {
	int sayilar[] = {2, 5, 1, 2, 7, 13, 15, 9, 4, 8};
	int i, toplam = 0;
	int elemanSayisi = sizeof(sayilar)/sizeof(sayilar[0]);
	int* sirali = arraySort(sayilar, elemanSayisi);
	float ao, ho, ss, medyan, hoBirim, ssBirim;
	float sapmaToplam = 0;

	printf("AO: %.2f\n", arithmeticAvg(sayilar, elemanSayisi));
	printf("HO: %.2f\n", harmonicAvg(sayilar, elemanSayisi));
	printf("SS: %.2f\n", standartDeviation(sayilar, elemanSayisi));
	printf("Mod:\n");
	printf("Medyan: %.2f\n", findMedian(sayilar, elemanSayisi));

	return 0;
}
