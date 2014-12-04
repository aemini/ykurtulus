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

	return numbers;
}

float findMedian(int numbers[], int numbersCount) {
	int foo;
	float median;
	/*
	 * Dizideki eleman sayisi tek ise ortadaki deger medyandir
	 * Cift sayida eleman varsa ortadaki iki elemanin
	 * aritmetik ortalamasi alinacak.
	 */
	if(numbersCount % 2 == 1) {
		foo = floor(numbersCount / 2);
		median = numbers[foo];
	} else {
		int a, b;
		foo = numbersCount / 2;
		a = numbers[foo--];
		b = numbers[foo];
		median = ((float)a + (float)b) / (float)2;
	}
	return median;
}

float findMod(int numbers[], int numbersCount) {
	int values[numbersCount];
	int value;
	int* sorted = arraySort(numbers, numbersCount);
	int i = 0, before = -1, count = 1, mod, max = 0;
	/*
	 * FIXME Daha iyi bir yontem bulamadim
	 * siralanmis diziyi listeleyip bir onceki deger ile karsilastiriyorum
	 */

	for(i = 0; i < numbersCount; i++) {
		if(sorted[i] == before) {
			//bir onceki degerle ayni, dolayisiyla tekrar etmis
			count++;
			if(count > max) {
				//en buyuk tekrar degerinden buyuk ise ezelim
				max = count;
				mod = sorted[i];
			}
		} else {
			//tekrar yok, yeni bir deger.
			count = 1;
		}
		before = sorted[i];
	}

	return mod;
}

int main(void) {
	int sayilar[] = {2, 5, 1, 2, 7, 13, 15, 9, 4, 8};
	int i;
	int elemanSayisi = sizeof(sayilar)/sizeof(sayilar[0]);

	printf("+-------------------------------+\n");
	printf("| Ortalama hesaplama fasilitesi |\n");
	printf("+-------------------------------+\n");
	printf("| Aritmetik Ortalama :     %.2f |\n", arithmeticAvg(sayilar, elemanSayisi));
	printf("| Harmonik Ortalama  :     %.2f |\n", harmonicAvg(sayilar, elemanSayisi));
	printf("| Standart Sapma     :     %.2f |\n", standartDeviation(sayilar, elemanSayisi));
	printf("| Mod                :     %.2f |\n", findMod(sayilar, elemanSayisi));
	printf("| Medyan             :     %.2f |\n", findMedian(sayilar, elemanSayisi));
	printf("+-------------------------------+\n");

	return 0;
}
