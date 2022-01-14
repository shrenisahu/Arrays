#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {2, 5, 1, 8, 2, 9, 1};
    int n = 7;

    int i = 0, j = 0;
    int k = 3;
    int sum = 0;
    int maxSum = INT_MIN;
    while (j < n)
    {

        sum = sum + arr[j];
        if (j - i + 1 < k)
        {

            cout << sum << "   ";
            j++;
        }

     else    if (j - i + 1 == k)
        {

            cout << sum << "   ";
            maxSum = max(maxSum, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    cout << endl
         << maxSum << " ";
}
