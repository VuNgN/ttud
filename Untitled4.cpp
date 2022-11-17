#include<iostream>

using namespace std;

int main()  {
	long long n, dem = 1;
	cin >> n;
	if (n == 0) {
		dem = 0;
	}
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i+1] <= arr[i] ){
			dem += 1;
		}
	}
	cout << dem;
}	
