#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, n, result = 0;
    cout << "Nhap m = ";
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }
    cout << "Nhap n = ";
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "b[" << i + 1 << "] = ";
        cin >> b[i];
    }
    vector<int> v;
    // int i = 0, j = 0;
    // while (i != m && j != n)
    // {
    //     if (a[i] == b[j])
    //     {
    //         v.push_back(a[i]);
    //         i++;
    //         j++;
    //         continue;
    //     }
    //     if ()
    //         i++;
    //     else
    //         j++;
    // }
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = s; j < n; j++)
        {
            if (a[i] == b[j])
            {
                v.push_back(a[i]);
                s = j;
                break;
            }
        }
    }
    // vector<int>::iterator it;
    // while (i !+n)
    //     it = set_intersection(a, a + m, b, b + n, v.begin());
    // v.resize(it - v.begin());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        if (v[i] > 0)
            result += v[i];
    }
    // cout << endl;
    cout << "Day con co tong lon nhat = " << result;
}