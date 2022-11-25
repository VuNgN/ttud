#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int rightTriangles(int p)
{
    int count = 0;
    double c = 0;
    for (int a = 1; a < p / 2; a++)
    {
        for (int b = 1; b < p / 3; b++)
        {
            c = sqrt(a * a - b * b);
            if (a + b > c && b + c > a && a + c > b && c == (int)c) // condition for triangle{
                ++count;
        }
    }
    return count;
}

int main()
{
    int perimeter = 11;
    cout << "Total number of right triangles that can be formed: " << rightTriangles(perimeter);
    return 0;
}