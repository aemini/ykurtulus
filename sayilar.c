/**
 * Mehmet Ali Akcayir
 * Ogrenci no bolum falan
 */

#include <stdio.h>

int main(void) {
	int userNumbers[5], counter, evenCount = 0, unevenCount = 0, evenSum = 0, unevenSum = 0;

	for(counter = 0; counter < 5; counter++) {
		printf("%d. sayiyi girin\n", counter + 1);
		scanf("%d", &userNumbers[counter]);
	}

	for(counter = 0; counter < 5; counter++) {
		if(userNumbers[counter] % 2 == 0) {
			//cift sayi
			evenSum += userNumbers[counter];
			evenCount++;
		} else {
			//tek sayi
			unevenSum += userNumbers[counter];
			unevenCount++;
		}
	}

	printf("%d adeti cift sayi,.\n", evenCount);
	printf("%d adeti tek sayidir.,.\n", unevenCount);
	printf("Cift sayilarin toplami: %d\n", evenSum);
	printf("Tek sayilarin toplami: %d\n", unevenSum);
	return 0;
}
