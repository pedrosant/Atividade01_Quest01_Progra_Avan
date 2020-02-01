#include<iostream>
#include<stdlib.h>


using namespace std;

int main() {

	float num = 1, den = 1;
	float div;
	float result = 0;

	for (int i = 0; i <= 49; i++) {
		div = (num / den);
		result = result + div;
		if (num < 99) {
			num += 2;
		}

		if (den < 50) {
			den += 1;
		}

	}
	cout << "O resultado e: " << result << "\n";
	return 0;
}