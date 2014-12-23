/***********************************
 * Yucel Kurtulus
 * Ogrenci no, bolum filan
 **********************************/
#include <stdio.h>

int* arraySort(int numbers[], int numbersCount) {
	/*
	 * Bu kismi ortalama, mod medyan hesabindan kopya cektik.
	 * Daha once yazmistik, tekrar kullaniyorum.
	 * Daha farkli da yapilabilir
	 * fakat tekerlegi yeniden icat etmenin anlami yok.
	 */
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

int main(void) {
	int numbers[5], i, min, max;

	for(i = 0; i < 5; i++) {
		printf("%d. sayiyi girin\n", i + 1);
		scanf("%d", &numbers[i]);
	}

	int* sorted = arraySort(numbers, 5);

	printf("En kucuk sayi: %d\n", sorted[0]);
	printf("En buyuk sayi: %d\n", sorted[4]);	

	return 0;
}
