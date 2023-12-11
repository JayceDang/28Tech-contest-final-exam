#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;

    long long a[100001];

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long  res = 0;

    for (long long i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            long long kc = a[i - 1] - a[i];
            long long cnt = kc / d;
            a[i] = a[i] + d * (cnt + 1);
            res += cnt + 1;
        }
    }

    cout << res << endl;

    return 0;
}
