#include <iostream>

using namespace std;

int main() {
	int second = 0;
	cout << "1)\n################################" << endl;
	do {
		second++;
		if (second % 3 == 0) {
			cout << second << endl;
		}
	} while (second < 100);
	second = 0;
	cout << "" << endl;
	cout << "2)\n################################" << endl;
	do {
		second++;
		if (second % 5 == 0) {
			cout << second << endl;
		}
	} while (second < 100);
	second = 0;
	cout << "" << endl;
	cout << "3)\n################################" << endl;
	do {
		second++;
		if (second % 7 == 0) {
			cout << second << endl;
		}
	} while (second < 100);
}

