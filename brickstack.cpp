#include<iostream>
#include<algorithm>
using namespace std;

/**
 * Có N viên gạch, được đánh số từ 1 đến N, 
 * các viên gạch có độ cứng lần lượt là 
 * a[1], a[2],..., a[N] là các số nguyên không âm. 
 * Một viên gạch có độ cứng K có nghĩa là 
 * có thể đặt chồng lên nó tối đa K viên gạch khác. 
 * Hỏi có thể xếp chồng gạch tối đa bao nhiêu viên.
*/

int main(){
    int n, count = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; i++){
        if (count <= arr[i]) {
            count++;
        }
    }
    cout << count;
}