// Function to return minimum number of jumps to end of array
//Time Complexity: O(n)
int minJumps(int arr[], int n) {
	if (n <= 1 || arr[0] == 0)
		return -1;

	int jump = 1;//initialise

	int maxReach = arr[0];//max index we can reach from curr index

	int step = arr[0];//steps left

	for (int i = 1; i < n; i++)
	{
		if (i == n - 1)//if we reach the last index return jump
			return jump;

		maxReach = max(maxReach, i + arr[i]);//calculate the maxReach from curr index

		step--;//number of steps left to be taken

		if (step == 0) // if we cannot take any more steps we jump
		{
			jump++;

			if (i >= maxReach) // if this index is not within limits
			{
				return -1;
			}

			step = maxReach - i;//steps left to be taken, since till i we have taken
		}
	}
	return -1;
}
