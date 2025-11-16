#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long r = (long long) sqrt((long double)n);
    return r * r == n;
}

bool isPerfectNumber(long long n) {
    if (n < 2) return false;
    long long sum = 1;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) sum += n / i;
        }
    }
    return sum == n;
}

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "So chinh phuong: " << (isPerfectSquare(n) ? "YES" : "NO") << "\n";
    cout << "So hoan hao: " << (isPerfectNumber(n) ? "YES" : "NO") << "\n";
    cout << "So nguyen to: " << (isPrime(n) ? "YES" : "NO") << "\n";
    return 0;
}