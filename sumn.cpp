#include <iostream>
#include <vector>

using namespace std;

long long n;

void in_kq(vector<long long> S)
{
    cout << n << " = ";
    if (S.size() == 1)
    {
        cout << S[0] << endl;
        return;
    }
    for (int i = 0; i < S.size() - 1; i++)
    {
        cout << S[i] << "+";
    }
    cout << S[S.size() - 1] << endl;
}

void genegater(vector<long long> S, long long sum)
{
    if (sum < 0)
        return;
    if (sum == 0)
        in_kq(S);
    for (long long i = n; i > 0; i--)
    {
        if ((S.size() > 0 && S[S.size() - 1] >= i) || S.size() == 0)
        {
            S.push_back(i);
            genegater(S, sum - i);
            S.pop_back();
        }
    }
}

int main()
{
    cout << "Nhap n = ";
    cin >> n;
    vector<long long> S;
    genegater(S, n);
}