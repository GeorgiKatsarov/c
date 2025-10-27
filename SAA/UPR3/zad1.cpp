// Daden e 2d masiv s celi chisla. Da se sustavi 1d masiv s elementi nai golemite obshti deliteli na vseki dva elenenta ochastashti v dvoika ot elementi simetrichni sprqmo glavniq diagonal.

#include <stdio.h>
#include <stdlib.h>

/* Euclidean algorithm (iterative) for GCD */
int gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	if (a == 0) return b;
	if (b == 0) return a;
	while (b != 0) {
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}

int main(){
	int purviMasiv[5][5] =
	{
		{12, 15, 18, 21, 24},
		{30, 35, 40, 45, 50},
		{60, 70, 80, 90, 100},
		{110, 120, 130, 140, 150},
		{160, 170, 180, 190, 200}
	};


	int vtroiMasiv[5] = {0};
	for (int i = 0; i < 5; i++)
	{
		if (i == 4) {
			vtroiMasiv[i] = 0; // No symmetric pair for the last element
			continue;
		}
		int a = purviMasiv[i][i+1];
		int b = purviMasiv[i+1][i];
		vtroiMasiv[i] = gcd(a, b);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("vtroiMasiv[%d] = %d\n", i, vtroiMasiv[i]);
	}
	return 0;
}