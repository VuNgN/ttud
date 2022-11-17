#include<iostream>
#include<vector>

using namespace std;
vector<long long> fibo;
long long dequy(long long n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n%3 == 1) return dequy(n/3*2);
	if (n%3 == 2) return dequy(n/3*2) + dequy(n/3*2 + 1);
	if (n%3 == 3) return dequy(n/3*2) + dequy(n/3*2 + 1) + dequy(n/3*2 + 2);
}

long long array(long long n) {
	vector<long long> fibo;
	fibo.push_back(0);fibo.push_back(1);fibo.push_back(2);
    for (int i = 3; i <= n; i+=3){
        int k = i*0.6666666666666666666666666666666666667;
        fibo.push_back(fibo[k]);
        fibo.push_back(fibo[k] + fibo[k+1]);
        fibo.push_back(fibo[k] + fibo[k+1] + fibo[k+2]);
    }
    return fibo[n];
}

int main() {
	long long n;
	cout << "Nhap n = "; cin >> n;
	cout << "f(" << n << ") = " << array(n);
}
