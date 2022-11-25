#include <iostream>
#include <vector>

using namespace std;

vector<int> input;
int m, n, count = 0;

void subarrm(int s, int sum)
{
    if (sum == m)
    {
        count++;
    }
    for (int i = s; i < input.size(); i++)
    {
        sum += input[i];
        subarrm(i + 1, sum);
        sum -= input[i];
    }
}

int main()
{
    vector<int> output;
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;
    input.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> input[i];
    }
    subarrm(0, 0);
    cout << "Co tat ca " << count << " cach phan tich.";
}