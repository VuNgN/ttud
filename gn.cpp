#include<iostream>

using namespace std;

long long gn(long long n) {
	if (n == 1) return 1;
	if (n == 3) return 3;
	if (n%2 == 0) return gn(n/2);
	if (n%4 == 1) {
		long long c = (n-1)/4;
		return 2*gn(2*c+1) - gn(c);
	}
	if (n%4 == 3) {
		long long c = (n-3)/4;
		return 3*gn(2*c+1) - 2*gn(c);
	}
}

int main() {
	long long n;
	cout << "Nhap n = "; cin >> n;
	cout << "g(" << n << ") = " << gn(n);
}
