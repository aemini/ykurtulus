/****************************
 * Yucel Kurtulus
 * Ogrenci no, bolum falan
 ***************************/
#include <stdio.h>

int main(void) {
	int i, a, b, c, number;

	for(i = 100; i < 1000; i++) {

		a, b, c = 0;
		number = i;

		a = number / 100;
		number = i % 100;

		b = number / 10;
		number = number % 10;

		c = number;
		
		if(a*a*a + b*b*b + c*c*c == 100*a + 10*b +c) {
			printf("%d%d%d\n", a, b, c);
		}
	}

	return 0;
}
