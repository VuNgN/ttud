#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string w;
    getline(cin, w);
    int m;
    cin >> m;
    vector<long long> arr(m);
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    string z = w;
    reverse(w.begin(), w.end());
    z += w;
    for (int i = 0; i < m; i++)
    {
        int index = arr[i] % z.length();
        cout << z[index] << endl;
    }
}