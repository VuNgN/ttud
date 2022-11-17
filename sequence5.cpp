#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * Cho dãy A gồm N số nguyên đôi một khác nhau. 
 * Đếm xem có bao nhiêu cách lấy ra từ A đúng 5 phần tử 
 * để 5 phần tử đó tạo thành một cấp số cộng.
*/

int countt = 0;

void check(vector<long long> P)
{
    long long tong = (P[P.size() - 1] - P[0]) / 4;
    for (int i = 1; i < P.size(); i++)
    {
        if (P[i] - P[i - 1] != tong)
        {
            return;
        }
    }
    countt += 1;
}

void sequence(vector<long long> S, vector<long long> P, int s)
{
    if (P.size() == 5)
    {
        check(P);
    }
    for (int i = s; i < S.size(); i++)
    {
        if (P.size() < 5)
        {
            P.push_back(S[i]);
            sequence(S, P,i+1);
            P.pop_back();
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<long long> S(n), P;
    for (int i = 0; i < n; i++)
    {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    sequence(S, P,0);
    cout << countt;
}