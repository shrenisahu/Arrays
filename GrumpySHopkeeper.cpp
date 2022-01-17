#include <bits/stdc++.h>
using namespace std;

int main()
{
    int customers[] = {1, 0, 1, 2, 1, 1, 7, 5};
    int grumpy[] = {0, 1, 0, 1, 0, 1, 0, 1};
    int k = 3;
    int n = 8;
    int avergaeCusSum = 0;

    int i = 0, j = 0;

    int maxl = INT_MIN;

    for (int B = 0; B < n; B++)
    {

        if (grumpy[B] == 0)
        {
            avergaeCusSum = avergaeCusSum + customers[B];
        }
    }

    while (j < n)
    {
        if (grumpy[j] == 1)
        {

            avergaeCusSum =avergaeCusSum+ customers[j];
         
          
        }

        if (j - i + 1 < k)
        {
            j++;
        }

        else if (j - i + 1 == k)
        {
              maxl=max(maxl,avergaeCusSum);

              if(grumpy[i]==1)
              {

            avergaeCusSum = avergaeCusSum - customers[i];
              }

            i++;

            j++;
        }
    }

    cout << maxl;

    return 0;
}
