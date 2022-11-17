#include<iostream>
#include <set>

using namespace std;

int main()  {
	long long n, m, tc;
	cin >> tc;
	long long result[tc];
	for (int t=0; t<tc; t++) {
		set<int> s;
		cin >> n;
		long long arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cin >> m;
		long long arr2[m];
		for (int i = 0; i < m; i++) {
			cin >> arr2[i];
		}
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (arr[i] == arr2[j]) {
					s.insert(arr[i]);
				}
			}
		}
		result[t] =s.size();
	}
	
	for(int i=0; i<tc;i++) {
		cout<<result[i]<<endl;
	}
}	
