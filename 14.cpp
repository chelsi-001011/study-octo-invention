// Minimize the maximum difference between the heights
int getMinDiff(int arr[], int n, int k) {

    if (n == 1)
        return 0;

    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];

    int big = arr[n - 1] - k, small = arr[0] + k;
    if (big < small)
    {
        swap(big, small);
    }

    for (int i = 1; i < n - 1; i++)
    {
        int subtract = arr[i] - k;
        int add = arr[i] + k;

        if (add <= big || subtract >= small)
        {
            continue;
        }

        if (big - subtract <= add - small)
        {
            small = subtract;
        }
        else {
            big = add;
        }
    }

    return min(ans, big - small);
}