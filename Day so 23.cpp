#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main() {
    long long n;
    cin >> n;

    long long f[N];
    f[1] = 1;
    f[2] = 1;

    for (ll i = 3; i <= n; i++) {
        f[i] = (2*f[i - 1]%MOD + 3*f[i - 2]%MOD) % MOD;
    }

    cout << f[n] << "\n";

    return 0;
}
