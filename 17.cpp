// Merge Without Extra Space
// Expected Time Complexity: O((n+m)*log(n+m))
// Expected Auxiliary Space: O(1)
void merge(int arr1[], int arr2[], int n, int m) {
	int j = 0, i = n - 1;
	while (j < m && i >= 0 && arr2[j] < arr1[i])
		swap(arr2[j++], arr1[i--]);
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);
}