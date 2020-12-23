// Kadane's Algorithm
// Input:
// N = 5
// arr[] = {1,2,3,-2,5}
// Output: 9

int maxSubarraySum(int a[], int n) {

	int curr_sum = 0, mxSum = 0;
	for (int i = 0; i < n; i++)
	{
		curr_sum += a[i];
		if (curr_sum < 0)
		{
			curr_sum = 0;
		}
		else if (mxSum < curr_sum)
		{
			mxSum = curr_sum;
		}
	}
	return mxSum;

}