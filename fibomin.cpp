#include<iostream>
#include<cmath>
using namespace std;

/**
 * Dãy fibonacci là dãy số rất cơ bản cho nhiều bài toán 
 * trong tự nhiên vào khoa học. Dãy thường được định nghĩa một
 * cách truy hồi như sau:
  - F(0) = 0
  - F(1) = 1
  - F(n) = F(n-1) + F(n-2)
 * với n > 1
 * Cho một số nguyên K, 
 * nhiệm vụ của bạn là tìm số fibonacci nhỏ nhất lớn hơn K.
*/

double c = sqrt(5);
double a = (1 + c)*0.5;
double b = (1 - c)*0.5;

long long fibo(long long n) {
    return pow(a, n)/c-pow(b, n)/c;
}

int main(){
    long long k;
    cin >> k;
    long long n = 0;
    long long result = 0;
    do {
        result = fibo(n++);
    } while (result <= k);
    cout << result;
}