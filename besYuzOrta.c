/***********************************
 * Yucek Kurtulus
 * Ogrenci no, bolum filan
 **********************************/
#include <stdio.h>

int main(void) {
	int i, sum = 0, count = 0;
	float avg = 0;

	for(i = 0; i <= 500; i++) {
		if(i % 2 == 1) {
			//uneven number
			sum += i;
			count++;
		}

		avg = (float)sum / (float)count;
	}

	printf("1'den 500'e kadar olan %d adet tek sayinin...\n", count);
	printf("Toplami   : %d\n", sum);
	printf("Ortalamasi: %.2f eder.\n", avg);

	return 0;
}
