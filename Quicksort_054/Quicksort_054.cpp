#include <iostream>
using namespace std;

//Array of integers to hold value
int arr[20];
int camp_count = 0; // number of comparison
int mov_count = 0; // number of data movement
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMasukan panjang array adalah 20" << endl;
	}
}