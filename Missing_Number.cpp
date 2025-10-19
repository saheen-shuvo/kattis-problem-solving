#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long total = n * (n + 1) / 2;
    long long sum = 0;
    for (long long i = 0, x; i < n - 1; ++i) {
        cin >> x;
        sum += x;
    }
    cout << (total - sum);
    return