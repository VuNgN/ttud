// C++ program to find the number of
// right triangles with given perimeter
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
int countTriangles(int p)
{
    // making a list to store (a, b) pairs
    vector<pair<int, int>> store;

    // no triangle if p is odd
    // if (p % 2 != 0)
    //     return 0;
    // else
    // {
    int count = 0;

    for (int b = 1; b < p / 2; b++)
    {
        float a = (float)p / 2.0f * ((float)((float)p - 2.0 * (float)b) / ((float)p - (float)b));

        int inta = (int)(a);

        if (a == inta)
        {
            // make (a, b) pair in sorted order
            pair<int, int> ab;

            if (inta < b)
            {
                ab = {inta, b};
            }
            else
            {
                ab = {b, inta};
            }

            // check to avoid duplicates
            if (find(store.begin(), store.end(), ab) == store.end())
            {
                count += 1;

                // store the new pair
                store.push_back(ab);
            }
        }
    }
    return count;
    // }
}

// Driver Code
int main()
{
    int p = 13;
    cout << "number of right triangles = " << countTriangles(p);
    return 0;
}

// This code is contributed by rutvik_56.
