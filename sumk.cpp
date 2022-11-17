#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<vector<int>> Count;

int count(int k, int m)
{
    if (Count[k][m] != -1)
        return Count[k][m];

    if (m == 1)
        if (k == 1)
            return Count[k][m] = 1;
        else
            return Count[k][m] = 0;

    int h = k - m;

    if (h == 0)
        return Count[k][m] = count(k, m - 1) + 1;
    else if (h < m)
        return Count[k][m] = count(k, m - 1) + count(h, h);
    else
        return Count[k][m] = count(k, m - 1) + count(h, m - 1);
}

int main()
{
    int k;
    cout << "Nhap k = ";
    cin >> k;
    Count.resize(k + 1);
    for (int i = 1; i <= k; i++)
    {
        Count[i].resize(k);
        fill(Count[i].begin(), Count[i].end(), -1);
    } 
    count(k, k-1);
    cout << "Co tat ca " << Count[k][k-1] << " cach phan tich." << endl;
    for(int i =1; i <=k; i++){
        for(int j=1; j <k; j++)
            cout<< Count[i][j] << " ";
        cout << endl;
    }
}