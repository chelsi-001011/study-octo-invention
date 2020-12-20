//Move all negative numbers to beginning and positive to end with constant extra space
//Time Complexity: O(N)
//Auxiliary Space: O(1)

void shiftall(int arr[], int left, int right) {
	while (left <= right)
	{
		if (arr[left] < 0 && arr[right] < 0 )
		{
			++left;
		}
		else if (arr[left] > 0 && arr[right] > 0) {
			--right;
		}
		else if (arr[left] > 0 && arr[right] < 0)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			++left;
			--right;
		}
		else {
			++left;
			--right;
		}
	}
}