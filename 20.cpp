// Next Permutation

//1. using next_permutation function
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        next_permutation(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
//2. without using built-in function
// Next Permutation
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void swap(int *a, int *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //Next Permutation
        int i = 0, j = 0;
        for (i = n - 1; i >= 0; --i)
        {
            if (a[i] > a[i - 1])
                break;
        }

        if (i == 0)
        {
            sort(a, a + n);
        } else {
            int x = a[i - 1], smallest = i;
            for (j = i + 1; j < n; j++)
                if (a[j] > x && a[j] < a[smallest])
                    smallest = j;

            swap(&a[smallest], &a[i - 1]);

            sort(a + i, a + n);
        }



        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}