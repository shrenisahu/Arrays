#include <bits./stdc++.h>
using namespace std;

int main()
{

    string s = "abaacabbbaab";
    int n = s.length();
    int i = 0;
    int j = 0;

    int maxL = INT_MIN;
    unordered_map<char, int> mpp;

    while (j < n)
    {

        mpp[s[j]]++;

        
    if (mpp.size() <= 2)
        {
          

            maxL = max(maxL, j-i+1);
            j++;
        }

       else if (mpp.size() > 2)
        {

            while (mpp.size() > 2)
            {

                mpp[s[i]]--;

                if (mpp[s[i]] == 0)
                {
                    mpp.erase(s[i]);
                }
                i++;
            }

            j++;
        }
    }

    cout << "maxL is " << maxL;
    return 0;
}
