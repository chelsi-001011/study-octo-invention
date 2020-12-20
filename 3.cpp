//Sort an array of 0s, 1s and 2s
//Expected Time Complexity: O(n)
//Expected Auxiliary Space: O(1)

void sort012(int a[], int n)
{
	int cnt[3] = {0}, j = 0;
	for (int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
	}
	for (int i = 0; i < 3; i++)
	{
		while (cnt[i] > 0)
		{
			a[j++] = i;
			--cnt[i];
		}
	}
}
