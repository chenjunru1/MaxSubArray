#include<iostream>
using namespace std;

void  maxsub(int arr[], int length)
{
	int sum = 0, max = 0;
	if (length <= 0)
		max = 0;
	else for (int i = 0; i < length; i++)
	{
		sum += arr[i];
		if (sum < 0)
			sum = 0;
		else if (sum > max)
			max = sum;
	}
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl << max <<endl;
}
int main()
{
	int n = 6, arr[6] = { -2,11,-4,13,-5,-2 };
	int l = 6, arr1[6] = { -2,-9,-4,-7,-5,-2 };
	int m = 0, arr2[6] = { -2,11,-4,13,-5,-2 };
	maxsub(arr, n);
	maxsub(arr1, l);
	maxsub(arr2, m);
}