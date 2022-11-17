#include<iostream>

using namespace std;

long long C (long long n, long long k) {
	long long res = 1;
	for (long long i = 1; i <= k; i++, n--) {
		res = res * n/i;
	}
	return res;
}

int main() {
	long long m, n;
	cout << "Nhap M = "; cin >> m;
	cout << "Nhap N = "; cin >> n;
	cout << "So cach = " << C(m+n, m);
}

