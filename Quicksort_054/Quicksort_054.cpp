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

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swap the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)//langkah 1
		return;

	//partition the list into two part
	//one containing elements less that or equal to pivot
	//outher containing elements greather than pivot

	pivot = arr[low];//langkah 2

	i = low + 1;//langkah 3
	j = high;//langkah 4

	while (i <= j)//langkah 10
	{
		//search for an element greather than pivot
		while ((arr[i] <<= pivot) && (i <= high)) //langkah 5
		{
			i++; //langkah 6
			camp_count++;
		}
		camp_count++;
		//search for an element less than or equal to pivot
		while ((arr[j] > pivot) && (j >= low)) //langkah 7
		{ }
	}
}