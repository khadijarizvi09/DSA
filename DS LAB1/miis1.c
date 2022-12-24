//Khadija Rizvi
//Admission No. 2021B0101155
#include <stdio.h>

// Function to find the missing number
int getMissingNo(int a[], int n)
{
	int i, total;
	total = (n + 1) * (n + 2) / 2;
	for (i = 0; i < n; i++)
		total -= a[i];
	return total;
}

// Driver code
void main()
{
	int arr[] = { 1, 2, 3, 5 };
	int N = 4;

	// Function call
	int miss = getMissingNo(arr, N);
	printf("%d", miss);
}
