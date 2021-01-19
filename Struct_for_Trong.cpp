
#include <iostream>
using namespace std;

int binary_search(int arr[], int st, int end, int value)
{
	if (arr[st] > value && arr[end] < value) return -1;

	int mid = (st + end) / 2;

	if (arr[mid] == value) return mid;

	if (arr[mid] > value)
	{
		return binary_search(arr, st, mid, value);
	}
	
	return binary_search(arr, mid, end, value);

}


int main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 10;

	cout << binary_search(ar, 0, n - 1, 8);


}