#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//8
		/*for (int i = 20; i <= 50; i = i + 1) {
			if ( 0 == ( i % 3 ) && ( i % 5 ) != 0 ) {
				cout << i << endl;
			}
		}*/

		//9
	/*for (int i = 35; i <= 87; i = i + 1) {
		if ((i % 7) == 1 || (i % 7) == 2 || (i % 7) == 5) {
			cout << i << endl;
		}
	}*/

	//10
	/*int a = 0;
	for (int i = 1; i <= 50; i = i + 1) {
		if (0 == (i % 5) || (i % 7) == 0) {
			a = i + a;
			
		}
		
	}
	cout << a << endl;*/

	//11
	/*for (int i = 10; i >= 10 && i <= 99; i = i + 1) {
		if (0 == (i % 4) && (i % 6) != 0) {
			cout << i << endl;
		}
	}*/

	//12
	/*int a = 1;
	for (int i = 10; i >= 10 && i <= 99; i = i + 1) {
		if (0 != (i % 2) && (i % 13) == 0) {
			a = i * a;
		}
	}
	cout << a << endl;*/

	//13
	/*int a = 0;
	for (int i = 100; i >= 100 && i <= 200; i = i + 1) {
		if ((i % 17) == 0) {
			a = i + a;
		}
	}
	cout << a << endl;*/

	//14
	/*double a = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i = i + 1) {
		
			a = (i * i) + a;
		
	}
	cout << a << endl;*/

	//17
	/*double n;
	double SUMr = 0;
	cin >> n;
	for (int i = 1; i <= n; i = i + 1) {
		double r;
		cin >> r;
		SUMr = SUMr + r;
	}
	double MIDr = SUMr / n;
	cout << MIDr << endl*/; 

	//18
	/*int n;
	cin >> n;
	int k = 0;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			if ((i % 2) != 0 && (i % 3) != 0 && (i % 5) != 0)
			{

				k = k + 1;
			}
		}
		cout << k;
	}
	else {
		cout << "ненатуральное";
	}*/











}