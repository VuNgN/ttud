#include <iostream>
#include <vector>

using namespace std;

long long n, m;

void in_kq(vector<long long> S)
{
	if(S.size() != m)
		return;
	cout << n << " = ";
	for (int i = 0; i < S.size() - 1; i++)
	{
		cout << S[i] << "+";
	}
	cout << S[S.size() - 1] << endl;
}

void generater(vector<long long> S, long long sum) {
	if (sum < 0) return;
	else if (sum == 0) in_kq(S);
	for (long long i = 1; i <= n; i++) {
		S.push_back(i);
		generater(S, sum - i);
		S.pop_back();
	}
}

int main()
{
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap m = ";
	cin >> m;

	vector<long long> S;
	generater(S, n);
}
