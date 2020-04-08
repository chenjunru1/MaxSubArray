#pragma once
int maxsub(int arr[], int length)
{
	int sum = 0, max = 0;
	if (length <= 0)
		return 0;
	else for (int i = 0; i < length; i++)
	{
		sum += arr[i];
		if (sum < 0)
			sum = 0;
		else if (sum > max)
			max = sum;
	}
	return max;
}
