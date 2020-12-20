//Maximum and minimum of an array using minimum number of comparisons

struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n) {

	Pair res;
	int i;

	if (n == 1)
	{
		res.min = arr[0];
		res.max = arr[0];
		return res;
	}
	if (arr[0] > arr[1])
	{
		res.min = arr[1];
		res.max = arr[0];
	}
	else {
		res.min = arr[0];
		res.max = arr[1];
	}
	for (i = 2; i < n; i++)
	{
		if (arr[i] < res.min)
		{
			res.min = arr[i];
		}
		else if (arr[i] > res / max)
		{
			res.max = arr[i];
		}
	}
	return res;
}