#include <iostream>

using namespace std;

void rotateArrRight(int arr[], int size)
{

	int temp = arr[size - 1];

	for (int i = size - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[0] = temp;

}

void rotateArrLeft(int arr[], int size)
{
	int temp = arr[0];

	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	arr[size - 1] = temp;
}

int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	rotateArrRight(arr, size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	rotateArrLeft(arr, size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}


}
